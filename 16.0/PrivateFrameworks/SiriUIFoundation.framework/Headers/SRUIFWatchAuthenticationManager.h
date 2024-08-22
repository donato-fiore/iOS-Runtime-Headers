// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRUIFWATCHAUTHENTICATIONMANAGER_H
#define SRUIFWATCHAUTHENTICATIONMANAGER_H

@class SFAuthenticationManager, AFWatchdogTimer, NSUUID, NSString;
@protocol SFAuthenticationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SRUIFWatchAuthenticationManager : NSObject <SFAuthenticationManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_watchAuthenticationQueue;
}


@property (copy, nonatomic) id *authenticationCompletion; // ivar: _authenticationCompletion
@property (retain, nonatomic) SFAuthenticationManager *authenticationManager; // ivar: _authenticationManager
@property (retain, nonatomic) AFWatchdogTimer *authenticationWatchdogTimer; // ivar: _authenticationWatchdogTimer
@property (copy, nonatomic) NSUUID *currentSessionID; // ivar: _currentSessionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithQueue:(id)arg0 manager:(id)arg1 ;
-(void)_requestWatchAuthentication:(id)arg0 ;
-(void)manager:(id)arg0 didCompleteAuthenticationForSessionWithID:(id)arg1 ;
-(void)manager:(id)arg0 didFailAuthenticationForSessionWithID:(id)arg1 error:(id)arg2 ;
-(void)manager:(id)arg0 didStartAuthenticationForSessionWithID:(id)arg1 ;
-(void)requestWatchAuthentication:(id)arg0 ;


@end


#endif