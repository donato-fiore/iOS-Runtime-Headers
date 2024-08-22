// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPQUICKTYPEBROKER_H
#define PPQUICKTYPEBROKER_H

@class NSString;
@protocol PPFeedbackAccepting, PPClientStore;

#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"
#import "PPClientFeedbackHelper.h"

@interface PPQuickTypeBroker : NSObject <PPFeedbackAccepting, PPClientStore>

 {
    PPXPCClientHelper *_clientHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}


@property (retain, nonatomic) NSString *clientIdentifier;


+(id)sharedInstance;
-(id)_remoteObjectProxy;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(void)hibernateWithCompletion:(id)arg0 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg0 localeIdentifier:(id)arg1 recipients:(id)arg2 bundleIdentifier:(id)arg3 limit:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)quickTypeItemsWithQuery:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)recentQuickTypeItemsForRecipients:(id)arg0 completion:(id)arg1 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)warmUpWithCompletion:(id)arg0 ;


@end


#endif