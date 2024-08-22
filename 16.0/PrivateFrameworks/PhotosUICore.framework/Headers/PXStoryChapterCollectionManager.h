// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCHAPTERCOLLECTIONMANAGER_H
#define PXSTORYCHAPTERCOLLECTIONMANAGER_H

@class NSMutableArray;
@protocol PXStoryMutableChapterCollectionManager, PXStoryChapterCollection;


#import "PXObservable.h"

@interface PXStoryChapterCollectionManager : PXObservable <PXStoryMutableChapterCollectionManager>



@property (retain, nonatomic) NSObject<PXStoryChapterCollection> *chapterCollection; // ivar: _chapterCollection
@property (copy, nonatomic) id *pendingCompletionHandler; // ivar: _pendingCompletionHandler
@property (retain, nonatomic) NSMutableArray *pendingEdits; // ivar: _pendingEdits


-(BOOL)applyEditTransaction:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithChapterCollection:(id)arg0 ;
-(void)deleteChapterWithIdentifier:(id)arg0 ;
-(void)didPerformChanges;
-(void)editChapterWithIdentifier:(id)arg0 changeRequest:(id)arg1 ;
-(void)insertChapterWithFirstAsset:(id)arg0 configuration:(id)arg1 ;
// -(void)performChanges:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif