// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFOCUSMODEALWAYSONPOLICY_H
#define SBFOCUSMODEALWAYSONPOLICY_H

@class BLSAssertion, NSString;
@protocol SBDoNotDisturbStateMonitorObserver, PTSettingsKeyObserver, SBAlwaysOnPolicy;

#import <Foundation/Foundation.h>

#import "SBDoNotDisturbStateMonitor.h"
#import "SBAlwaysOnPolicySettings.h"

@interface SBFocusModeAlwaysOnPolicy : NSObject <SBDoNotDisturbStateMonitorObserver, PTSettingsKeyObserver, SBAlwaysOnPolicy>

 {
    BLSAssertion *_alwaysOnDisabledAssertion;
    SBDoNotDisturbStateMonitor *_dndStateMonitor;
    SBAlwaysOnPolicySettings *_policySettings;
    BOOL _disableAlwaysOn;
}


@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive; // ivar: _alwaysOnPolicyActive
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id *analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldDisableAlwaysOnForDNDState:(id)arg0 ;
-(void)_setDisableAlwaysOn:(BOOL)arg0 dndState:(id)arg1 ;
-(void)_updateFromDNDState:(id)arg0 ;
-(void)activateAlwaysOnPolicy;
-(void)doNotDisturbStateMonitor:(id)arg0 didUpdateToState:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif