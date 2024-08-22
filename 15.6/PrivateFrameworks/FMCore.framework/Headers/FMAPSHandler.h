// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMAPSHANDLER_H
#define FMAPSHANDLER_H

@class APSConnection, NSString, NSMutableArray;
@protocol APSConnectionDelegate;

#import <Foundation/Foundation.h>


@interface FMAPSHandler : NSObject <APSConnectionDelegate>



@property (retain, nonatomic) APSConnection *apsConnection; // ivar: _apsConnection
@property (readonly, nonatomic) NSString *apsToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *environmentName; // ivar: _environmentName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *pendingPushes; // ivar: _pendingPushes
@property (nonatomic) BOOL registerForDarkWake; // ivar: _registerForDarkWake
@property (retain, nonatomic) NSMutableArray *registeredDelegates; // ivar: _registeredDelegates
@property (nonatomic) BOOL registrationsSuspended; // ivar: _registrationsSuspended
@property (readonly) Class superclass;


+(id)constantForEnvironmentString:(id)arg0 ;
-(id)init;
-(id)initWithEnvironmentName:(id)arg0 ;
-(id)initWithEnvironmentName:(id)arg0 launchOnDemandPort:(id)arg1 ;
-(void)_handleMessage:(id)arg0 onTopic:(id)arg1 ;
-(void)_registrationsWereResumed;
-(void)_setEnabledTopics:(id)arg0 ;
-(void)connection:(id)arg0 didReceiveMessageForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)dealloc;
-(void)deregisterDelegate:(id)arg0 ;
-(void)invalidate;
-(void)registerDelegate:(id)arg0 forTopic:(id)arg1 ;
-(void)resumeRegistrations;
-(void)suspendRegistrations;


@end


#endif