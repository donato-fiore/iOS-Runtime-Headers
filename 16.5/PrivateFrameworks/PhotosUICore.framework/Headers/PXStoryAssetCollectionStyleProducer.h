// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYASSETCOLLECTIONSTYLEPRODUCER_H
#define PXSTORYASSETCOLLECTIONSTYLEPRODUCER_H

@protocol PXStoryStylesProducer, PXDisplayAssetCollection, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryAssetCollectionStyleProducer : NSObject <PXStoryStylesProducer>



@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithAssetCollection:(id)arg0 ;
-(id)requestStylesWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif