// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTXPCSERVICECLIENT_H
#define VTXPCSERVICECLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTXPCServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
}




-(NSInteger)getVoiceTriggerCount;
-(NSInteger)isLastTriggerFollowedBySpeech;
-(id)_service;
-(id)getFirstChanceAudioBuffer;
-(id)getFirstChanceTriggeredDate;
-(id)getFirstChanceVTEventInfo;
-(id)init;
-(id)requestCurrentBuiltInRTModelDictionary;
-(id)requestCurrentVoiceTriggerAssetDictionary;
-(unsigned char)getLastTriggerType;
-(void)clearVoiceTriggerCount;
-(void)dealloc;
-(void)enableVoiceTrigger:(BOOL)arg0 withAssertion:(id)arg1 ;
-(void)notifySecondChanceRequest;
-(void)notifyTriggerEventRequest;
-(void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg0 ;
-(void)requestAudioCapture:(CGFloat)arg0 ;
-(void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id)arg0 ;
-(void)resetAssertions;
-(void)setCurrentBuiltInRTModelDictionary:(id)arg0 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;


@end


#endif