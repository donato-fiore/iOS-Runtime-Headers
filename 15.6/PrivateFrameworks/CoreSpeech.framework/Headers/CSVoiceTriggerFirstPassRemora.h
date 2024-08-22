// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVOICETRIGGERFIRSTPASSREMORA_H
#define CSVOICETRIGGERFIRSTPASSREMORA_H

@class NSMutableDictionary, CSAsset, NSString;
@protocol CSActivationEventNotificationHandlerDelegate, CSAccessorySiriClientBehaviorMonitorDelegate, CSSecondPassProgressProviding, CSVoiceTriggerDelegate, OS_dispatch_queue, CSSecondPassProgressDelegate;

#import <Foundation/Foundation.h>

#import "CSAudioProvider.h"

@interface CSVoiceTriggerFirstPassRemora : NSObject <CSActivationEventNotificationHandlerDelegate, CSAccessorySiriClientBehaviorMonitorDelegate, CSSecondPassProgressProviding>



@property (retain, nonatomic) NSMutableDictionary *accessoryFirstPassGoodnessScores; // ivar: _accessoryFirstPassGoodnessScores
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *remoraSecondPassRequests; // ivar: _remoraSecondPassRequests
@property (nonatomic) NSUInteger secondChanceHotTillMachTime; // ivar: _secondChanceHotTillMachTime
@property (weak, nonatomic) NSObject<CSSecondPassProgressDelegate> *secondPassProgressDelegate; // ivar: _secondPassProgressDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) CSAudioProvider *triggeredAudioProvider; // ivar: _triggeredAudioProvider
@property (retain, nonatomic) NSMutableDictionary *triggeredAudioStreamHoldingByAccessoryId; // ivar: _triggeredAudioStreamHoldingByAccessoryId


-(id)initWithQueue:(id)arg0 ;
-(void)_cancelAllAudioStreamHoldings;
-(void)_cancelAudioStreamHoldingForAccessoryWithId:(id)arg0 ;
-(void)_createSecondPassRequestIfNecessaryForActivationEvent:(id)arg0 completion:(id)arg1 ;
-(void)_handleRemoraTriggerEvent:(id)arg0 secondPassRequest:(id)arg1 completion:(id)arg2 ;
-(void)_handleSecondPassResult:(NSUInteger)arg0 secondPassRequest:(id)arg1 voiceTriggerInfo:(id)arg2 deviceId:(id)arg3 secondChanceCandidate:(BOOL)arg4 error:(id)arg5 completion:(id)arg6 ;
-(void)_requestStartAudioStreamProviderWithContext:(id)arg0 secondPassRequest:(id)arg1 startStreamOption:(id)arg2 completion:(id)arg3 ;
-(void)_reset;
-(void)_setDeviceIds:(id)arg0 ;
-(void)_setIsSecondPassing:(BOOL)arg0 forDeviceId:(id)arg1 ;
-(void)accessorySiriClientBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 forAccessory:(id)arg5 ;
-(void)accessorySiriClientBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 reason:(NSUInteger)arg2 withEventUUID:(id)arg3 forAccessory:(id)arg4 ;
-(void)accessorySiriClientBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 forAccessory:(id)arg3 ;
-(void)accessorySiriClientBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 reason:(NSUInteger)arg2 forAccessory:(id)arg3 ;
-(void)activationEventNotificationHandler:(id)arg0 event:(id)arg1 completion:(id)arg2 ;
-(void)cancelSecondPassRunning;
-(void)pendingSecondPassTriggerWasClearedForClient:(NSUInteger)arg0 deviceId:(id)arg1 ;
-(void)reset;
-(void)setConnectedDeviceIds:(id)arg0 ;
-(void)start;


@end


#endif