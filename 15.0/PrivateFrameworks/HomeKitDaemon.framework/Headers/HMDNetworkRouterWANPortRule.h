// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERWANPORTRULE_H
#define HMDNETWORKROUTERWANPORTRULE_H

@class NSString, HAPTLVUnsignedNumberValue;
@protocol HMDNetworkRouterWANRule, NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterIPAddress.h"
#import "HMDNetworkRouterProtocol.h"

@interface HMDNetworkRouterWANPortRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *hostDNSName; // ivar: _hostDNSName
@property (retain, nonatomic) HMDNetworkRouterIPAddress *hostIPEnd; // ivar: _hostIPEnd
@property (retain, nonatomic) HMDNetworkRouterIPAddress *hostIPStart; // ivar: _hostIPStart
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *hostPortEnd; // ivar: _hostPortEnd
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *hostPortStart; // ivar: _hostPortStart
@property (retain, nonatomic) HMDNetworkRouterProtocol *protocol; // ivar: _protocol
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithProtocol:(id)arg0 hostDNSName:(id)arg1 hostIPStart:(id)arg2 hostIPEnd:(id)arg3 hostPortStart:(id)arg4 hostPortEnd:(id)arg5 ;
-(id)serializeWithError:(*id)arg0 ;
-(void)addTo:(id)arg0 ;


@end


#endif