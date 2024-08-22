// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYTRANSIENTCHAPTERCOLLECTIONPRODUCER_H
#define PXSTORYTRANSIENTCHAPTERCOLLECTIONPRODUCER_H

@class NSString;
@protocol PXStoryTransientChapterCollectionManagerPersistenceDelegate, PXStoryChapterCollectionProducer, PXStoryQueueParticipant, PXStoryErrorReporter, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXStoryTransientChapterCollectionManager.h"

@interface PXStoryTransientChapterCollectionProducer : NSObject <PXStoryTransientChapterCollectionManagerPersistenceDelegate, PXStoryChapterCollectionProducer, PXStoryQueueParticipant>

 {
    PXStoryTransientChapterCollectionManager *_transientChapterCollectionManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_chapterCollectionManagerWithUneditedChapterColection:(id)arg0 ;
-(id)init;
-(id)initWithStoryQueue:(id)arg0 ;
-(id)requestChapterCollectionForKeyAsset:(id)arg0 curatedAssets:(id)arg1 options:(NSUInteger)arg2 resultHandler:(id)arg3 ;
-(id)workQueue_uneditedChapterCollectionWithAssets:(id)arg0 keyAsset:(id)arg1 ;
-(void)_workQueue_persistEditTransaction:(id)arg0 ;
-(void)chapterCollectionManager:(id)arg0 didApplyEditTransaction:(id)arg1 ;
-(void)workQueue_saveEditTransaction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif