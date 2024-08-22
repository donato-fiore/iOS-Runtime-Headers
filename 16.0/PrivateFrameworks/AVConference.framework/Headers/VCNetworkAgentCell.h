// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCNETWORKAGENTCELL_H
#define VCNETWORKAGENTCELL_H

@class NWNetworkAgentRegistration, NSString, NSUUID;
@protocol NWNetworkAgent;


#import "VCObject.h"

@interface VCNetworkAgentCell : VCObject <NWNetworkAgent>

 {
    int _assertionRefCount;
    NWNetworkAgentRegistration *_agentRegistration;
    NSString *_wifiInterfaceName;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (copy, nonatomic) NSString *agentDescription; // ivar: _agentDescription
@property (copy, nonatomic) NSUUID *agentUUID; // ivar: _agentUUID
@property (readonly) BOOL cellularAssertionActive;
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
@property (nonatomic, getter=isVoluntary) BOOL voluntary; // ivar: _voluntary


+(id)agentDomain;
+(id)agentFromData:(id)arg0 ;
+(id)agentType;
+(id)sharedInstance;
-(id)copyAgentData;
-(id)init;
-(id)queryWifiInterfaceName;
-(void)addCellularAssertion;
-(void)dealloc;
-(void)removeCellularAssertion;


@end


#endif