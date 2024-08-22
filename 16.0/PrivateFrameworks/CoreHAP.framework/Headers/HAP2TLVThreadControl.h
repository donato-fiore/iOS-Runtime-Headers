// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2TLVTHREADCONTROL_H
#define HAP2TLVTHREADCONTROL_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"
#import "HAP2TLVThreadOperationTypeWrapper.h"
#import "HAP2TLVThreadNetworkCredentials.h"

@interface HAP2TLVThreadControl : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *formingAllowed; // ivar: _formingAllowed
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAP2TLVThreadOperationTypeWrapper *operationType; // ivar: _operationType
@property (readonly) Class superclass;
@property (retain, nonatomic) HAP2TLVThreadNetworkCredentials *threadNetworkCredentials; // ivar: _threadNetworkCredentials


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOperationType:(id)arg0 threadNetworkCredentials:(id)arg1 formingAllowed:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif