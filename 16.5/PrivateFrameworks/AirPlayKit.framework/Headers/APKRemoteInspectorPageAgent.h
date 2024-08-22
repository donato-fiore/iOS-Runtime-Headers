// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APKREMOTEINSPECTORPAGEAGENT_H
#define APKREMOTEINSPECTORPAGEAGENT_H

@class NSString;
@protocol RWIProtocolPageDomainHandler, APKRemoteInspectorPageAgentDelegate, APKRemoteInspectorPageEventDispatcherProtocol;

#import <Foundation/Foundation.h>


@interface APKRemoteInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APKRemoteInspectorPageAgentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<APKRemoteInspectorPageEventDispatcherProtocol> *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDispatcher:(id)arg0 ;
// -(void)disableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)enableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)getResourceContentWithErrorCallback:(id)arg0 successCallback:(unk)arg1 frameId:(id)arg2 url:(unk)arg3  ;
// -(void)getResourceTreeWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;


@end


#endif