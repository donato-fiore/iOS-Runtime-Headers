// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYMESCALAUTHENTICATION_H
#define OSPREYMESCALAUTHENTICATION_H

@class NSDate, NSData, NSString;
@protocol OspreyDeviceAuthenticating;

#import <Foundation/Foundation.h>

#import "OspreyMescalSession.h"
#import "OspreyAuthService.h"
#import "OspreyConnectionPreferences.h"
#import "OspreyGRPCChannel.h"

@interface OspreyMescalAuthentication : NSObject <OspreyDeviceAuthenticating>

 {
    OspreyMescalSession *_mescalSession;
    OspreyAuthService *_authService;
    OspreyConnectionPreferences *_connectionPreferences;
    OspreyGRPCChannel *_grpcChannel;
    NSUInteger _state;
    NSDate *_sessionExpiration;
    NSData *_certificateData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isSessionExpired;
-(NSUInteger)authenticationStrategyVersion;
-(NSUInteger)state;
-(id)initWithChannel:(id)arg0 connectionPreferences:(id)arg1 ;
-(id)mescalSession;
-(void)_continuePreparationWithCompletion:(id)arg0 ;
-(void)moveToState:(NSUInteger)arg0 ;
// -(void)signData:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;


@end


#endif