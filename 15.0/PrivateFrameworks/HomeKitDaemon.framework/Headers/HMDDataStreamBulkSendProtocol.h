// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDATASTREAMBULKSENDPROTOCOL_H
#define HMDDATASTREAMBULKSENDPROTOCOL_H

@class NSMapTable, NSString, NSMutableDictionary;
@protocol HMFLogging, HMDDataStreamProtocol, HMFTimerDelegate, HMDDataStreamProtocolDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDDataStreamBulkSendProtocol : NSObject <HMFLogging, HMDDataStreamProtocol, HMFTimerDelegate>



@property (weak, nonatomic) id *accessory; // ivar: _accessory
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) NSMapTable *activeBulkSendSessions; // ivar: _activeBulkSendSessions
@property (readonly) id *bulkSendSessionContextFactory; // ivar: _bulkSendSessionContextFactory
@property (weak, nonatomic) NSObject<HMDDataStreamProtocolDelegate> *dataStream; // ivar: _dataStream
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (retain, nonatomic) NSMapTable *listeners; // ivar: _listeners
@property (readonly, copy, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property unsigned int nextSessionIdentifier; // ivar: _nextSessionIdentifier
@property (readonly) NSMutableDictionary *pendingBulkSendSessionContextBySessionIdentifier; // ivar: _pendingBulkSendSessionContextBySessionIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)logCategory;
+(id)protocolName;
-(id)_createSessionCandidateWithRequestHeader:(id)arg0 metadata:(id)arg1 ;
-(id)_createSessionFromCandidate:(id)arg0 queue:(id)arg1 ;
-(id)_createSessionIdentifier;
-(id)_getBulkSendSessionForSessionIdentifier:(id)arg0 ;
-(id)initWithQueue:(id)arg0 accessory:(id)arg1 logIdentifier:(id)arg2 ;
-(id)initWithQueue:(id)arg0 accessory:(id)arg1 logIdentifier:(id)arg2 bulkSendSessionContextFactory:(id)arg3 ;
-(void)_cancelSessionWithIdentifier:(id)arg0 reason:(unsigned short)arg1 hadReceivedEof:(BOOL)arg2 ;
-(void)_closeAllSessionsWithError:(id)arg0 ;
-(void)_handleCloseMessage:(id)arg0 ;
-(void)_handleDataMessage:(id)arg0 ;
-(void)_handleOpenWithRequestHeader:(id)arg0 payload:(id)arg1 ;
-(void)_maybeSubmitMetricForDroppedOpenRequestOfType:(id)arg0 ;
-(void)_notifyActiveStatusChangedFromPreviousValue:(BOOL)arg0 ;
-(void)_openSessionForFileType:(id)arg0 reason:(id)arg1 metadata:(id)arg2 queue:(id)arg3 callback:(id)arg4 ;
-(void)_pumpMessage:(id)arg0 session:(id)arg1 ;
-(void)_pumpReceiveFailure:(id)arg0 session:(id)arg1 ;
-(void)_rejectSessionCandidate:(id)arg0 status:(unsigned short)arg1 ;
-(void)_removeBulkSendSessionForSessionIdentifier:(id)arg0 ;
-(void)_sendAckMessageWithIdentifier:(id)arg0 ;
-(void)_sendCloseMessageWithIdentifier:(id)arg0 reason:(unsigned short)arg1 ;
-(void)_sendOpenResponseWithRequestHeader:(id)arg0 bulkSendStatus:(unsigned short)arg1 ;
-(void)_sendOpenResponseWithRequestHeader:(id)arg0 status:(unsigned short)arg1 ;
-(void)_sendOpenResponseWithRequestHeader:(id)arg0 streamIdentifier:(id)arg1 ;
-(void)_startSessionCandidate:(id)arg0 queue:(id)arg1 callback:(id)arg2 ;
-(void)addListener:(id)arg0 fileType:(id)arg1 ;
-(void)asyncBulkSendSessionCandidate:(id)arg0 didAcceptOnQueue:(id)arg1 callback:(id)arg2 ;
-(void)asyncBulkSendSessionCandidate:(id)arg0 didRejectWithStatus:(unsigned short)arg1 ;
-(void)asyncBulkSendSessionDidCancelSessionWithIdentifier:(id)arg0 reason:(unsigned short)arg1 hadReceivedEof:(BOOL)arg2 ;
-(void)dataStream:(id)arg0 didFailWithError:(id)arg1 ;
-(void)dataStream:(id)arg0 didReceiveEvent:(id)arg1 header:(id)arg2 payload:(id)arg3 ;
-(void)dataStream:(id)arg0 didReceiveRequest:(id)arg1 header:(id)arg2 payload:(id)arg3 ;
-(void)dataStream:(id)arg0 didReceiveResponse:(id)arg1 header:(id)arg2 payload:(id)arg3 ;
-(void)dataStreamDidClose:(id)arg0 ;
-(void)dataStreamDidOpen:(id)arg0 ;
-(void)dataStreamInitiatedClose:(id)arg0 ;
-(void)openSessionForFileType:(id)arg0 reason:(id)arg1 metadata:(id)arg2 queue:(id)arg3 callback:(id)arg4 ;
-(void)removeListener:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif