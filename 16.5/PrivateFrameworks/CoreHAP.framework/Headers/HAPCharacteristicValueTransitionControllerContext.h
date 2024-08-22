// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPCHARACTERISTICVALUETRANSITIONCONTROLLERCONTEXT_H
#define HAPCHARACTERISTICVALUETRANSITIONCONTROLLERCONTEXT_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"

@interface HAPCharacteristicValueTransitionControllerContext : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *transitionChecksum; // ivar: _transitionChecksum


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 startTime:(id)arg1 transitionChecksum:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif