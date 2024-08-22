// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPCHARACTERISTICVALUELINEARDERIVEDTRANSITIONPOINT_H
#define HAPCHARACTERISTICVALUELINEARDERIVEDTRANSITIONPOINT_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVFloatNumberValue.h"
#import "HAPTLVUnsignedNumberValue.h"

@interface HAPCharacteristicValueLinearDerivedTransitionPoint : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVFloatNumberValue *offset; // ivar: _offset
@property (retain, nonatomic) HAPTLVFloatNumberValue *scale; // ivar: _scale
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *startDelayDuration; // ivar: _startDelayDuration
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *targetCompletionDuration; // ivar: _targetCompletionDuration


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithScale:(id)arg0 offset:(id)arg1 targetCompletionDuration:(id)arg2 startDelayDuration:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif