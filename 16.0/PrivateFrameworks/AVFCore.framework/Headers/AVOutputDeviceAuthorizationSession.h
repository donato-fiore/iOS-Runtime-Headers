// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTDEVICEAUTHORIZATIONSESSION_H
#define AVOUTPUTDEVICEAUTHORIZATIONSESSION_H

@protocol AVOutputDeviceAuthorizationSessionDelegate;

#import <Foundation/Foundation.h>

#import "AVOutputDeviceAuthorizationSessionInternal.h"

@interface AVOutputDeviceAuthorizationSession : NSObject {
    AVOutputDeviceAuthorizationSessionInternal *_ivars;
}


@property (weak) NSObject<AVOutputDeviceAuthorizationSessionDelegate> *delegate;


+(id)outputDeviceAuthorizationSessionWithEndpointUIAgent:(struct OpaqueFigEndpointUIAgent *)arg0 ;
+(id)sharedAuthorizationSession;
+(void)initialize;
-(BOOL)outputDeviceAuthorizationSessionImpl:(id)arg0 shouldRetryAuthorizationRequest:(id)arg1 reason:(id)arg2 ;
-(id)impl;
-(id)initWithOutputDeviceAuthorizationSessionImpl:(id)arg0 ;
-(void)dealloc;
-(void)outputDeviceAuthorizationSessionImpl:(id)arg0 didProvideAuthorizationRequest:(id)arg1 ;
-(void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)arg0 ;


@end


#endif