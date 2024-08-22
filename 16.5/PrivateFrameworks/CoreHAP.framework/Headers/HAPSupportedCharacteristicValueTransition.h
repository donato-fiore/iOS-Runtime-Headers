// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPSUPPORTEDCHARACTERISTICVALUETRANSITION_H
#define HAPSUPPORTEDCHARACTERISTICVALUETRANSITION_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVSignedNumberValue.h"
#import "HAPCharacteristicValueTransitionTypesWrapper.h"

@interface HAPSupportedCharacteristicValueTransition : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVSignedNumberValue *HAPInstanceID; // ivar: _HAPInstanceID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPCharacteristicValueTransitionTypesWrapper *transitionTypes; // ivar: _transitionTypes


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHAPInstanceID:(id)arg0 transitionTypes:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif