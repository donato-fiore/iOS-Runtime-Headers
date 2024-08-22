// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERFIRSTPASSHEARST_H
#define CSVOICETRIGGERFIRSTPASSHEARST_H

@class CSVoiceTriggerAirPodWearerDetectionConfig, CSAsset, NSString, NSMutableDictionary, NSArray;
@protocol CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate, CSPhoneCallStateMonitorDelegate, CSVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSOtherAppRecordingStateMonitor.h"
#import "CSPhoneCallStateMonitor.h"
#import "CSSiriClientBehaviorMonitor.h"
#import "CSSpeechManager.h"
#import "CSAudioProvider.h"
#import "CSAudioStreamHolding.h"
#import "CSVoiceTriggerEnabledMonitor.h"

@interface CSVoiceTriggerFirstPassHearst : NSObject <CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate, CSPhoneCallStateMonitorDelegate>



@property (retain, nonatomic) CSVoiceTriggerAirPodWearerDetectionConfig *airpodWearerConfig; // ivar: _airpodWearerConfig
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *hearstSecondPassRequests; // ivar: _hearstSecondPassRequests
@property (nonatomic) float minimumPhraseLengthForVADGating; // ivar: _minimumPhraseLengthForVADGating
@property (retain, nonatomic) CSOtherAppRecordingStateMonitor *otherAppRecordingStateMonitor; // ivar: _otherAppRecordingStateMonitor
@property (nonatomic) NSUInteger phoneCallState; // ivar: _phoneCallState
@property (retain, nonatomic) CSPhoneCallStateMonitor *phoneCallStateMonitor; // ivar: _phoneCallStateMonitor
@property (retain, nonatomic) NSArray *phrasesToSkipBoronDecisionMaking; // ivar: _phrasesToSkipBoronDecisionMaking
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) float remoteMicVADMyriadThreshold; // ivar: _remoteMicVADMyriadThreshold
@property (nonatomic) float remoteMicVADThreshold; // ivar: _remoteMicVADThreshold
@property (retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor; // ivar: _siriClientBehaviorMonitor
@property (retain, nonatomic) CSSpeechManager *speechManager; // ivar: _speechManager
@property (readonly) Class superclass;
@property (retain, nonatomic) CSAudioProvider *triggeredAudioProvider; // ivar: _triggeredAudioProvider
@property (retain, nonatomic) CSAudioStreamHolding *triggeredAudioStreamHolding; // ivar: _triggeredAudioStreamHolding
@property (retain, nonatomic) CSVoiceTriggerEnabledMonitor *voiceTriggerEnabledMonitor; // ivar: _voiceTriggerEnabledMonitor


-(id)init;
-(id)initWithSpeechManager:(id)arg0 voiceTriggerEnabledMonitor:(id)arg1 siriClientBehaviorMonitor:(id)arg2 phoneCallStateMonitor:(id)arg3 otherAppRecordingStateMonitor:(id)arg4 ;
-(void)CSPhoneCallStateMonitor:(id)arg0 didRecievePhoneCallStateChange:(NSUInteger)arg1 ;
-(void)_cancelAllAudioStreamHoldings;
-(void)_handleRemoteMicVADEventWithSecondPassRequest:(id)arg0 ;
-(void)_handleRemoteMicVoiceTriggerEvent:(id)arg0 secondPassRequest:(id)arg1 completion:(id)arg2 ;
-(void)_handleSecondPassResult:(id)arg0 secondPassRequest:(id)arg1 deviceId:(id)arg2 error:(id)arg3 completion:(id)arg4 ;
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