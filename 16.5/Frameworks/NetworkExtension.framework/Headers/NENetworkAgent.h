// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NENETWORKAGENT_H
#define NENETWORKAGENT_H

@class NSUUID, NSString;
@protocol NWNetworkAgent;

#import <Foundation/Foundation.h>


@interface NENetworkAgent : NSObject <NWNetworkAgent>

 {
    int _internalSessionType;
    NSUUID *_internalUUID;
    NSString *_name;
    id *_internalStartHandler;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: active
@property (copy, nonatomic) NSString *agentDescription; // ivar: agentDescription
@property (copy, nonatomic) NSUUID *agentUUID; // ivar: agentUUID
@property (copy) NSString *configurationName; // ivar: _configurationName
@property (readonly, copy) NSUUID *configurationUUID;
@property (nonatomic, getter=isKernelActivated) BOOL kernelActivated; // ivar: kernelActivated
@property int lastStatus; // ivar: _lastStatus
@property (nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property (nonatomic) BOOL requiresAssert;
@property (readonly) int sessionType;
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
-(BOOL)matchesFileHandle:(id)arg0 ;
-(BOOL)startAgentWithOptions:(id)arg0 ;
-(id)copyAgentData;
-(id)initWithConfigUUID:(id)arg0 sessionType:(int)arg1 name:(id)arg2 ;
-(void)setStartHandler:(id)arg0 ;


@end


#endif