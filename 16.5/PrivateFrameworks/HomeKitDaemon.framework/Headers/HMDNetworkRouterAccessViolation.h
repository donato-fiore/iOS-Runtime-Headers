// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNETWORKROUTERACCESSVIOLATION_H
#define HMDNETWORKROUTERACCESSVIOLATION_H

@class HAPTLVUnsignedNumberValue, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HMDNetworkRouterAccessViolation : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *lastResetTimestamp; // ivar: _lastResetTimestamp
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *lastViolationTimestamp; // ivar: _lastViolationTimestamp
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithClientIdentifier:(id)arg0 lastViolationTimestamp:(id)arg1 lastResetTimestamp:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif