// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXMYRIADHOSTDEVICE_H
#define SVXMYRIADHOSTDEVICE_H

@class AFMyriadCoordinator, NSString;
@protocol AFMyriadDelegate, SVXMyriadRequestDelegate, SVXMyriadResponseDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SVXMyriadWiFiAssertion.h"

@interface SVXMyriadHostDevice : NSObject <AFMyriadDelegate, SVXMyriadRequestDelegate>

 {
    AFMyriadCoordinator *_myriadCoordinator;
    id<SVXMyriadResponseDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    ? _emergencyContext;
    SVXMyriadWiFiAssertion *_wifiAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)_acquireWiFiAssertion;
-(void)_armEmergencyDispatchTimerFor:(CGFloat)arg0 toExecute:(id)arg1 ;
-(void)_disarmMyriadEmergencyTimer;
-(void)_initializeMyriadEmergencyTimer;
-(void)_releaseWiFiAssertion;
-(void)_signalEmergencyCallHandledStatus:(BOOL)arg0 ;
-(void)_startAdvertisingEmergency:(id)arg0 ;
-(void)myriadCoordinatorDidHandleEmergency:(id)arg0 ;
-(void)preheatMyriad;
-(void)resetMyriad;
-(void)setupEnabled:(BOOL)arg0 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg0 ;
-(void)shouldContinue:(id)arg0 ;
-(void)shouldUnduck:(id)arg0 ;
-(void)startAdvertising:(NSUInteger)arg0 withMyriadGoodnessScoreContext:(id)arg1 withMyriadAudioContext:(id)arg2 completion:(id)arg3 ;
-(void)willEndSession:(id)arg0 ;
-(void)willStartWithSession:(id)arg0 ;


@end


#endif