// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODEFAULTPHOTOINFOPROVIDER_H
#define GEODEFAULTPHOTOINFOPROVIDER_H

@class NSArray, NSString;
@protocol GEOPhotoInfoProvider;

#import <Foundation/Foundation.h>


@interface GEODefaultPhotoInfoProvider : NSObject <GEOPhotoInfoProvider>

 {
    NSArray *_sortedPhotoInfos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sortedPhotoInfoFromPhotoVersions:(id)arg0 ;
-(CGFloat)sizeRatio;
-(id)bestPhotoForSize:(struct CGSize )arg0 options:(id)arg1 ;
-(id)initWithPhotoContent:(id)arg0 ;
-(id)largestPhoto;
-(int)designatedURLType;


@end


#endif