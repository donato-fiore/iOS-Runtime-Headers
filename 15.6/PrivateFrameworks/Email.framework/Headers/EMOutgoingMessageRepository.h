// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMOUTGOINGMESSAGEREPOSITORY_H
#define EMOUTGOINGMESSAGEREPOSITORY_H

@class NSString, NSMutableArray, NSNumber;
@protocol EFLoggable, EMOutgoingMessageRepositoryInterfaceObserver, EFCancelable, EFScheduler;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface EMOutgoingMessageRepository : NSObject <EFLoggable, EMOutgoingMessageRepositoryInterfaceObserver>

 {
    uint8_t _hasStartedObservingUnsentChanges;
}


@property (retain) EMRemoteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (retain, nonatomic) NSNumber *pendingMessages; // ivar: _pendingMessages
@property (retain) NSObject<EFCancelable> *registrationCancelable; // ivar: _registrationCancelable
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


+(id)log;
+(id)remoteInterface;
+(id)signpostLog;
-(BOOL)isProcessing;
-(BOOL)outboxContainsMessageFromAccount:(id)arg0 ;
-(NSUInteger)numberOfPendingMessages;
-(NSUInteger)signpostID;
-(id)deliverMessage:(id)arg0 usingMailDrop:(BOOL)arg1 ;
-(id)initWithRemoteConnection:(id)arg0 ;
-(id)saveDraftMessage:(id)arg0 mailboxObjectID:(id)arg1 previousDraftObjectID:(id)arg2 ;
-(void)_restartObservingUnsentChangesIfNecessary;
-(void)_startObservingUnsentChangesIfNecessary;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)deleteDraftsInMailbox:(id)arg0 documentID:(id)arg1 previousDraftObjectID:(id)arg2 ;
-(void)numberOfPendingMessagesChanged:(id)arg0 ;
-(void)processAllQueuedMessages;
-(void)removeObserver:(id)arg0 ;
-(void)resumeDeliveryQueue;
-(void)suspendDeliveryQueue;
-(void)updateObservers;


@end


#endif