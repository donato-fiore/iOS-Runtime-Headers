// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHBATCHPERFORMCHANGES_H
#define PHBATCHPERFORMCHANGES_H


#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHBatchPerformChanges : NSObject {
    PHPhotoLibrary *_library;
    NSUInteger _itemCount;
    NSUInteger _batchSize;
    id *_batchBlock;
}




-(BOOL)_addBatchRangeAtIndex:(NSUInteger)arg0 toOutError:(*id)arg1 ;
-(BOOL)_hasMoreBatchesAtIndex:(NSUInteger)arg0 ;
-(BOOL)_performChangesAndWaitStartingAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)performChangesAndWait:(*id)arg0 ;
-(NSUInteger)_performBatchAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_performBatchAtIndexAndWait:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)_errorByAddingBatchRangeAtIndex:(NSUInteger)arg0 tofError:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 itemCount:(NSUInteger)arg1 batchSize:(NSUInteger)arg2 batchBlock:(id)arg3 ;
-(struct _NSRange )_batchRangeAtIndex:(NSUInteger)arg0 ;
-(void)_performChangesStartingAtIndex:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)_performNextBatchAtIndex:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)performChangesWithCompletionHandler:(id)arg0 ;


@end


#endif