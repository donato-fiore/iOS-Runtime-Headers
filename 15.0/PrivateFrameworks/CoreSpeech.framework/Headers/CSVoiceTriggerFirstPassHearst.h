// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERFIRSTPASSHEARST_H
#define CSVOICETRIGGERFIRSTPASSHEARST_H

@class CSAsset, NSString, NSMutableDictionary;
@protocol CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate, CSPhoneCallStateMonitorDelegate, CSVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioProvider.h"
#import "CSAudioStreamHolding.h"

@interface CSVoiceTriggerFirstPassHearst : NSObject <CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate, CSPhoneCallStateMonitorDelegate>



@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *hearstSecondPassRequests; // ivar: _hearstSecondPassRequests
@property (nonatomic) float minimumPhraseLengthForVADGating; // ivar: _minimumPhraseLengthForVADGating
@property (nonatomic) NSUInteger phoneCallState; // ivar: _phoneCallState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) float remoteMicVADMyriadThreshold; // ivar: _remoteMicVADMyriadThreshold
@property (nonatomic) float remoteMicVADThreshold; // ivar: _remoteMicVADThreshold
@property (nonatomic) NSUInteger secondChanceHotTillMachTime; // ivar: _secondChanceHotTillMachTime
@property (readonly) Class superclass;
@property (retain, nonatomic) CSAudioProvider *triggeredAudioProvider; // ivar: _triggeredAudioProvider
@property (retain, nonatomic) CSAudioStreamHolding *triggeredAudioStreamHolding; // ivar: _triggeredAudioStreamHolding


-(id)init;
-(void)CSPhoneCallStateMonitor:(id)arg0 didRecievePhoneCallStateChange:(NSUInteger)arg1 ;
-(void)_cancelAllAudioStreamHoldings;
-(void)_handleRemoteMicVADEventWithSecondPassRequest:(id)arg0 ;
-(void)_handleRemoteMicVoiceTriggerEvent:(id)arg0 secondPassRequest:(id)arg1 completion:(id)arg2 ;
-(void)_handleSecondPassResult:(NSUInteger)arg0 secondPassRequest:(id)arg1 voiceTriggerInfo:(id)arg2 deviceId:(id)arg3 secondChanceCandidate:(BOOL)arg4 error:(id)arg5 completion:(id)arg6 ;
-(void)_requestStartAudioStreamWitContext:(id)arg0 secondPassRequest:(id)arg1 startStreamOption:(id)arg2 completion:(id)arg3 ;
-(void)_reset;
-(void)_setAsset:(id)arg0 ;
-(void)activationEventNotificationHandler:(id)arg0 event:(id)arg1 completion:(id)arg2 ;
-(void)reset;
-(void)setAsset:(id)arg0 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 withEventUUID:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)start;


@end


#endif