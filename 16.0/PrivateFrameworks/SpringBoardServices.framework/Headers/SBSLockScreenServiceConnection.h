// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSLOCKSCREENSERVICECONNECTION_H
#define SBSLOCKSCREENSERVICECONNECTION_H

@class BSServiceConnection, NSCountedSet;

#import <Foundation/Foundation.h>


@interface SBSLockScreenServiceConnection : NSObject {
    BSServiceConnection *_connection;
    os_unfair_lock_s _lock;
    NSCountedSet *_lock_preventPasscodeLockReasons;
    NSCountedSet *_lock_preventSpuriousScreenUndimReasons;
}




-(id)init;
-(id)preventPasscodeLockWithReason:(id)arg0 ;
-(id)preventSpuriousScreenUndimWithReason:(id)arg0 ;
-(void)dealloc;
-(void)launchEmergencyDialerWithCompletion:(id)arg0 ;
-(void)requestPasscodeCheckUIWithOptions:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestPasscodeUnlockUIWithOptions:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif