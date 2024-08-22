// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCOMPANIONSYNCSERVICE_H
#define VCCOMPANIONSYNCSERVICE_H

@class NSSet, WFDebouncer, NSString, SYService;
@protocol SYServiceDelegate, VCCompanionSyncSessionDelegate, VCCompanionSyncServiceDelegate, OS_dispatch_queue, VCSyncDataEndpoint;

#import <Foundation/Foundation.h>

#import "VCCompanionSyncSession.h"
#import "VCNRDeviceSyncService.h"

@interface VCCompanionSyncService : NSObject <SYServiceDelegate, VCCompanionSyncSessionDelegate>



@property (copy, nonatomic) NSSet *currentDataHandlers; // ivar: _currentDataHandlers
@property (retain, nonatomic) VCCompanionSyncSession *currentSession; // ivar: _currentSession
@property (copy, nonatomic) VCNRDeviceSyncService *currentSyncService; // ivar: _currentSyncService
@property (readonly, nonatomic) WFDebouncer *debouncer; // ivar: _debouncer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VCCompanionSyncServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) SYService *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<VCSyncDataEndpoint> *syncDataEndpoint; // ivar: _syncDataEndpoint


-(BOOL)isRunningOnWatch;
-(BOOL)service:(id)arg0 startSession:(id)arg1 error:(*id)arg2 ;
-(id)initWithSyncDataEndpoint:(id)arg0 ;
-(void)companionSyncSession:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)companionSyncSession:(id)arg0 didUpdateProgress:(CGFloat)arg1 ;
-(void)companionSyncSessionDidFinishSendingChanges:(id)arg0 ;
-(void)configureReasonForUnderlyingSession:(id)arg0 withSession:(id)arg1 ;
-(void)dealloc;
-(void)requestFullResync;
-(void)requestSync;
-(void)requestSyncImmediately;
-(void)resetSession;
-(void)resumeServiceIfNecessary;
-(void)service:(id)arg0 didSwitchFromPairingID:(id)arg1 toPairingID:(id)arg2 ;
-(void)service:(id)arg0 encounteredError:(id)arg1 context:(id)arg2 ;
-(void)service:(id)arg0 willSwitchFromPairingID:(id)arg1 toPairingID:(id)arg2 ;
-(void)updateCurrentSyncServiceIfNecessary;
-(void)updateSyncDataHandlers;


@end


#endif