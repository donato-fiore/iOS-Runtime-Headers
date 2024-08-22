// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWCONTROLLERSTATE_H
#define WFWORKFLOWCONTROLLERSTATE_H

@class WFContentCollection, NSDictionary, NSString, WFWorkflowRunningContext, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFContentItemCache.h"
#import "WFContentAttributionTracker.h"
#import "WFControlFlowAttributionTracker.h"
#import "WFWorkflow.h"

@interface WFWorkflowControllerState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) WFContentItemCache *contentItemCache; // ivar: _contentItemCache
@property (readonly, nonatomic) WFContentAttributionTracker *currentActionContentAttributionTracker; // ivar: _currentActionContentAttributionTracker
@property (readonly, nonatomic) NSUInteger currentActionIndex; // ivar: _currentActionIndex
@property (readonly, nonatomic) WFContentCollection *currentInput; // ivar: _currentInput
@property (readonly, nonatomic) NSDictionary *currentProcessedParameters; // ivar: _currentProcessedParameters
@property (readonly, nonatomic) NSString *currentRunSource; // ivar: _currentRunSource
@property (readonly, nonatomic) WFControlFlowAttributionTracker *flowTracker; // ivar: _flowTracker
@property (readonly, nonatomic) NSInteger numberOfDialogsPresented; // ivar: _numberOfDialogsPresented
@property (readonly, nonatomic) NSUInteger outputBehavior; // ivar: _outputBehavior
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext; // ivar: _runningContext
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSDictionary *variables; // ivar: _variables
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow


+(BOOL)supportsSecureCoding;
+(void)getStateFromURL:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkflow:(id)arg0 variables:(id)arg1 currentActionIndex:(NSUInteger)arg2 runningContext:(id)arg3 currentInput:(id)arg4 currentProcessedParameters:(id)arg5 startDate:(id)arg6 currentRunSource:(id)arg7 numberOfDialogsPresented:(NSInteger)arg8 outputBehavior:(NSUInteger)arg9 contentAttributionTracker:(id)arg10 contentItemCache:(id)arg11 flowTracker:(id)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif