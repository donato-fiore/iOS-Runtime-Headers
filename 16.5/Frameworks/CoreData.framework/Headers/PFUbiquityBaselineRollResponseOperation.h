// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYBASELINEROLLRESPONSEOPERATION_H
#define PFUBIQUITYBASELINEROLLRESPONSEOPERATION_H

@protocol PFUbiquityBaselineRollResponseOperationDelegate;


#import "PFUbiquityBaselineRollOperation.h"

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;


-(id)retainedDelegate;
-(void)main;


@end


#endif