// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNEXECUTORREQUEST_H
#define LNEXECUTORREQUEST_H

@class LNAction, NSString;
@protocol LNPerformActionExecutorDelegate, LNConnectionClientInterface;

#import <Foundation/Foundation.h>


@interface LNExecutorRequest : NSObject <LNPerformActionExecutorDelegate>



@property (retain, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<LNConnectionClientInterface> *executor; // ivar: _executor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAction:(id)arg0 executor:(id)arg1 ;
-(void)requestActionConfirmation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterConfirmation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterDisambiguation:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestParameterNeedsValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestViewSnippetEnvironmentWithCompletionHandler:(id)arg0 ;


@end


#endif