// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSACTIVATIONEVENT_H
#define CSACTIVATIONEVENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CSActivationEvent : NSObject

@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSDictionary *activationInfo; // ivar: _activationInfo
@property (readonly, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly, nonatomic) NSUInteger hosttime; // ivar: _hosttime
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) float vadScore; // ivar: _vadScore


+(id)builtInMicVoiceTriggerEvent:(id)arg0 hostTime:(NSUInteger)arg1 ;
+(id)jarvisVoiceTriggerEvent:(id)arg0 activationInfo:(id)arg1 hostTime:(NSUInteger)arg2 ;
+(id)mediaserverdLaunchedEvent:(NSUInteger)arg0 ;
+(id)remoraVoiceTriggerEvent:(id)arg0 activationInfo:(id)arg1 hostTime:(NSUInteger)arg2 ;
+(id)remoraVoiceTriggerEvent:(id)arg0 hostTime:(NSUInteger)arg1 ;
+(id)remoteMicVADEvent:(id)arg0 vadScore:(float)arg1 hostTime:(NSUInteger)arg2 ;
+(id)remoteMicVoiceTriggerEvent:(id)arg0 activationInfo:(id)arg1 hostTime:(NSUInteger)arg2 ;
-(id)_activationTypeString;
-(id)initWithType:(NSUInteger)arg0 deviceId:(id)arg1 activationInfo:(id)arg2 hosttime:(NSUInteger)arg3 ;
-(id)initWithType:(NSUInteger)arg0 deviceId:(id)arg1 activationInfo:(id)arg2 vadScore:(float)arg3 hosttime:(NSUInteger)arg4 ;
-(id)initWithXPCObject:(id)arg0 ;
-(id)xpcObject;


@end


#endif