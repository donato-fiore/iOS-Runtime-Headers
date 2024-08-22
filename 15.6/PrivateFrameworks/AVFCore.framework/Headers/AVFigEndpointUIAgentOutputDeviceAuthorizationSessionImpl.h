// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVFIGENDPOINTUIAGENTOUTPUTDEVICEAUTHORIZATIONSESSIONIMPL_H
#define AVFIGENDPOINTUIAGENTOUTPUTDEVICEAUTHORIZATIONSESSIONIMPL_H

@class NSString;
@protocol AVOutputDeviceAuthorizationSessionImpl;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVOutputDeviceAuthorizationRequest.h"
#import "AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl.h"
#import "AVOutputDeviceAuthorizationSession.h"

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl : NSObject <AVOutputDeviceAuthorizationSessionImpl>

 {
    *OpaqueFigEndpointUIAgent _agent;
    AVWeakReference *_weakObserver;
    AVOutputDeviceAuthorizationRequest *_currentRequest;
    AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl *_currentRequestImpl;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *OpaqueFigEndpointUIAgent figEndpointUIAgent;
@property (readonly) NSUInteger hash;
@property (weak) AVOutputDeviceAuthorizationSession *parentAuthorizationSession; // ivar: _parentSession
@property (readonly) Class superclass;


-(id)initWithFigEndpointUIAgent:(struct OpaqueFigEndpointUIAgent *)arg0 ;
-(void)_finishedWithPrompt;
-(void)_notifyCurrentRequestOfTerminalStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)_showAuthPromptWithUniqueID:(id)arg0 routeDescriptor:(struct __CFDictionary *)arg1 pinMode:(BOOL)arg2 reason:(struct __CFString *)arg3 ;
-(void)_startNewRequest:(id)arg0 impl:(id)arg1 ;
-(void)dealloc;
-(void)outputDeviceAuthorizationRequestImpl:(id)arg0 didRespondWithAuthorizationToken:(id)arg1 ;
-(void)outputDeviceAuthorizationRequestImplDidCancel:(id)arg0 ;


@end


#endif