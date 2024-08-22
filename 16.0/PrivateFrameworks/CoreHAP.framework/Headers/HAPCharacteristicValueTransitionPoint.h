// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPCHARACTERISTICVALUETRANSITIONPOINT_H
#define HAPCHARACTERISTICVALUETRANSITIONPOINT_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"

@interface HAPCharacteristicValueTransitionPoint : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *startDelayDuration; // ivar: _startDelayDuration
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *targetCompletionDuration; // ivar: _targetCompletionDuration
@property (retain, nonatomic) NSData *targetValue; // ivar: _targetValue


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTargetValue:(id)arg0 targetCompletionDuration:(id)arg1 startDelayDuration:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif