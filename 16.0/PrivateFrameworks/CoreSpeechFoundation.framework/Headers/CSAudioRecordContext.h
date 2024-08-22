// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSAUDIORECORDCONTEXT_H
#define CSAUDIORECORDCONTEXT_H

@class NSDictionary, NSString;
@protocol NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSAudioRecordContext : NSObject <NSCopying>



@property (retain, nonatomic) NSDictionary *activationMetadata; // ivar: _activationMetadata
@property (nonatomic) BOOL alwaysUseRemoteBuiltInMic; // ivar: _alwaysUseRemoteBuiltInMic
@property (retain, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) BOOL isRequestDuringActiveCall; // ivar: _isRequestDuringActiveCall
@property (nonatomic) BOOL isRequestFromSpokenNotification; // ivar: _isRequestFromSpokenNotification
@property (retain, nonatomic) NSString *turnIdentifier; // ivar: _turnIdentifier
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;


+(id)contextForBTLEWithDeviceId:(id)arg0 ;
+(id)contextForBuiltInVoiceTrigger;
+(id)contextForDarwinVoiceTriggerWithDeviceId:(id)arg0 ;
+(id)contextForDictation;
+(id)contextForHearstVoiceTriggerWithDeviceId:(id)arg0 ;
+(id)contextForHomeButton;
+(id)contextForJarvisWithDeviceId:(id)arg0 ;
+(id)contextForOpportuneSpeakerListener;
+(id)contextForOpportuneSpeakerListenerWithCall;
+(id)contextForRemoraButtonTriggerWithDeviceId:(id)arg0 ;
+(id)contextForRemoraVoiceTriggerWithDeviceId:(id)arg0 ;
+(id)contextForServerInvoke;
+(id)contextForVoiceTriggerTraining;
+(id)defaultContext;
+(id)recordTypeString:(NSInteger)arg0 ;
-(BOOL)isAudioRecordTypeSupportedByRemora;
-(BOOL)isBuiltInVoiceTriggered;
-(BOOL)isDarwinVoiceTriggered;
-(BOOL)isDictation;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGibraltarVoiceTriggered;
-(BOOL)isHearstDoubleTapTriggered;
-(BOOL)isHearstVoiceTriggered;
-(BOOL)isHomePressed;
-(BOOL)isJarvisVoiceTriggered;
-(BOOL)isRTSTriggered;
-(BOOL)isRemoraButtonPress;
-(BOOL)isRemoraTriggered;
-(BOOL)isRemoraVoiceTriggered;
-(BOOL)isServerInvoked;
-(BOOL)isStarkTriggered;
-(BOOL)isTVRemote;
-(BOOL)isTriggeredFromHearst;
-(BOOL)isUIButtonPress;
-(BOOL)isVoiceTriggered;
-(BOOL)isVoiceTriggeredFromRemoteXPCDevice;
-(BOOL)isiOSButtonPress;
-(NSInteger)avvcActivationMode:(NSInteger)arg0 ;
-(NSInteger)recordTypeFromAVVCActivationMode:(NSInteger)arg0 ;
-(id)_createAVVCContextWithType:(NSInteger)arg0 deviceId:(id)arg1 ;
-(id)avvcContext;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAVVCContext:(id)arg0 ;
-(id)initWithRecordType:(NSInteger)arg0 deviceId:(id)arg1 ;
-(id)initWithXPCObject:(id)arg0 ;


@end


#endif