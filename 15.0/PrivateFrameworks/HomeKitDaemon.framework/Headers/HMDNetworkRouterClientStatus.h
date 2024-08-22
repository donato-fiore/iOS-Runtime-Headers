// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERCLIENTSTATUS_H
#define HMDNETWORKROUTERCLIENTSTATUS_H

@class HAPTLVUnsignedNumberValue, NSString, NSData, HAPTLVSignedNumberValue;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterIPAddressList.h"

@interface HMDNetworkRouterClientStatus : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterIPAddressList *ipAddressList; // ivar: _ipAddressList
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *lanIdentifier; // ivar: _lanIdentifier
@property (retain, nonatomic) NSData *macAddress; // ivar: _macAddress
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) HAPTLVSignedNumberValue *rssi; // ivar: _rssi
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithClientIdentifier:(id)arg0 macAddress:(id)arg1 ipAddressList:(id)arg2 lanIdentifier:(id)arg3 name:(id)arg4 rssi:(id)arg5 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif