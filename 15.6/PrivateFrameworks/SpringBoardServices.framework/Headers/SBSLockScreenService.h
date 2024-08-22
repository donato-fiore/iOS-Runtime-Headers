// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSLOCKSCREENSERVICE_H
#define SBSLOCKSCREENSERVICE_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBSLockScreenServiceConnection.h"

@interface SBSLockScreenService : NSObject <BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    SBSLockScreenServiceConnection *_lock_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)preventPasscodeLockWithReason:(id)arg0 ;
-(id)preventSpuriousScreenUndimWithReason:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)launchEmergencyDialerWithCompletion:(id)arg0 ;
-(void)requestPasscodeCheckUIWithOptions:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestPasscodeUnlockUIWithOptions:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif