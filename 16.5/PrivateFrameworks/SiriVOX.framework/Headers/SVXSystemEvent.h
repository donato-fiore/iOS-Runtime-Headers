// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSYSTEMEVENT_H
#define SVXSYSTEMEVENT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupFlowScene.h"
#import "SVXSpeechSynthesisRequest.h"
#import "SVXStoreDemo.h"

@interface SVXSystemEvent : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (readonly, copy, nonatomic) SVXDeviceSetupFlowScene *deviceSetupFlowScene; // ivar: _deviceSetupFlowScene
@property (readonly, copy, nonatomic) NSArray *orderedAlarmAndTimerIDs; // ivar: _orderedAlarmAndTimerIDs
@property (readonly, copy, nonatomic) SVXSpeechSynthesisRequest *speechSynthesisRequest; // ivar: _speechSynthesisRequest
@property (readonly, copy, nonatomic) SVXStoreDemo *storeDemo; // ivar: _storeDemo
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 timestamp:(NSUInteger)arg1 ;
-(id)initWithType:(NSInteger)arg0 timestamp:(NSUInteger)arg1 alarm:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 timestamp:(NSUInteger)arg1 alarm:(id)arg2 deviceSetupFlowScene:(id)arg3 ;
-(id)initWithType:(NSInteger)arg0 timestamp:(NSUInteger)arg1 deviceSetupFlowScene:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 timestamp:(NSUInteger)arg1 deviceSetupFlowScene:(id)arg2 storeDemo:(id)arg3 orderedAlarmAndTimerIDs:(id)arg4 ;
-(id)initWithType:(NSInteger)arg0 timestamp:(NSUInteger)arg1 deviceSetupFlowScene:(id)arg2 storeDemo:(id)arg3 orderedAlarmAndTimerIDs:(id)arg4 audioSessionID:(unsigned int)arg5 ;
-(id)initWithType:(NSInteger)arg0 timestamp:(NSUInteger)arg1 deviceSetupFlowScene:(id)arg2 storeDemo:(id)arg3 orderedAlarmAndTimerIDs:(id)arg4 speechSynthesisRequest:(id)arg5 audioSessionID:(unsigned int)arg6 ;
-(id)initWithType:(NSInteger)arg0 timestamp:(NSUInteger)arg1 storeDemo:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 timestamp:(NSUInteger)arg1 timer:(id)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif