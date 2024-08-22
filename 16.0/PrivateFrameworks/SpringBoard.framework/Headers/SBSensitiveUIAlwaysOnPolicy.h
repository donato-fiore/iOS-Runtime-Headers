// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSENSITIVEUIALWAYSONPOLICY_H
#define SBSENSITIVEUIALWAYSONPOLICY_H

@class BLSAssertion, SBMiscellaneousDefaults, NSString;
@protocol SBAlwaysOnPolicy, BSDefaultObserver;

#import <Foundation/Foundation.h>


@interface SBSensitiveUIAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy>

 {
    BLSAssertion *_alwaysOnDisabledAssertion;
    SBMiscellaneousDefaults *_miscellaneousDefaults;
    id<BSDefaultObserver> *_defaultObserverToken;
}


@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive; // ivar: _alwaysOnPolicyActive
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id *analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_updateAssertion;
-(void)activateAlwaysOnPolicy;
-(void)dealloc;


@end


#endif