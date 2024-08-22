// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKONBOARDINGMETRICSHANDLER_H
#define GKONBOARDINGMETRICSHANDLER_H

@class NSString, GKReporter;

#import <Foundation/Foundation.h>


@interface GKOnboardingMetricsHandler : NSObject

@property (nonatomic) CGFloat analyticsStartTime; // ivar: _analyticsStartTime
@property (copy, nonatomic) NSString *refApp; // ivar: _refApp
@property (retain, nonatomic) GKReporter *reporter; // ivar: _reporter


-(id)initWithReporter:(id)arg0 refApp:(id)arg1 ;
-(void)onboardingDidBegin;
-(void)onboardingDidEnd;
-(void)reportEventForOnboardingFlowAction:(NSUInteger)arg0 ;


@end


#endif