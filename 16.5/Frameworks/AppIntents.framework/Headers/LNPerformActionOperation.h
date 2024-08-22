// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNPERFORMACTIONOPERATION_H
#define LNPERFORMACTIONOPERATION_H

@class LNAction, NSString, NSUUID, LNActionExecutorOptions, LNSuccessResult;
@protocol LNPerformActionExecutorDelegate, LNConnectionClientInterface, LNPerformActionOperationDelegate;

#import <Foundation/Foundation.h>


@interface LNPerformActionOperation : NSObject <LNPerformActionExecutorDelegate>



@property (retain, nonatomic) LNAction *action; // ivar: _action
@property (readonly, nonatomic) NSObject<LNConnectionClientInterface> *client; // ivar: _client
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<LNPerformActionOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) LNActionExecutorOptions *options; // ivar: _options
@property (retain, nonatomic) LNSuccessResult *result; // ivar: _result
@property (readonly) Class superclass;


-(id)initWithAction:(id)arg0 options:(id)arg1 client:(id)arg2 completionHandler:(id)arg3 ;
-(void)finishWithError:(id)arg0 ;
-(void)requestActionConfirmation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestContinueInApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterConfirmation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterDisambiguation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterNeedsValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestViewSnippetEnvironmentWithCompletionHandler:(id)arg0 ;
-(void)start;


@end


#endif