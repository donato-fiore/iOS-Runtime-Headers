// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAUTHENTICATORSHAREDROOTCONTEXT_H
#define PKAUTHENTICATORSHAREDROOTCONTEXT_H

@class LAContext;

#import <Foundation/Foundation.h>


@interface PKAuthenticatorSharedRootContext : NSObject {
    os_unfair_lock_s _lock;
    LAContext *_LAContext;
}


@property (nonatomic) NSInteger userIntentAvailabilityState; // ivar: _userIntentAvailabilityState


+(id)sharedInstance;
-(NSInteger)_initialUserIntentAvailabilityState;
-(id)externalizedContext;
-(id)init;
-(void)dealloc;
-(void)resetWithCompletion:(id)arg0 ;


@end


#endif