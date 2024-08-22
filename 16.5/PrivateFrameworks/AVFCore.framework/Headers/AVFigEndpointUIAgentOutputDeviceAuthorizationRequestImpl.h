// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFIGENDPOINTUIAGENTOUTPUTDEVICEAUTHORIZATIONREQUESTIMPL_H
#define AVFIGENDPOINTUIAGENTOUTPUTDEVICEAUTHORIZATIONREQUESTIMPL_H

@class NSString;
@protocol AVOutputDeviceAuthorizationRequestImpl;

#import <Foundation/Foundation.h>

#import "AVOutputDevice.h"
#import "AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl.h"

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl : NSObject <AVOutputDeviceAuthorizationRequestImpl>

 {
    id *_completionHandler;
}


@property (readonly, nonatomic) NSString *ID; // ivar: _uniqueID
@property (readonly, nonatomic) NSString *authorizationTokenType; // ivar: _tokenType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVOutputDevice *outputDevice; // ivar: _outputDevice
@property (weak) AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *parentAuthorizationSessionImpl; // ivar: _parentSession
@property (readonly) Class superclass;


-(id)initWithID:(id)arg0 outputDevice:(id)arg1 authorizationTokenType:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)enterTerminalStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)respondWithAuthorizationToken:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif