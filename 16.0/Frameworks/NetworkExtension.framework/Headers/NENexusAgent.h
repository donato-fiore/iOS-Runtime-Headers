// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NENEXUSAGENT_H
#define NENEXUSAGENT_H

@class NWNetworkAgentRegistration, NSString, NSUUID;
@protocol NWNetworkAgent, NENexusAgentDelegate;

#import <Foundation/Foundation.h>


@interface NENexusAgent : NSObject <NWNetworkAgent>

 {
    unsigned int _frameType;
    NWNetworkAgentRegistration *_registration;
    NSObject<NENexusAgentDelegate> *_delegate;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: active
@property (copy, nonatomic) NSString *agentDescription; // ivar: agentDescription
@property (copy, nonatomic) NSUUID *agentUUID; // ivar: agentUUID
@property (nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property (nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (nonatomic, getter=isNexusProvider) BOOL nexusProvider; // ivar: nexusProvider
@property (nonatomic) BOOL requiresAssert;
@property (nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property (nonatomic) BOOL supportsBrowseRequests; // ivar: supportsBrowseRequests
@property (nonatomic) BOOL supportsListenRequests;
@property (nonatomic) BOOL supportsResolveRequests;
@property (nonatomic) BOOL updateClientsImmediately;
@property (nonatomic, getter=isUserActivated) BOOL userActivated;
@property (nonatomic, getter=isVoluntary) BOOL voluntary;


+(id)agentDomain;
+(id)agentFromData:(id)arg0 ;
+(id)agentType;
-(BOOL)assertAgentWithOptions:(id)arg0 ;
-(BOOL)requestNexusWithOptions:(id)arg0 ;
-(BOOL)startAgentWithOptions:(id)arg0 ;
-(id)copyAgentData;
-(void)closeNexusWithOptions:(id)arg0 ;
-(void)unassertAgentWithOptions:(id)arg0 ;


@end


#endif