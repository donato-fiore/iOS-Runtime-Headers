// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFLOCATIONMANAGER_H
#define SFLOCATIONMANAGER_H

@class CLInUseAssertion, NSCountedSet, NSMutableSet, BKSApplicationStateMonitor;

#import <Foundation/Foundation.h>


@interface SFLocationManager : NSObject {
    CLInUseAssertion *_assertion;
    NSCountedSet *_clients;
    NSMutableSet *_foregroundApplications;
    BKSApplicationStateMonitor *_stateMonitor;
}




+(id)sharedLocationManager;
+(void)setDefaultEffectiveBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)_handleApplicationStateChange:(id)arg0 ;
-(void)_setApplication:(id)arg0 isForeground:(BOOL)arg1 ;
-(void)_updateApplicationsToMonitor;
-(void)_updateAssertion;
-(void)addClientForApplication:(id)arg0 ;
-(void)removeClientForApplication:(id)arg0 ;


@end


#endif