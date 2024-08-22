// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCYCLEREXTENSIONSTESTSUITE_H
#define WBSCYCLEREXTENSIONSTESTSUITE_H

@class NSString, NSArray;
@protocol WBSCyclerOperationalTestSuite;

#import <Foundation/Foundation.h>

#import "WBSCyclerIterationCounter.h"

@interface WBSCyclerExtensionsTestSuite : NSObject <WBSCyclerOperationalTestSuite>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSCyclerIterationCounter *iterationCounter; // ivar: _iterationCounter
@property (readonly, copy, nonatomic) NSArray *operations;
@property (readonly) Class superclass;


-(id)relativeProbabilitiesForOperationsWithTopLevelItem:(id)arg0 ;
-(void)runWithTarget:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif