// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNPERFORMACTIONEXECUTORDELEGATEPROXY_H
#define LNPERFORMACTIONEXECUTORDELEGATEPROXY_H

@protocol LNPerformActionExecutorDelegate;

#import <Foundation/Foundation.h>


@interface LNPerformActionExecutorDelegateProxy : NSObject <LNPerformActionExecutorDelegate>

 {
    ? interface;
}




-(?)requestActionConfirmationcompletionHandler;
-(?)requestContinueInAppcompletionHandler;
-(?)requestParameterConfirmationcompletionHandler;
-(?)requestParameterDisambiguationcompletionHandler;
-(?)requestParameterNeedsValuecompletionHandler;
-(id)init;
-(id)initWithInterface:(id)arg0 ;
-(void)requestViewSnippetEnvironmentWithCompletionHandler:(id)arg0 ;


@end


#endif