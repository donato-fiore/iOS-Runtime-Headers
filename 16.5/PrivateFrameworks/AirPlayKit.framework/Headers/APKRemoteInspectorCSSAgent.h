// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APKREMOTEINSPECTORCSSAGENT_H
#define APKREMOTEINSPECTORCSSAGENT_H

@class NSString;
@protocol RWIProtocolCSSDomainHandler, APKRemoteInspectorCSSAgentDelegate, APKRemoteInspectorCSSEventDispatcherProtocol;

#import <Foundation/Foundation.h>


@interface APKRemoteInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APKRemoteInspectorCSSAgentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<APKRemoteInspectorCSSEventDispatcherProtocol> *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDispatcher:(id)arg0 ;
// -(void)disableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)enableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)getComputedStyleForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getInlineStylesForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;


@end


#endif