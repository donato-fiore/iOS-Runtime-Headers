// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTXPCCONNECTION_H
#define VTXPCCONNECTION_H

@class NSMutableSet, NSString;
@protocol VTXPCService;

#import <Foundation/Foundation.h>

#import "VTSiriPHash.h"

@interface VTXPCConnection : NSObject <VTXPCService>

 {
    NSMutableSet *_activationAssertions;
    BOOL _isPhraseSpotterBypassed;
    BOOL _isRecording;
    VTSiriPHash *_hasher;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(void)_setPhraseSpotterBypassing:(BOOL)arg0 ;
-(void)_setRaiseToSpeakBypassing:(BOOL)arg0 ;
-(void)clearVoiceTriggerCount;
-(void)enableTriggerEventXPCNotification:(BOOL)arg0 ;
-(void)enableVoiceTrigger:(BOOL)arg0 withAssertion:(id)arg1 timestamp:(CGFloat)arg2 ;
-(void)getFirstChanceAudioBufferWithReply:(id)arg0 ;
-(void)getFirstChanceTriggeredDateWithReply:(id)arg0 ;
-(void)getFirstChanceVTEventInfoWithReply:(id)arg0 ;
-(void)getTestResponse:(id)arg0 ;
-(void)getVoiceTriggerCountWithReply:(id)arg0 ;
-(void)handleDisconnect;
-(void)isLastTriggerFollowedBySpeechWithReply:(id)arg0 ;
-(void)notifySecondChanceRequest;
-(void)notifyTriggerEventRequest;
-(void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg0 ;
-(void)queryLastTriggerEventTypeWithReply:(id)arg0 ;
-(void)requestAudioCapture:(CGFloat)arg0 ;
-(void)requestCurrentBuiltInRTModelDictionaryWithReply:(id)arg0 ;
-(void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id)arg0 ;
-(void)resetAssertions;
-(void)setCurrentBuiltInRTModelDictionary:(id)arg0 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;


@end


#endif