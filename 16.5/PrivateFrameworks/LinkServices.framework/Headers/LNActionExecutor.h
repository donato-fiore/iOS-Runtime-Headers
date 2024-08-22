// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNACTIONEXECUTOR_H
#define LNACTIONEXECUTOR_H

@class LNActionMetadata, LNAction, NSString, NSUUID;
@protocol LNConnectionClientInterface, OS_os_activity, LNActionExecutorDelegate;

#import <Foundation/Foundation.h>

#import "LNConnection.h"
#import "LNActionExecutorOptions.h"
#import "LNActionExecutorPassthroughDelegate.h"

@interface LNActionExecutor : NSObject <LNConnectionClientInterface>



@property (copy, nonatomic) LNActionMetadata *_showOutputActionMetadata; // ivar: _showOutputActionMetadata
@property (readonly, copy, nonatomic) LNAction *action; // ivar: _action
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) LNConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LNActionExecutorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) LNActionExecutorOptions *options; // ivar: _options
@property (retain, nonatomic) LNActionExecutorPassthroughDelegate *showOutputActionPassthroughDelegate; // ivar: _showOutputActionPassthroughDelegate
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithAction:(id)arg0 connection:(id)arg1 options:(id)arg2 ;
-(void)_logTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)donateIfNecessaryWithResult:(id)arg0 completionHandler:(id)arg1 ;
-(void)perform;
-(void)requestActionConfirmation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestContinueInApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterConfirmation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterDisambiguation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterNeedsValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestViewSnippetEnvironmentWithCompletion:(id)arg0 ;
-(void)requestViewSnippetSizeWithCompletion:(id)arg0 ;
-(void)runShowOutputActionIfNecessary:(id)arg0 completionHandler:(id)arg1 ;
-(void)setCompletedWithError:(id)arg0 ;


@end


#endif