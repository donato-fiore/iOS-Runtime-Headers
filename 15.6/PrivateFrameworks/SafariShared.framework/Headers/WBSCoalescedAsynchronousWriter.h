// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCOALESCEDASYNCHRONOUSWRITER_H
#define WBSCOALESCEDASYNCHRONOUSWRITER_H

@class NSURL, NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group, WBSCoalescedAsynchronousWriterDelegate;

#import <Foundation/Foundation.h>


@interface WBSCoalescedAsynchronousWriter : NSObject {
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    id *_writerBlock;
    id *_dataSourceBlock;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSDictionary *_fileResourceValues;
    id *_plistDictionarySourceBlock;
    NSUInteger _plistFormat;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    BOOL _done;
    NSString *_name;
}


@property (weak, nonatomic) NSObject<WBSCoalescedAsynchronousWriterDelegate> *delegate; // ivar: _delegate


-(id)_dataForPlistDictionary:(id)arg0 ;
-(id)_dataFromDataSourceOnDataSourceQueue;
// -(id)_initWithName:(id)arg0 fileURL:(id)arg1 writerBlock:(id)arg2 dataSourceQueue:(unk)arg3 dataSourceBlock:(id)arg4 plistDictionarySourceBlock:(id)arg5 plistFormat:(unk)arg6 writeDelayInterval:(id)arg7 fileResourceValues:(unk)arg8  ;
// -(id)_initWithName:(id)arg0 fileURL:(id)arg1 writerBlock:(id)arg2 dataSourceQueue:(unk)arg3 dataSourceBlock:(id)arg4 writeDelayInterval:(id)arg5 fileResourceValues:(unk)arg6  ;
-(id)_plistDictionaryFromDataSourceOnDataSourceQueue;
-(id)_synchronousDataOnDataSourceQueue;
-(id)initWithName:(id)arg0 fileURL:(id)arg1 dataSourceBlock:(id)arg2 ;
// -(id)initWithName:(id)arg0 fileURL:(id)arg1 dataSourceBlock:(id)arg2 writeDelayInterval:(unk)arg3  ;
-(id)initWithName:(id)arg0 fileURL:(id)arg1 dataSourceQueue:(id)arg2 dataSourceBlock:(id)arg3 ;
// -(id)initWithName:(id)arg0 fileURL:(id)arg1 dataSourceQueue:(id)arg2 dataSourceBlock:(id)arg3 fileResourceValues:(unk)arg4  ;
-(id)initWithName:(id)arg0 fileURL:(id)arg1 dataSourceQueue:(id)arg2 plistFormat:(NSUInteger)arg3 plistDictionarySourceBlock:(id)arg4 ;
// -(id)initWithName:(id)arg0 writerBlock:(id)arg1 dataSourceBlock:(unk)arg2  ;
// -(id)initWithName:(id)arg0 writerBlock:(id)arg1 dataSourceQueue:(unk)arg2 dataSourceBlock:(id)arg3  ;
// -(id)initWithName:(id)arg0 writerBlock:(id)arg1 dataSourceQueue:(unk)arg2 plistFormat:(id)arg3 plistDictionarySourceBlock:(NSUInteger)arg4  ;
-(void)_asynchronouslyWriteData:(id)arg0 orPlistDictionary:(id)arg1 completionHandler:(id)arg2 ;
-(void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
-(void)_invalidateTimer;
-(void)_scheduleTimer;
-(void)_timerFired;
-(void)_waitForWriteCompletion;
-(void)_writeData:(id)arg0 ;
-(void)cancelPendingWriteSynchronously;
-(void)completePendingWriteSynchronously;
-(void)dealloc;
-(void)performScheduledWriteSynchronously;
-(void)scheduleWrite;
-(void)startScheduledWriteNow;
-(void)startScheduledWriteNowWithCompletionHandler:(id)arg0 ;


@end


#endif