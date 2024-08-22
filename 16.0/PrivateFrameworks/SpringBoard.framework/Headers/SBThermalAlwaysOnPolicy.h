// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTHERMALALWAYSONPOLICY_H
#define SBTHERMALALWAYSONPOLICY_H

@class BLSAssertion, NSString;
@protocol SBAlwaysOnPolicy, SBFLockOutStatusProvider;

#import <Foundation/Foundation.h>


@interface SBThermalAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy>

 {
    BLSAssertion *_alwaysOnDisabledAssertion;
    id<SBFLockOutStatusProvider> *_lockOutStatusProvider;
}


@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive; // ivar: _alwaysOnPolicyActive
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id *analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=_isThermallyBlocked, setter=_setThermallyBlocked:) BOOL thermallyBlocked; // ivar: _thermallyBlocked


-(void)_noteBootCompleted:(id)arg0 ;
-(void)_noteDeviceBlockStateDidChange:(id)arg0 ;
-(void)_updateThermalState;
-(void)activateAlwaysOnPolicy;


@end


#endif