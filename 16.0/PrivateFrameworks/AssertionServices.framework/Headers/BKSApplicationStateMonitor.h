// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSAPPLICATIONSTATEMONITOR_H
#define BKSAPPLICATIONSTATEMONITOR_H

@class RBSProcessMonitor, NSArray;

#import <Foundation/Foundation.h>


@interface BKSApplicationStateMonitor : NSObject {
    os_unfair_lock_s _lock;
    RBSProcessMonitor *_monitor;
    NSArray *_interestedAssertionReasons;
}


@property (readonly, nonatomic) BOOL elevatedPriority; // ivar: _elevatedPriority
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, copy, nonatomic) NSArray *interestedBundleIDs; // ivar: _interestedBundleIDs
@property (readonly, nonatomic) unsigned int interestedStates; // ivar: _interestedStates


-(BOOL)_clientSubscribedToThisReasonChange:(id)arg0 ;
-(BOOL)_clientSubscribedToThisStateChange:(id)arg0 state:(id)arg1 prevState:(id)arg2 ;
-(id)_legacyInfoForProcess:(id)arg0 ;
-(id)_legacyInfoForProcess:(id)arg0 state:(id)arg1 ;
-(id)applicationInfoForApplication:(id)arg0 ;
-(id)applicationInfoForPID:(int)arg0 ;
-(id)bundleInfoValueForKey:(id)arg0 PID:(int)arg1 ;
-(id)init;
-(id)initWithBundleIDs:(id)arg0 states:(unsigned int)arg1 ;
-(id)initWithBundleIDs:(id)arg0 states:(unsigned int)arg1 elevatedPriority:(BOOL)arg2 ;
-(id)initWithBundleIDs:(id)arg0 states:(unsigned int)arg1 isUserInteractive:(BOOL)arg2 ;
-(id)initWithEndpoint:(id)arg0 bundleIDs:(id)arg1 states:(unsigned int)arg2 elevatedPriority:(BOOL)arg3 ;
-(unsigned int)_legacyStateForProcess:(id)arg0 state:(id)arg1 ;
-(unsigned int)applicationStateForApplication:(id)arg0 ;
-(unsigned int)mostElevatedApplicationStateForPID:(int)arg0 ;
-(void)applicationInfoForApplication:(id)arg0 completion:(id)arg1 ;
-(void)applicationInfoForPID:(int)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)lock_updateConfiguration;
-(void)updateInterestedAssertionReasons:(id)arg0 ;
-(void)updateInterestedBundleIDs:(id)arg0 ;
-(void)updateInterestedBundleIDs:(id)arg0 states:(unsigned int)arg1 ;
-(void)updateInterestedStates:(unsigned int)arg0 ;


@end


#endif