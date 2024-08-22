// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPHOTOINFOSOURCE_H
#define GEOPHOTOINFOSOURCE_H

@class NSArray, NSString;
@protocol GEOPhotoInfoSource, GEOPhotoInfoProvider;

#import <Foundation/Foundation.h>

#import "GEOAMPPhotoInfoProvider.h"
#import "GEODefaultPhotoInfoProvider.h"

@interface GEOPhotoInfoSource : NSObject <GEOPhotoInfoSource>

 {
    NSArray *_originalPhotoContent;
    GEOAMPPhotoInfoProvider *_ampPhotoInfoProvider;
    GEODefaultPhotoInfoProvider *_defaultPhotoInfoProvider;
}


@property (readonly, nonatomic) NSArray *allPhotoInfoProviders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOPhotoInfoProvider> *principalPhotoInfoProvider;
@property (readonly) Class superclass;


-(CGFloat)sizeRatio;
-(id)bestPhotoForSize:(struct CGSize )arg0 options:(id)arg1 ;
-(id)initWithPhotoContent:(id)arg0 ;
-(id)largestPhoto;


@end


#endif