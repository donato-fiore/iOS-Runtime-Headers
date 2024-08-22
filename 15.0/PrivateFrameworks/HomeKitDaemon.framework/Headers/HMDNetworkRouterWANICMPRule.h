// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERWANICMPRULE_H
#define HMDNETWORKROUTERWANICMPRULE_H

@class NSString;
@protocol HMDNetworkRouterWANRule, NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterIPAddress.h"
#import "HMDNetworkRouterICMPTypeList.h"

@interface HMDNetworkRouterWANICMPRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *hostDNSName; // ivar: _hostDNSName
@property (retain, nonatomic) HMDNetworkRouterIPAddress *hostIPEnd; // ivar: _hostIPEnd
@property (retain, nonatomic) HMDNetworkRouterIPAddress *hostIPStart; // ivar: _hostIPStart
@property (retain, nonatomic) HMDNetworkRouterICMPTypeList *icmpTypes; // ivar: _icmpTypes
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHostDNSName:(id)arg0 hostIPStart:(id)arg1 hostIPEnd:(id)arg2 icmpTypes:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;
-(void)addTo:(id)arg0 ;


@end


#endif