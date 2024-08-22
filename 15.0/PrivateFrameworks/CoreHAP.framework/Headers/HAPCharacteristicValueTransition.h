// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPCHARACTERISTICVALUETRANSITION_H
#define HAPCHARACTERISTICVALUETRANSITION_H

@class NSData, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"
#import "HAPCharacteristicValueTransitionEndBehaviorWrapper.h"
#import "HAPCharacteristicValueLinearDerivedTransition.h"
#import "HAPCharacteristicValueLinearTransition.h"

@interface HAPCharacteristicValueTransition : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *HAPInstanceID; // ivar: _HAPInstanceID
@property (retain, nonatomic) NSData *controllerContext; // ivar: _controllerContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPCharacteristicValueTransitionEndBehaviorWrapper *endBehavior; // ivar: _endBehavior
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPCharacteristicValueLinearDerivedTransition *linearDerivedTransition; // ivar: _linearDerivedTransition
@property (retain, nonatomic) HAPCharacteristicValueLinearTransition *linearTransition; // ivar: _linearTransition
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *notifyTimeIntervalThreshold; // ivar: _notifyTimeIntervalThreshold
@property (retain, nonatomic) NSData *notifyValueChangeThreshold; // ivar: _notifyValueChangeThreshold
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *valueUpdateTimeInterval; // ivar: _valueUpdateTimeInterval


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHAPInstanceID:(id)arg0 controllerContext:(id)arg1 endBehavior:(id)arg2 linearTransition:(id)arg3 linearDerivedTransition:(id)arg4 valueUpdateTimeInterval:(id)arg5 notifyValueChangeThreshold:(id)arg6 notifyTimeIntervalThreshold:(id)arg7 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif