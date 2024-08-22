// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYDUMMYDAILYCHAPTERCOLLECTIONPRODUCER_H
#define PXSTORYDUMMYDAILYCHAPTERCOLLECTIONPRODUCER_H



#import "PXStoryTransientChapterCollectionProducer.h"

@interface PXStoryDummyDailyChapterCollectionProducer : PXStoryTransientChapterCollectionProducer

@property (readonly, nonatomic) NSInteger dayInterval; // ivar: _dayInterval


-(id)initWithDayInterval:(NSInteger)arg0 storyQueue:(id)arg1 ;
-(id)initWithStoryQueue:(id)arg0 ;
-(id)workQueue_uneditedChapterCollectionWithAssets:(id)arg0 keyAsset:(id)arg1 ;


@end


#endif