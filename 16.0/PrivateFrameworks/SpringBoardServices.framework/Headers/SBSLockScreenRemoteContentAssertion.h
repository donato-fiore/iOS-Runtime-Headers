// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSLOCKSCREENREMOTECONTENTASSERTION_H
#define SBSLOCKSCREENREMOTECONTENTASSERTION_H



#import "SBSLockScreenContentAssertion.h"

@interface SBSLockScreenRemoteContentAssertion : SBSLockScreenContentAssertion



+(id)acquireRemoteContentAssertionWithDefinition:(id)arg0 errorHandler:(id)arg1 ;
+(id)acquireWakeToRemoteAlertAssertionWithRemoteDefinition:(id)arg0 errorHandler:(id)arg1 ;
-(BOOL)_supportsReacquisition;


@end


#endif