// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2TLVADDPAIRINGREQUEST_H
#define HAP2TLVADDPAIRINGREQUEST_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAP2TLVPairingMethodWrapper.h"
#import "HAPTLVUnsignedNumberValue.h"
#import "HAP2TLVPairingStateWrapper.h"

@interface HAP2TLVAddPairingRequest : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) HAP2TLVPairingMethodWrapper *method; // ivar: _method
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *permissions; // ivar: _permissions
@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (retain, nonatomic) HAP2TLVPairingStateWrapper *state; // ivar: _state
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithState:(id)arg0 method:(id)arg1 identifier:(id)arg2 publicKey:(id)arg3 permissions:(id)arg4 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif