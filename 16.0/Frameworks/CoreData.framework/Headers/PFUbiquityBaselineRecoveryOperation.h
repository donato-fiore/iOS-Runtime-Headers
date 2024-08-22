// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYBASELINERECOVERYOPERATION_H
#define PFUBIQUITYBASELINERECOVERYOPERATION_H

@protocol PFUbiquityBaselineRecoveryOperationDelegate;


#import "PFUbiquityBaselineOperation.h"

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;


-(BOOL)isEqual:(id)arg0 ;
-(id)retainedDelegate;
-(void)main;


@end


#endif