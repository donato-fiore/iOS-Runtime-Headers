// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERLANFIREWALLRULELIST_H
#define HMDNETWORKROUTERLANFIREWALLRULELIST_H

@class NSString, NSMutableArray;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HMDNetworkRouterLANFirewallRuleList : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *dynamicPortRules; // ivar: _dynamicPortRules
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *multicastBridgingRules; // ivar: _multicastBridgingRules
@property (retain, nonatomic) NSMutableArray *staticICMPRules; // ivar: _staticICMPRules
@property (retain, nonatomic) NSMutableArray *staticPortRules; // ivar: _staticPortRules
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMulticastBridgingRules:(id)arg0 staticPortRules:(id)arg1 dynamicPortRules:(id)arg2 staticICMPRules:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif