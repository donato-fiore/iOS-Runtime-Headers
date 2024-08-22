// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTCOMPANIONSYNCSERVICE_H
#define MTCOMPANIONSYNCSERVICE_H

@class NSString, NSMutableDictionary, SYService;
@protocol SYServiceDelegate, MTSyncStatusProviderDelegate, MTSyncService, MTSyncServiceDelegate, OS_dispatch_queue, NAScheduler, MTSyncStatusProvider;

#import <Foundation/Foundation.h>

#import "MTCompanionSyncSession.h"
#import "MTExponentialBackOffTimer.h"

@interface MTCompanionSyncService : NSObject <SYServiceDelegate, MTSyncStatusProviderDelegate, MTSyncService>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTSyncServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *pendingRequests; // ivar: _pendingRequests
@property (retain, nonatomic) MTCompanionSyncSession *receivingSession; // ivar: _receivingSession
@property (retain, nonatomic) MTExponentialBackOffTimer *retryTimer; // ivar: _retryTimer
@property (retain, nonatomic) MTCompanionSyncSession *sendingSession; // ivar: _sendingSession
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (retain, nonatomic) SYService *service; // ivar: _service
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<MTSyncStatusProvider> *syncStatusProvider; // ivar: _syncStatusProvider


+(BOOL)shouldRetryForError:(id)arg0 ;
-(BOOL)resume:(*id)arg0 ;
-(BOOL)service:(id)arg0 startReceivingSession:(id)arg1 error:(*id)arg2 ;
-(BOOL)service:(id)arg0 startSendingSession:(id)arg1 error:(*id)arg2 ;
-(BOOL)service:(id)arg0 startSession:(id)arg1 error:(*id)arg2 ;
-(id)initWithSyncStatusProvider:(id)arg0 ;
-(id)requestSync:(NSUInteger)arg0 ;
-(id)service:(id)arg0 willPreferSession:(id)arg1 overSession:(id)arg2 ;
-(void)_requestSync:(NSUInteger)arg0 ;
-(void)_retryRequest;
-(void)service:(id)arg0 receivingSessionEnded:(id)arg1 error:(id)arg2 ;
-(void)service:(id)arg0 sendingSessionEnded:(id)arg1 error:(id)arg2 ;
-(void)service:(id)arg0 sessionEnded:(id)arg1 error:(id)arg2 ;
-(void)suspend;
-(void)syncStatusProvider:(id)arg0 didChangeSyncStatus:(NSUInteger)arg1 ;


@end


#endif