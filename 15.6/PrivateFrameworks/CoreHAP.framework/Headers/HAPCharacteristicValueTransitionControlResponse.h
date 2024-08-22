// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPCHARACTERISTICVALUETRANSITIONCONTROLRESPONSE_H
#define HAPCHARACTERISTICVALUETRANSITIONCONTROLRESPONSE_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPCharacteristicValueTransitionState.h"
#import "HAPCharacteristicValueTransition.h"

@interface HAPCharacteristicValueTransitionControlResponse : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPCharacteristicValueTransitionState *transitionState; // ivar: _transitionState
@property (retain, nonatomic) HAPCharacteristicValueTransition *valueTransition; // ivar: _valueTransition


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithValueTransition:(id)arg0 transitionState:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif