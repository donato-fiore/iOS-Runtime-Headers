// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ITIDLETIMERSTATECLIENT_H
#define ITIDLETIMERSTATECLIENT_H

@class BSServiceConnection, NSString;
@protocol ITIdleTimerClientInterface, ITIdleTimerStateRequestHandling, ITIdleTimerStateRequestDelegate;

#import <Foundation/Foundation.h>


@interface ITIdleTimerStateClient : NSObject <ITIdleTimerClientInterface, ITIdleTimerStateRequestHandling>

 {
    os_unfair_lock_s _accessLock;
    NSUInteger _access_serviceAvailability;
    BSServiceConnection *_connection;
    id<ITIdleTimerStateRequestDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleIdleEvent:(id)arg0 usingConfigurationWithIdentifier:(id)arg1 ;
-(BOOL)isIdleTimerServiceAvailable;
-(id)initWithDelegate:(id)arg0 ;
-(void)_access_addIdleTimerConfiguration:(id)arg0 forReason:(id)arg1 error:(*id)arg2 ;
-(void)_access_removeIdleTimerConfiguration:(id)arg0 forReason:(id)arg1 ;
-(void)_connectionInterrupted;
-(void)addIdleTimerConfiguration:(id)arg0 forReason:(id)arg1 error:(*id)arg2 ;
-(void)removeIdleTimerConfiguration:(id)arg0 forReason:(id)arg1 ;


@end


#endif