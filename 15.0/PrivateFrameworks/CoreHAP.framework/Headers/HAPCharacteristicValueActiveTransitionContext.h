// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPCHARACTERISTICVALUEACTIVETRANSITIONCONTEXT_H
#define HAPCHARACTERISTICVALUEACTIVETRANSITIONCONTEXT_H

@class NSData, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"

@interface HAPCharacteristicValueActiveTransitionContext : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *HAPInstanceID; // ivar: _HAPInstanceID
@property (retain, nonatomic) NSData *controllerContext; // ivar: _controllerContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *timeElapsedSinceStart; // ivar: _timeElapsedSinceStart


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHAPInstanceID:(id)arg0 controllerContext:(id)arg1 timeElapsedSinceStart:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif