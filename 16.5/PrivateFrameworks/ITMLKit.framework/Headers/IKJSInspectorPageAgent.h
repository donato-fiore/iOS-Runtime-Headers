// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSINSPECTORPAGEAGENT_H
#define IKJSINSPECTORPAGEAGENT_H

@class NSString, RWIProtocolPageFrameResourceTree;
@protocol RWIProtocolPageDomainHandler;

#import <Foundation/Foundation.h>

#import "IKJSInspectorController.h"

@interface IKJSInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler>



@property (readonly, weak, nonatomic) IKJSInspectorController *controller; // ivar: _controller
@property (retain, nonatomic) NSString *currentFrameIdentifier; // ivar: _currentFrameIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RWIProtocolPageFrameResourceTree *resourceTree; // ivar: _resourceTree
@property (readonly) Class superclass;


-(id)initWithInspectorController:(id)arg0 ;
-(void)_dispatchEventWithBlock:(id)arg0 ;
// -(void)disableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
-(void)documentDidChange;
// -(void)enableWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)getResourceContentWithErrorCallback:(id)arg0 successCallback:(unk)arg1 frameId:(id)arg2 url:(unk)arg3  ;
// -(void)getResourceTreeWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)reloadWithErrorCallback:(id)arg0 successCallback:(unk)arg1 ignoreCache:(id)arg2 revalidateAllResources:(unk)arg3  ;


@end


#endif