// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERICMPTYPE_H
#define HMDNETWORKROUTERICMPTYPE_H

@class NSString, HAPTLVUnsignedNumberValue;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterIPProtocolVersion.h"

@interface HMDNetworkRouterICMPType : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterIPProtocolVersion *protocol; // ivar: _protocol
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *typeValue; // ivar: _typeValue


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
+(id)typeFromICMPType:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithProtocol:(id)arg0 typeValue:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif