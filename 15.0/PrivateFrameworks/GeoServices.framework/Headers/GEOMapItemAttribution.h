// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPITEMATTRIBUTION_H
#define GEOMAPITEMATTRIBUTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOSearchAttributionInfo.h"

@interface GEOMapItemAttribution : NSObject {
    GEOSearchAttributionInfo *_info;
    NSString *_yelpID;
    NSString *_poiID;
}


@property (readonly, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) NSArray *attributionApps;
@property (readonly, nonatomic) NSArray *attributionURLs; // ivar: _attributionURLs
@property (readonly, nonatomic) NSString *captionDisplayName;
@property (readonly, nonatomic) NSString *providerID;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) BOOL requiresAttributionInCallout;
@property (readonly, nonatomic) BOOL shouldOpenInAppStore;
@property (readonly, nonatomic) NSString *webBaseActionURL;


+(id)attributionWithDataAttribution:(id)arg0 searchInfo:(id)arg1 class:(Class)arg2 ;
-(id)_yelpHTTPURLForRequirement:(int)arg0 withUID:(id)arg1 writeAReview:(BOOL)arg2 ;
-(id)initWithSearchAttributionInfo:(id)arg0 attributionURLs:(id)arg1 ;
-(id)initWithSearchAttributionInfo:(id)arg0 attributionURLs:(id)arg1 poiID:(id)arg2 ;
-(id)initWithSearchAttributionInfo:(id)arg0 attributionURLs:(id)arg1 yelpID:(id)arg2 ;
-(id)providerLogoPathForScale:(CGFloat)arg0 ;
-(id)providerSnippetLogoPathForScale:(CGFloat)arg0 ;


@end


#endif