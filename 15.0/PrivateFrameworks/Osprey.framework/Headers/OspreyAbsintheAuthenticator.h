// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSPREYABSINTHEAUTHENTICATOR_H
#define OSPREYABSINTHEAUTHENTICATOR_H

@class NSDate, NSString, NSData;
@protocol OspreyDeviceAuthenticating;

#import <Foundation/Foundation.h>

#import "OspreyGRPCChannel.h"
#import "OspreyAuthService.h"
#import "OspreyConnectionPreferences.h"

@interface OspreyAbsintheAuthenticator : NSObject <OspreyDeviceAuthenticating>

 {
    OspreyGRPCChannel *_channel;
    OspreyAuthService *_authService;
    OspreyConnectionPreferences *_connectionPreferences;
    *NACContextOpaque_ _nacContext;
    NSDate *_sessionExpireOn;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *sessionInfo; // ivar: _sessionInfo
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)_readyToSignClientData;
-(BOOL)isSessionInfoExpired;
-(NSUInteger)authenticationStrategyVersion;
-(id)_signData:(id)arg0 ;
-(id)initWithChannel:(id)arg0 connectionPreferences:(id)arg1 ;
// -(void)_ensureAuthenticatedWithCompletion:(id)arg0 failure:(unk)arg1  ;
// -(void)_initializeAbsintheClientWithCertificateData:(id)arg0 success:(id)arg1 fail:(unk)arg2  ;
-(void)dealloc;
-(void)didMoveToState:(NSInteger)arg0 ;
// -(void)signData:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)willMoveToState:(NSInteger)arg0 ;


@end


#endif