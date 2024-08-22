// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPRIVACYPROXYDNSAGENT_H
#define NSPPRIVACYPROXYDNSAGENT_H

@class NSString, NSUUID;
@protocol NWNetworkAgent, NSPPrivacyProxyDNSAgentDelegate;

#import <Foundation/Foundation.h>

#import "NSPPrivacyProxyResolverInfo.h"

@interface NSPPrivacyProxyDNSAgent : NSObject <NWNetworkAgent>



@property (nonatomic, getter=isActive) BOOL active; // ivar: active
@property (copy, nonatomic) NSString *agentDescription; // ivar: agentDescription
@property (copy, nonatomic) NSUUID *agentUUID; // ivar: agentUUID
@property (weak) NSObject<NSPPrivacyProxyDNSAgentDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isKernelActivated) BOOL kernelActivated; // ivar: kernelActivated
@property (nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property (nonatomic) BOOL requiresAssert;
@property (retain) NSPPrivacyProxyResolverInfo *resolver; // ivar: _resolver
@property (nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property (nonatomic) BOOL supportsBrowseRequests;
@property (nonatomic) BOOL supportsListenRequests;
@property (nonatomic) BOOL supportsResolveRequests;
@property (nonatomic) BOOL updateClientsImmediately;
@property (nonatomic, getter=isUserActivated) BOOL userActivated; // ivar: userActivated
@property (nonatomic, getter=isVoluntary) BOOL voluntary; // ivar: voluntary


+(id)agentDomain;
+(id)agentFromData:(id)arg0 ;
+(id)agentType;
+(id)dnsAgentUUID;
-(BOOL)reportError:(int)arg0 withOptions:(id)arg1 ;
-(id)copyAgentData;
-(id)initWithDelegate:(id)arg0 ;


@end


#endif