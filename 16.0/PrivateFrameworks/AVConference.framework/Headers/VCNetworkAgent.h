// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCNETWORKAGENT_H
#define VCNETWORKAGENT_H

@class NSString, NSUUID;
@protocol NWNetworkAgent;

#import <Foundation/Foundation.h>


@interface VCNetworkAgent : NSObject <NWNetworkAgent>

 {
    int _assertionRefCount;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: active
@property (copy, nonatomic) NSString *agentDescription; // ivar: agentDescription
@property (copy, nonatomic) NSUUID *agentUUID; // ivar: agentUUID
@property (nonatomic, getter=isKernelActivated) BOOL kernelActivated; // ivar: kernelActivated
@property (nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property (nonatomic) BOOL requiresAssert;
@property (nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly; // ivar: specificUseOnly
@property (nonatomic) BOOL supportsBrowseRequests;
@property (nonatomic) BOOL supportsListenRequests;
@property (nonatomic) BOOL supportsResolveRequests;
@property (nonatomic) BOOL updateClientsImmediately;
@property (nonatomic, getter=isUserActivated) BOOL userActivated; // ivar: userActivated
@property (nonatomic, getter=isVoluntary) BOOL voluntary; // ivar: voluntary


+(id)agentDomain;
+(id)agentFromData:(id)arg0 ;
+(id)agentType;
+(id)sharedInstance;
-(BOOL)addMediaInformationAssertion:(id)arg0 ;
-(BOOL)clearMediaInformationAssertion;
-(NSUInteger)textStringLength:(id)arg0 ;
-(char *)textString:(id)arg0 ;
-(id)copyAgentData;
-(id)init;
-(int)getNetworkAgentRefCount;
-(void)addAssertion;
-(void)dealloc;
-(void)removeAssertion;


@end


#endif