// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOWPOWERMODEALWAYSONPOLICY_H
#define SBLOWPOWERMODEALWAYSONPOLICY_H

@class BLSAssertion, NSString;
@protocol SBAlwaysOnPolicy;

#import <Foundation/Foundation.h>


@interface SBLowPowerModeAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy>

 {
    BLSAssertion *_alwaysOnDisabledAssertion;
}


@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive; // ivar: _alwaysOnPolicyActive
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id *analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_noteLowPowerModeChanged:(id)arg0 ;
-(void)_updateAssertion;
-(void)activateAlwaysOnPolicy;


@end


#endif