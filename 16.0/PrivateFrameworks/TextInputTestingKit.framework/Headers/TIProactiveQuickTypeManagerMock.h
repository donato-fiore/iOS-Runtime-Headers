// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIPROACTIVEQUICKTYPEMANAGERMOCK_H
#define TIPROACTIVEQUICKTYPEMANAGERMOCK_H

@class NSDictionary;
@protocol TIProactiveQuickTypeManaging;

#import <Foundation/Foundation.h>


@interface TIProactiveQuickTypeManagerMock : NSObject <TIProactiveQuickTypeManaging>



@property (retain) NSDictionary *metrics; // ivar: _metrics


-(BOOL)isAutoCompleteEnabled;
-(BOOL)isAutoPopupEnabled;
-(BOOL)isEnabled;
-(BOOL)usePQT2Flow;
-(id)generateAndRenderProactiveSuggestionsWithInput:(id)arg0 withSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 textContentType:(id)arg3 ;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg0 withKeyboardState:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 isContinuousPath:(BOOL)arg9 withAvailableApps:(id)arg10 logBlock:(id)arg11 ;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg0 withKeyboardState:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 nextInputWillInsertAutospace:(BOOL)arg9 withAvailableApps:(id)arg10 logBlock:(id)arg11 ;
-(id)getMeCardEmailAddresses;
-(id)init;
-(id)searchForMeCardEmailAddresses;
-(id)searchForMeCardRegions;
// -(void)generateAndRenderProactiveSuggestionsForInput:(id)arg0 withKeyboardState:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 nextInputWillInsertAutospace:(BOOL)arg9 withIsResponseDenyListed:(BOOL)arg10 withShouldDisableAutoCaps:(BOOL)arg11 withAvailableApps:(id)arg12 logBlock:(id)arg13 async:(unk)arg14 completion:(BOOL)arg15  ;
-(void)generateAndRenderProactiveSuggestionsWithInput:(id)arg0 withSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 textContentType:(id)arg3 async:(BOOL)arg4 completion:(id)arg5 ;
// -(void)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg0 withKeyboardState:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 isContinuousPath:(BOOL)arg9 withAvailableApps:(id)arg10 logBlock:(id)arg11 async:(unk)arg12 completion:(BOOL)arg13  ;
-(void)propogateMetrics:(id)arg0 data:(id)arg1 ;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)reset;
-(void)suggestionAccepted:(id)arg0 fieldType:(id)arg1 ;
-(void)suggestionNotAccepted:(id)arg0 ;
-(void)userActionWithNoNewTriggers:(id)arg0 fieldType:(id)arg1 ;


@end


#endif