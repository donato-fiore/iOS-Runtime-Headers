// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPHASSETCOLLECTIONASSETSPRODUCER_H
#define PXSTORYPHASSETCOLLECTIONASSETSPRODUCER_H

@class PHAssetCollection, PHAsset, NSArray;
@protocol PXStoryAssetsProducer;

#import <Foundation/Foundation.h>


@interface PXStoryPHAssetCollectionAssetsProducer : NSObject <PXStoryAssetsProducer>



@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSArray *referencePersons; // ivar: _referencePersons


+(BOOL)shouldEnableCurationForAssetCollection:(id)arg0 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 keyAsset:(id)arg1 referencePersons:(id)arg2 options:(NSUInteger)arg3 ;
-(id)requestAssetsWithOptions:(NSUInteger)arg0 storyQueue:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif