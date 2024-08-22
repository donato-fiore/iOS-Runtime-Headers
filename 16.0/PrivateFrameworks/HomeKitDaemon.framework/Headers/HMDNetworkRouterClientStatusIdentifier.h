// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERCLIENTSTATUSIDENTIFIER_H
#define HMDNETWORKROUTERCLIENTSTATUSIDENTIFIER_H

@class HAPTLVUnsignedNumberValue, NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterIPAddress.h"

@interface HMDNetworkRouterClientStatusIdentifier : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterIPAddress *ipAddress; // ivar: _ipAddress
@property (retain, nonatomic) NSData *macAddress; // ivar: _macAddress
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithClientIdentifier:(id)arg0 macAddress:(id)arg1 ipAddress:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif