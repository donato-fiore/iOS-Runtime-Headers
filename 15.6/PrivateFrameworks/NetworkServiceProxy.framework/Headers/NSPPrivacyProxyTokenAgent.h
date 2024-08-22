// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPRIVACYPROXYTOKENAGENT_H
#define NSPPRIVACYPROXYTOKENAGENT_H

@class NSString, NSUUID;
@protocol NWNetworkAgent, NSPPrivacyProxyTokenAgentDelegate;

#import <Foundation/Foundation.h>


@interface NSPPrivacyProxyTokenAgent : NSObject <NWNetworkAgent>



@property (nonatomic, getter=isActive) BOOL active; // ivar: active
@property (copy, nonatomic) NSString *agentDescription; // ivar: agentDescription
@property (copy, nonatomic) NSUUID *agentUUID; // ivar: agentUUID
@property (weak) NSObject<NSPPrivacyProxyTokenAgentDelegate> *delegate; // ivar: _delegate
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
-(id)initWithDelegate:(id)arg0 uuid:(id)arg1 agentDesc:(id)arg2 ;
-(void)tokenLowWaterMarkReached;


@end


#endif