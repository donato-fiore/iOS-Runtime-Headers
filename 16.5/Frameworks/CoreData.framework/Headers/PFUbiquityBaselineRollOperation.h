// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYBASELINEROLLOPERATION_H
#define PFUBIQUITYBASELINEROLLOPERATION_H

@protocol PFUbiquityBaselineRollOperationDelegate;


#import "PFUbiquityBaselineOperation.h"
#import "PFUbiquityBaselineHeuristics.h"

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
    PFUbiquityBaselineHeuristics *_heuristics;
}


@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)retainedDelegate;
-(void)dealloc;
-(void)main;


@end


#endif