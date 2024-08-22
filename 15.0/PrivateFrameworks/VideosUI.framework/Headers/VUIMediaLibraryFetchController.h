// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIALIBRARYFETCHCONTROLLER_H
#define VUIMEDIALIBRARYFETCHCONTROLLER_H

@class NSOperation, NSString, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VUIMediaLibrary.h"

@interface VUIMediaLibraryFetchController : NSObject

@property (retain, nonatomic) NSOperation *fetchOperation; // ivar: _fetchOperation
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *logName; // ivar: _logName
@property (copy, nonatomic) NSString *logNameSuffix; // ivar: _logNameSuffix
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (nonatomic) NSUInteger mediaLibraryRevision; // ivar: _mediaLibraryRevision
@property (nonatomic) NSUInteger pauseCount; // ivar: _pauseCount
@property (retain, nonatomic) NSOperationQueue *serialFetchOperationQueue; // ivar: _serialFetchOperationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue
@property NSInteger state; // ivar: _state


+(id)_logStringWithFetchControllers:(id)arg0 ;
-(BOOL)_shouldFetchForMediaLibraryRevision:(NSUInteger)arg0 ;
-(BOOL)_updateMutableArray:(id)arg0 withLatestObjects:(id)arg1 changeSet:(id)arg2 updateOnNoChanges:(BOOL)arg3 ;
-(id)_fetchOperationForFetchReason:(NSInteger)arg0 ;
-(id)init;
-(id)initWithMediaLibrary:(id)arg0 ;
-(void)_cancelFetch;
-(void)_didCompleteFetchOperation:(id)arg0 ;
-(void)_enqueueAsyncProcessingQueueBlock:(id)arg0 ;
-(void)_enqueueFetchWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;
// -(void)_enqueueProcessingQueueBlock:(id)arg0 synchronous:(unk)arg1  ;
-(void)_enqueueSyncProcessingQueueBlock:(id)arg0 ;
-(void)_fetchOperationCompleted:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_moveToPausedState;
-(void)_startFetchIfNeededWithMediaLibraryRevision:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_startFetchWithCompletionHandler:(id)arg0 ;
// -(void)beginFetchWithMediaLibraryRevision:(NSUInteger)arg0 completionHandler:(id)arg1 completionQueue:(unk)arg2  ;
-(void)cancelFetch;
-(void)pause;
-(void)resume;


@end


#endif