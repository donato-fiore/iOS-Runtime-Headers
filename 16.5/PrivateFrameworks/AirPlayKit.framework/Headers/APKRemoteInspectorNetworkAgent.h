// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APKREMOTEINSPECTORNETWORKAGENT_H
#define APKREMOTEINSPECTORNETWORKAGENT_H

@class NSString;
@protocol RWIProtocolNetworkDomainHandler, APKRemoteInspectorNetworkAgentDelegate, APKRemoteInspectorNetworkEventDispatcherProtocol;

#import <Foundation/Foundation.h>


@interface APKRemoteInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APKRemoteInspectorNetworkAgentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<APKRemoteInspectorNetworkEventDispatcherProtocol> *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDispatcher:(id)arg0 ;
// -(void)disableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)enableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;


@end


#endif