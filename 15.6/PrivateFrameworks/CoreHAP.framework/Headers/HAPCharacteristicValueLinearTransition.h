// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPCHARACTERISTICVALUELINEARTRANSITION_H
#define HAPCHARACTERISTICVALUELINEARTRANSITION_H

@class NSString, NSMutableArray;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPCharacteristicValueTransitionLinearStartConditionWrapper.h"

@interface HAPCharacteristicValueLinearTransition : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPCharacteristicValueTransitionLinearStartConditionWrapper *startBehavior; // ivar: _startBehavior
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *transitionPoints; // ivar: _transitionPoints


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTransitionPoints:(id)arg0 startBehavior:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif