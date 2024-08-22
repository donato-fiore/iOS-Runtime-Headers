// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNACTIONEXECUTOR_H
#define LNACTIONEXECUTOR_H

@class LNAction, LNActionMetadata, NSString, NSUUID;
@protocol LNConnectionClientInterface, OS_os_activity, LNActionExecutorDelegate;

#import <Foundation/Foundation.h>

#import "LNConnection.h"
#import "LNActionExecutorOptions.h"
#import "LNTranscriptPrivilegedProvider.h"

@interface LNActionExecutor : NSObject <LNConnectionClientInterface>



@property (readonly, copy, nonatomic) LNAction *action; // ivar: _action
@property (readonly, nonatomic) LNActionMetadata *actionMetadata; // ivar: _actionMetadata
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) LNConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LNActionExecutorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) LNActionExecutorOptions *options; // ivar: _options
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) LNTranscriptPrivilegedProvider *transcriptProvider; // ivar: _transcriptProvider


-(id)initWithAction:(id)arg0 metadata:(id)arg1 appBundleIdentifier:(id)arg2 connection:(id)arg3 options:(id)arg4 ;
-(void)_logTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)donateWithAction:(id)arg0 resolvedAction:(id)arg1 withOutput:(id)arg2 clientLabel:(id)arg3 predictions:(id)arg4 completionHandler:(id)arg5 ;
-(void)perform;
-(void)requestActionConfirmation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterConfirmation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterDisambiguation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterNeedsValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestViewSnippetEnvironmentWithCompletion:(id)arg0 ;
-(void)requestViewSnippetSizeWithCompletion:(id)arg0 ;
-(void)runShowOutputAction:(id)arg0 ;
-(void)setCompletedWithError:(id)arg0 ;


@end


#endif