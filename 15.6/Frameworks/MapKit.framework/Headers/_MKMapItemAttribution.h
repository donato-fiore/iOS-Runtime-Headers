// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKMAPITEMATTRIBUTION_H
#define _MKMAPITEMATTRIBUTION_H

@class GEOMapItemAttribution, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _MKMapItemAttribution : NSObject {
    GEOMapItemAttribution *_geoAttribution;
}


@property (readonly, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) NSArray *attributionApps;
@property (readonly, nonatomic) NSArray *attributionURLs;
@property (readonly, nonatomic) NSString *captionDisplayName;
@property (readonly, nonatomic) NSString *providerID;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) BOOL requiresAttributionInCallout;
@property (readonly, nonatomic) BOOL shouldOpenInAppStore;


+(id)attributionFromEncyclopedicInfo:(id)arg0 ;
-(id)initWithGEOMapItemAttribution:(id)arg0 ;
-(id)providerImageAtPath:(id)arg0 scale:(CGFloat)arg1 isTemplate:(BOOL)arg2 ;
-(id)providerLogoImageForScale:(CGFloat)arg0 ;
-(id)providerSnippetLogoImageForScale:(CGFloat)arg0 ;


@end


#endif