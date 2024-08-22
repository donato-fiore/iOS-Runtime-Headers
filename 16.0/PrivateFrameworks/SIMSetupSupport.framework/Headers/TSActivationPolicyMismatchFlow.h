// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSACTIVATIONPOLICYMISMATCHFLOW_H
#define TSACTIVATIONPOLICYMISMATCHFLOW_H

@class NSError, NSString;
@protocol TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"

@interface TSActivationPolicyMismatchFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>

 {
    NSError *_planItemError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)firstViewController;
-(id)init;
-(id)initWithPlanItemError:(id)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)firstViewController:(id)arg0 ;


@end


#endif