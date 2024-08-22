// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSSUGGESTIONFROMTEXTPREDICTORDELEGATEWRAPPER_H
#define _PSSUGGESTIONFROMTEXTPREDICTORDELEGATEWRAPPER_H

@class NSString;
@protocol ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol;

#import <Foundation/Foundation.h>

#import "_PSSuggestionFromTextPredictor.h"

@interface _PSSuggestionFromTextPredictorDelegateWrapper : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol>

 {
    NSInteger _delegateType;
    _PSSuggestionFromTextPredictor *_textPredictor;
    CGFloat _startSecondsFromQuery;
    CGFloat _endSecondsFromQuery;
    float _priorScoreThreshold;
    BOOL _isEnabled;
    NSInteger _defaultConfidenceCategory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getSuggestionsWithPredictionContext:(id)arg0 ;
-(id)initWithDelegateType:(NSInteger)arg0 textPredictor:(id)arg1 startSecondsFromQuery:(CGFloat)arg2 endSecondsFromQuery:(CGFloat)arg3 priorScoreThreshold:(float)arg4 isEnabled:(BOOL)arg5 defaultConfidenceCategory:(NSInteger)arg6 ;
-(id)initWithTextPredictor:(id)arg0 calendarConfig:(id)arg1 ;
-(id)initWithTextPredictor:(id)arg0 remindersConfig:(id)arg1 ;
-(void)pingWithCompletion:(id)arg0 ;
-(void)suggestionsForInteractionSuggestionRequest:(id)arg0 clientModelId:(id)arg1 reply:(id)arg2 ;
-(void)updateWithCalendarConfig:(id)arg0 ;
-(void)updateWithRemindersConfig:(id)arg0 ;


@end


#endif