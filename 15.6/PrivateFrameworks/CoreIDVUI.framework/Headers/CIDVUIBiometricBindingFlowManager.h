// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDVUIBIOMETRICBINDINGFLOWMANAGER_H
#define CIDVUIBIOMETRICBINDINGFLOWMANAGER_H

@class UIViewController;


#import "_TtC9CoreIDVUI34CIDVUIInternalBiometricFlowManager.h"

@interface CIDVUIBiometricBindingFlowManager : UIViewController

@property (retain, nonatomic) _TtC9CoreIDVUI34CIDVUIInternalBiometricFlowManager *bioBindingFlowManager; // ivar: _bioBindingFlowManager


-(id)init;
-(void)deleteBoundACLWithCompletion:(id)arg0 ;
-(void)evaluateBoundACL:(id)arg0 ;


@end


#endif