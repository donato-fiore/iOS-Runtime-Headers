// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMEMORYCHAPTERCOLLECTIONPRODUCER_H
#define PXSTORYMEMORYCHAPTERCOLLECTIONPRODUCER_H

@class NSArray, PHMemory;


#import "PXStoryTransientChapterCollectionProducer.h"

@interface PXStoryMemoryChapterCollectionProducer : PXStoryTransientChapterCollectionProducer {
    NSArray *_workQueue_originalPhotosGraphChapters;
}


@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory


+(id)chapterCollectionForPhotosGraphChapters:(id)arg0 assets:(id)arg1 keyAsset:(id)arg2 error:(*id)arg3 ;
+(id)photosGraphChaptersForChapterCollection:(id)arg0 originalPhotosGraphChapters:(id)arg1 error:(*id)arg2 ;
-(id)initWithMemory:(id)arg0 storyQueue:(id)arg1 ;
-(id)initWithStoryQueue:(id)arg0 ;
-(id)workQueue_uneditedChapterCollectionWithAssets:(id)arg0 keyAsset:(id)arg1 ;
-(void)workQueue_saveEditTransaction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif