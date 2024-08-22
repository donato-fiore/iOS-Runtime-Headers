// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDATASTREAMBULKSENDSESSION_H
#define HMDDATASTREAMBULKSENDSESSION_H

@class NSString, NSError, NSMutableArray, NSNumber;
@protocol HMFLogging, HMDDataStreamBulkSendSession, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDDataStreamBulkSendProtocol.h"

@interface HMDDataStreamBulkSendSession : NSObject <HMFLogging, HMDDataStreamBulkSendSession>

 {
    BOOL _isClosed;
    BOOL _hasReceivedEof;
}


@property (readonly, getter=isActive) BOOL active;
@property (copy, nonatomic) id *activeReadHandler; // ivar: _activeReadHandler
@property (readonly, weak, nonatomic) HMDDataStreamBulkSendProtocol *bulkSendProtocol; // ivar: _bulkSendProtocol
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (retain, nonatomic) NSError *pendingError; // ivar: _pendingError
@property (retain, nonatomic) NSMutableArray *pendingReads; // ivar: _pendingReads
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSNumber *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithProtocol:(id)arg0 sessionIdentifier:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 ;
-(void)_closeSession;
-(void)_pumpReadDataIfPossible;
-(void)asyncHandleIncomingPackets:(id)arg0 isEof:(BOOL)arg1 ;
-(void)asyncHandleRemoteCloseWithError:(id)arg0 ;
-(void)cancelWithReason:(unsigned short)arg0 ;
-(void)dealloc;
-(void)read:(id)arg0 ;


@end


#endif