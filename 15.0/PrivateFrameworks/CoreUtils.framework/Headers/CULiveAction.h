// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CULIVEACTION_H
#define CULIVEACTION_H

@class AVAudioSession, RPCompanionLinkClient, RPCompanionLinkDevice, NSArray, NSString, NSMutableSet, NSMutableDictionary, NSURL;
@protocol CUXPCCodable, CUActivatable, OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUHomeKitManager.h"

@interface CULiveAction : NSObject <CUXPCCodable, CUActivatable>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    AVAudioSession *_audioSession;
    BOOL _clinkActivated;
    RPCompanionLinkClient *_clinkClient;
    RPCompanionLinkDevice *_clinkLocalDevice;
    NSArray *_destinationDevices;
    CUHomeKitManager *_homeKitManager;
    NSString *_homeKitSelfID;
    NSObject<OS_dispatch_source> *_homeKitTimer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _peersActivated;
    BOOL _peersSetupDone;
    BOOL _peersPerformDone;
    NSMutableSet *_peerSessionSet;
    BOOL _performLocally;
    BOOL _prefStereoSpeak;
    NSMutableDictionary *_request;
    int _sessionState;
    BOOL _sentTimingInfo;
    NSObject<OS_os_transaction> *_transaction;
    BOOL _xpcDone;
}


@property (nonatomic) int alertType; // ivar: _alertType
@property (copy, nonatomic) NSArray *destinationIDs; // ivar: _destinationIDs
@property (nonatomic) BOOL direct; // ivar: _direct
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *originatingHomeKitAccessoryID; // ivar: _originatingHomeKitAccessoryID
@property (copy, nonatomic) NSURL *soundFileURL; // ivar: _soundFileURL
@property (copy, nonatomic) NSString *speakText; // ivar: _speakText


-(BOOL)_runPrepareRequest;
-(BOOL)_shouldPerformLocally;
-(id)_findStereoCounterpart:(id)arg0 ;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_invalidate:(BOOL)arg0 ;
-(void)_invalidated;
-(void)_reportError:(id)arg0 where:(char *)arg1 ;
-(void)_run;
-(void)_runCLinkActivateCompleted;
-(void)_runCLinkActivateStart;
-(void)_runCLinkPeersActivateStart;
-(void)_runCLinkPeersPerformStart;
-(void)_runCLinkPeersSetupStart;
-(void)_runFinish;
-(void)_runHomeKitStart;
-(void)_runXPCStart;
-(void)activateWithCompletion:(id)arg0 ;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)invalidate;


@end


#endif