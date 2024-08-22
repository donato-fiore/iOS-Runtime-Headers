// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYDUMMYCOUNTCHAPTERCOLLECTIONPRODUCER_H
#define PXSTORYDUMMYCOUNTCHAPTERCOLLECTIONPRODUCER_H



#import "PXStoryTransientChapterCollectionProducer.h"

@interface PXStoryDummyCountChapterCollectionProducer : PXStoryTransientChapterCollectionProducer

@property (readonly, nonatomic) NSInteger countInterval; // ivar: _countInterval


-(id)initWithCountInterval:(NSInteger)arg0 storyQueue:(id)arg1 ;
-(id)initWithStoryQueue:(id)arg0 ;
-(id)workQueue_uneditedChapterCollectionWithAssets:(id)arg0 keyAsset:(id)arg1 ;


@end


#endif