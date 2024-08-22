// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APKREMOTEINSPECTORDOMAGENT_H
#define APKREMOTEINSPECTORDOMAGENT_H

@class NSString;
@protocol RWIProtocolDOMDomainHandler, APKRemoteInspectorDOMAgentDelegate, APKRemoteInspectorDOMEventDispatcherProtocol;

#import <Foundation/Foundation.h>


@interface APKRemoteInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APKRemoteInspectorDOMAgentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<APKRemoteInspectorDOMEventDispatcherProtocol> *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDispatcher:(id)arg0 ;
// -(void)getAttributesWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getDocumentWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)getOuterHTMLWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)requestChildNodesWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 depth:(unk)arg3  ;


@end


#endif