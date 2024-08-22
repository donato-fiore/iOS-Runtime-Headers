// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPPRIVACYPROXYCONFIGAGENT_H
#define NSPPRIVACYPROXYCONFIGAGENT_H

@class NSData, NSString, NSUUID;
@protocol NWNetworkAgent, NSPPrivacyProxyConfigAgentDelegate;

#import <Foundation/Foundation.h>


@interface NSPPrivacyProxyConfigAgent : NSObject <NWNetworkAgent>

 {
    NSData *_configurationData;
    NSData *_configurationHash;
    NSString *_name;
    NSObject<NSPPrivacyProxyConfigAgentDelegate> *_delegate;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: active
@property (copy, nonatomic) NSString *agentDescription; // ivar: agentDescription
@property (copy, nonatomic) NSUUID *agentUUID; // ivar: agentUUID
@property (nonatomic, getter=isKernelActivated) BOOL kernelActivated; // ivar: kernelActivated
@property (nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property (nonatomic) BOOL requiresAssert;
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
-(BOOL)reportError:(int)arg0 withOptions:(id)arg1 ;
-(id)copyAgentData;


@end


#endif