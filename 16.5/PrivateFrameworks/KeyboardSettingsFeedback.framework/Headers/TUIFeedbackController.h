// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIFEEDBACKCONTROLLER_H
#define TUIFEEDBACKCONTROLLER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "_TtC24KeyboardSettingsFeedback26TUIFeedbackSurveyPresenter.h"

@interface TUIFeedbackController : NSObject

@property (readonly, nonatomic) NSString *feedbackFeatureEnabledKey; // ivar: _feedbackFeatureEnabledKey
@property (readonly, nonatomic) _TtC24KeyboardSettingsFeedback26TUIFeedbackSurveyPresenter *feedbackSurveyPresenter; // ivar: _feedbackSurveyPresenter
@property (readonly, nonatomic) NSString *finalInputModesKey; // ivar: _finalInputModesKey
@property (readonly, nonatomic) NSString *finalPreferenceValueKey; // ivar: _finalPreferenceValueKey
@property (readonly, nonatomic) NSString *finalTimestampKey; // ivar: _finalTimestampKey
@property (readonly, nonatomic) NSString *initialInputModesKey; // ivar: _initialInputModesKey
@property (readonly, nonatomic) NSString *initialPreferenceValueKey; // ivar: _initialPreferenceValueKey
@property (readonly, nonatomic) NSString *initialTimestampKey; // ivar: _initialTimestampKey
@property (readonly, nonatomic) NSString *preferenceKey; // ivar: _preferenceKey
@property (readonly, nonatomic) NSString *stateKey; // ivar: _stateKey
@property (readonly, nonatomic) NSArray *supportedLanguages; // ivar: _supportedLanguages
@property (readonly, nonatomic) NSString *surveyOutcomeKey; // ivar: _surveyOutcomeKey


+(id)controllerWithPreferenceKey:(id)arg0 supportedLanguages:(id)arg1 ;
-(BOOL)feedbackFeatureEnabled;
-(BOOL)finalPreferenceValue;
-(BOOL)initialPreferenceValue;
-(BOOL)isEligibleDevice;
-(BOOL)shouldCompleteStudyWithPreferenceValue:(BOOL)arg0 ;
-(id)build;
-(id)computeSurveyMetadata;
-(id)currentInputModes;
-(id)finalInputModes;
-(id)finalTimestamp;
-(id)initWithPreferenceKey:(id)arg0 supportedLanguages:(id)arg1 ;
-(id)initialInputModes;
-(id)initialTimestamp;
-(id)model;
-(void)_presentSurveyWithParentController:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateStudyDataWithFinalPreferenceValue:(BOOL)arg0 finalTimestamp:(id)arg1 ;
-(void)_updateStudyDataWithSurveyOutcome:(NSInteger)arg0 surveyError:(id)arg1 initialState:(NSInteger)arg2 ;
-(void)completeStudyWithFinalPreferenceValue:(BOOL)arg0 parentController:(id)arg1 ;


@end


#endif