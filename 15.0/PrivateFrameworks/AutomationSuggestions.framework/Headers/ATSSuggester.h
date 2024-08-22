// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSSUGGESTER_H
#define ATSSUGGESTER_H

@class RTRoutineManager;

#import <Foundation/Foundation.h>

#import "ActionRetriever.h"
#import "ATSConfig.h"

@interface ATSSuggester : NSObject

@property (retain, nonatomic) ActionRetriever *actionRetriever; // ivar: _actionRetriever
@property (retain, nonatomic) ATSConfig *atsConfig; // ivar: _atsConfig
@property (retain, nonatomic) RTRoutineManager *rtRoutineManager; // ivar: _rtRoutineManager


-(id)init;
-(id)initWithConfigFilePath:(id)arg0 ;
-(id)suggestions;
-(id)suggestionsWithLimit:(NSUInteger)arg0 minimumAbsoluteSupport:(NSUInteger)arg1 ;
-(id)suggestionsWithLimit:(NSUInteger)arg0 minimumAbsoluteSupport:(NSUInteger)arg1 minimumSupport:(CGFloat)arg2 minimumConfidence:(CGFloat)arg3 minimumLift:(CGFloat)arg4 minimumConviction:(CGFloat)arg5 minimumRulePowerFactor:(CGFloat)arg6 minimumUniqueDaysLastWeek:(NSUInteger)arg7 minimumUniqueDaysTotal:(NSUInteger)arg8 databasePath:(id)arg9 ;
-(id)suggestionsWithParameters:(id)arg0 databasePath:(id)arg1 ;
-(void)provideSuggestionFeedback:(id)arg0 ;


@end


#endif