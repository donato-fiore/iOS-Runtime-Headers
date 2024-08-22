// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDPOWERSAVINGMODEMANAGER_H
#define HDPOWERSAVINGMODEMANAGER_H

@class HDAssertionManager, HDAssertion, NSString;
@protocol HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDPowerSavingModeManager : NSObject <HDAssertionObserver>

 {
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    BOOL _powerSavingModeEnabled;
    BOOL _supportsCellularTelephony;
    HDAssertion *_disableAOTAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)supportsPowerSavingForActivityType:(NSUInteger)arg0 ;
-(id)initWithDaemon:(id)arg0 ;
-(id)takeSessionAssertionForOwnerIdentifier:(id)arg0 activityType:(NSUInteger)arg1 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)assertionManager:(id)arg0 assertionTaken:(id)arg1 ;
-(void)dealloc;


@end


#endif