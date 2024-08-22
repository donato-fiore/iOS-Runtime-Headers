// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUIFEEDBACKMANAGER_H
#define SPUIFEEDBACKMANAGER_H


#import <Foundation/Foundation.h>


@interface SPUIFeedbackManager : NSObject



+(id)feedbackListener;
+(void)cardViewDidDisappearWithEvent:(NSUInteger)arg0 withQueryId:(NSUInteger)arg1 ;
+(void)didAppearFromSource:(NSUInteger)arg0 withQueryId:(NSUInteger)arg1 queryString:(id)arg2 ;
+(void)didClearInputWithEvent:(NSUInteger)arg0 withQueryId:(NSUInteger)arg1 ;
+(void)didDisappearWithReason:(NSUInteger)arg0 withQueryId:(NSUInteger)arg1 ;
+(void)flushFeedbackWithCompletion:(id)arg0 ;


@end


#endif