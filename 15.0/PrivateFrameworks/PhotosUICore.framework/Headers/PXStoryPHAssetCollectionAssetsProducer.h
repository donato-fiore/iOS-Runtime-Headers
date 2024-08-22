// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPHASSETCOLLECTIONASSETSPRODUCER_H
#define PXSTORYPHASSETCOLLECTIONASSETSPRODUCER_H

@class PHAssetCollection;
@protocol PXStoryAssetsProducer;

#import <Foundation/Foundation.h>


@interface PXStoryPHAssetCollectionAssetsProducer : NSObject <PXStoryAssetsProducer>



@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


+(BOOL)shouldEnableCurationForAssetCollection:(id)arg0 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)requestAssetsWithOptions:(NSUInteger)arg0 storyQueue:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif