// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEDIAPROVIDERIMAGECACHER_H
#define PXMEDIAPROVIDERIMAGECACHER_H

@class NSCountedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PXMediaProvider.h"

@interface PXMediaProviderImageCacher : NSObject

@property (weak, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) NSCountedSet *requestCountByCacheSpec; // ivar: _requestCountByCacheSpec
@property (readonly, nonatomic) NSMutableDictionary *requestIDByCacheSpec; // ivar: _requestIDByCacheSpec


-(id)initWithMediaProvider:(id)arg0 ;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif