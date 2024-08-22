// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPNETWORKAGENT_H
#define NSPNETWORKAGENT_H

@class NSData, NSString, NSUUID;
@protocol NWNetworkAgent;

#import <Foundation/Foundation.h>

#import "NSPAppRule.h"
#import "NSPConfiguration.h"

@interface NSPNetworkAgent : NSObject <NWNetworkAgent>

 {
    unsigned char _dataDigest;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: active
@property (retain) NSData *agentData; // ivar: _agentData
@property (copy, nonatomic) NSString *agentDescription; // ivar: agentDescription
@property (copy, nonatomic) NSUUID *agentUUID; // ivar: agentUUID
@property (retain) NSPAppRule *appRule; // ivar: _appRule
@property (retain) NSPConfiguration *configuration; // ivar: _configuration
@property (nonatomic, getter=isKernelActivated) BOOL kernelActivated; // ivar: kernelActivated
@property (retain) NSData *keybag; // ivar: _keybag
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
-(BOOL)isEqual:(id)arg0 ;
-(id)copyAgentData;
-(id)init;
-(void)parseAgentData;


@end


#endif