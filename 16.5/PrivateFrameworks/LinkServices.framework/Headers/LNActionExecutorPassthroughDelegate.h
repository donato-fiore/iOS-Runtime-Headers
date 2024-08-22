// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNACTIONEXECUTORPASSTHROUGHDELEGATE_H
#define LNACTIONEXECUTORPASSTHROUGHDELEGATE_H

@class NSString;
@protocol LNActionExecutorDelegate;

#import <Foundation/Foundation.h>


@interface LNActionExecutorPassthroughDelegate : NSObject <LNActionExecutorDelegate>



@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<LNActionExecutorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)executor:(id)arg0 shouldRunShowOutputAction:(id)arg1 ;
-(id)initWithShowOutputActionDelegate:(id)arg0 performCompletionHandler:(id)arg1 ;
-(void)executor:(id)arg0 continueInAppWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 didCompleteExecutionWithResult:(id)arg1 error:(id)arg2 ;
-(void)executor:(id)arg0 didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)executor:(id)arg0 didPerformActionWithResult:(id)arg1 error:(id)arg2 ;
-(void)executor:(id)arg0 environmentForViewSnippetWithCompletion:(id)arg1 ;
-(void)executor:(id)arg0 needsActionConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsDisambiguationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsValueWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 preferredContentSizeForViewSnippetWithCompletion:(id)arg1 ;


@end


#endif