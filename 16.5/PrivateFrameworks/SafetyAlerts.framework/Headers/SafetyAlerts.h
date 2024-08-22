// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFETYALERTS_H
#define SAFETYALERTS_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface SafetyAlerts : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
}




+(id)sharedInterface;
-(BOOL)getIsSafetyAlertsEnabledFromReply:(id)arg0 ;
-(BOOL)isSafetyAlertsEnabledSync;
-(id)init;
-(void)fetchIsSafetyAlertsEnabledOnQueue:(id)arg0 withReply:(id)arg1 ;
-(void)onNetworkConnectivityChanged:(id)arg0 ;
-(void)onSignificantEventDetected:(id)arg0 ;
-(void)onTestMessage:(id)arg0 ;
-(void)onUserTappedOnWeaWithInfo:(id)arg0 ;


@end


#endif