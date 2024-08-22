// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSETUPALWAYSONPOLICY_H
#define SBSETUPALWAYSONPOLICY_H

@class BLSAssertion, NSString;
@protocol SBAlwaysOnPolicy;

#import <Foundation/Foundation.h>


@interface SBSetupAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy>

 {
    BLSAssertion *_alwaysOnDisabledAssertion;
}


@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive; // ivar: _alwaysOnPolicyActive
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id *analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isInSetupMode, setter=_setInSetupMode:) BOOL inSetupMode; // ivar: _inSetupMode
@property (readonly) Class superclass;


-(void)_setupModeStateDidChange:(id)arg0 ;
-(void)_updateSetupModeState;
-(void)activateAlwaysOnPolicy;


@end


#endif