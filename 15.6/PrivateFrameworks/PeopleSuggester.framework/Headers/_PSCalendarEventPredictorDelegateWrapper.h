// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCALENDAREVENTPREDICTORDELEGATEWRAPPER_H
#define _PSCALENDAREVENTPREDICTORDELEGATEWRAPPER_H

@class NSString;
@protocol ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol;

#import <Foundation/Foundation.h>

#import "_PSCalendarEventPredictor.h"

@interface _PSCalendarEventPredictorDelegateWrapper : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol>

 {
    _PSCalendarEventPredictor *_calendarEventPredictor;
    CGFloat _startSecondsFromQuery;
    CGFloat _endSecondsFromQuery;
    NSUInteger _maxParticipants;
    BOOL _isEnabled;
    NSInteger _defaultConfidenceCategory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getSuggestionsWithPredictionContext:(id)arg0 ;
-(id)init;
-(id)initWithCalendarEventPredictor:(id)arg0 config:(id)arg1 ;
-(id)initWithCalendarEventPredictor:(id)arg0 startSecondsFromQuery:(CGFloat)arg1 endSecondsFromQuery:(CGFloat)arg2 maxParticipants:(NSUInteger)arg3 isEnabled:(BOOL)arg4 defaultConfidenceCategory:(NSInteger)arg5 ;
-(void)pingWithCompletion:(id)arg0 ;
-(void)suggestionsForInteractionSuggestionRequest:(id)arg0 reply:(id)arg1 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif