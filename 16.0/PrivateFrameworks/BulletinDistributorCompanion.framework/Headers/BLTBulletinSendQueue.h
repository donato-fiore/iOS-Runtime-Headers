// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTBULLETINSENDQUEUE_H
#define BLTBULLETINSENDQUEUE_H

@class NSMutableArray, NSNumber, NSDate, PBCodable, SWWakingTimer;
@protocol OS_dispatch_queue;


#import "BLTBulletinSendQueuePassthrough.h"
#import "BLTBulletinSendQueueAttachmentSender.h"
#import "BLTSendQueueSerializer.h"

@interface BLTBulletinSendQueue : BLTBulletinSendQueuePassthrough {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_queuedBlockHandlers;
    NSNumber *_timeout;
    NSDate *_lastItemDate;
    PBCodable *_firstRequest;
    unsigned short _firstRequestType;
    NSDate *_lastQueueSendDate;
    BLTBulletinSendQueueAttachmentSender *_attachmentSender;
    BLTSendQueueSerializer *_queueSerializer;
}


@property (retain, nonatomic) SWWakingTimer *timer; // ivar: _timer


-(BOOL)handleFileURL:(id)arg0 ;
-(id)init;
-(void)_queue_performSend;
-(void)_queue_queuePending;
// -(void)_queue_sendRequest:(id)arg0 type:(unsigned short)arg1 withTimeout:(id)arg2 isTrafficRestricted:(BOOL)arg3 didSend:(id)arg4 didQueue:(unk)arg5  ;
-(void)_queue_startTimerWithFireDate:(id)arg0 ;
-(void)queuePending;
-(void)sendNow;
// -(void)sendRequest:(id)arg0 type:(unsigned short)arg1 didSend:(id)arg2 didQueue:(unk)arg3  ;
-(void)sendRequest:(id)arg0 withTimeout:(id)arg1 isTrafficRestricted:(BOOL)arg2 didSend:(id)arg3 ;


@end


#endif