// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAUTOMATIONSUGGESTIONFEEDBACKMANAGER_H
#define WFAUTOMATIONSUGGESTIONFEEDBACKMANAGER_H

@class NSMutableDictionary;
@protocol WFApplicationStateObserver;

#import <Foundation/Foundation.h>


@interface WFAutomationSuggestionFeedbackManager : NSObject <WFApplicationStateObserver>



@property (retain, nonatomic) NSMutableDictionary *feedbackMapping; // ivar: _feedbackMapping
@property (retain, nonatomic) NSMutableDictionary *identifierMapping; // ivar: _identifierMapping


+(id)sharedManager;
+(id)trialIDWithSerializedSuggestion:(id)arg0 ;
+(id)trialIDWithSuggestion:(id)arg0 ;
-(BOOL)isMockDataEnabled;
-(id)init;
-(void)addFeedbackWithType:(NSUInteger)arg0 serializedSuggestion:(id)arg1 automationIdentifier:(id)arg2 ;
-(void)applicationContext:(id)arg0 applicationStateDidChange:(NSInteger)arg1 ;
-(void)dealloc;
-(void)reportFeedback;
-(void)trackRoutineWithIdentifier:(id)arg0 source:(NSUInteger)arg1 completed:(BOOL)arg2 interacted:(BOOL)arg3 ;
-(void)trackSuggestion:(id)arg0 source:(NSUInteger)arg1 completed:(BOOL)arg2 visible:(BOOL)arg3 interacted:(BOOL)arg4 ;


@end


#endif