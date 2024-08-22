// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSJSAPPSCRIPTEVALUATOR_H
#define VSJSAPPSCRIPTEVALUATOR_H

@class NSString, NSMutableArray, NSArray;
@protocol VSStateMachineDelegate;

#import <Foundation/Foundation.h>

#import "VSJSApp.h"
#import "VSStateMachine.h"

@interface VSJSAppScriptEvaluator : NSObject <VSStateMachineDelegate>



@property (retain, nonatomic) VSJSApp *app; // ivar: _app
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSString *currentURL; // ivar: _currentURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *remainingURLs; // ivar: _remainingURLs
@property (retain, nonatomic) NSMutableArray *results; // ivar: _results
@property (retain, nonatomic) VSStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *urls; // ivar: _urls


-(id)initWithApp:(id)arg0 urls:(id)arg1 ;
-(void)start;
-(void)transitionToDoneState;
-(void)transitionToEnqueueingNextUrlState;
-(void)transitionToFetchingScriptState;


@end


#endif