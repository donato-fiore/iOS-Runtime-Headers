// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIDEVICELOCATORSERVICE_H
#define AAUIDEVICELOCATORSERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AAUIDeviceLocatorService : NSObject {
    NSUInteger _lastKnownState;
    BOOL _hasAttemptedToFetchState;
    BOOL _wantsToEnable;
    NSObject<OS_dispatch_queue> *_stateUpdateQueue;
}




+(id)sharedInstance;
-(BOOL)isChangingState;
-(BOOL)isEnabled;
-(BOOL)isStateKnown;
-(BOOL)shouldEnable;
-(id)init;
-(void)_updateStateAndNotify:(BOOL)arg0 completion:(id)arg1 ;
-(void)disableInContext:(NSUInteger)arg0 withWipeToken:(id)arg1 ;
-(void)disableInContext:(NSUInteger)arg0 withWipeToken:(id)arg1 completion:(id)arg2 ;
-(void)enableInContext:(NSUInteger)arg0 ;
-(void)enableInContext:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)refreshCurrentState:(id)arg0 ;
-(void)setShouldEnable:(BOOL)arg0 ;


@end


#endif