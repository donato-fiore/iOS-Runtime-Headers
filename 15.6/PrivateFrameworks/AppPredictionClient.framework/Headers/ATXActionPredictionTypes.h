// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXACTIONPREDICTIONTYPES_H
#define ATXACTIONPREDICTIONTYPES_H


#import <Foundation/Foundation.h>


@interface ATXActionPredictionTypes : NSObject



+(NSUInteger)stringToActionExperience:(id)arg0 found:(*BOOL)arg1 ;
+(NSUInteger)stringToActionFeedbackStage:(id)arg0 found:(*BOOL)arg1 ;
+(id)actionExperienceToString:(NSUInteger)arg0 ;
+(id)actionFeedbackStageToString:(NSUInteger)arg0 ;
+(id)actionFeedbackTypeToString:(NSUInteger)arg0 ;
+(id)actionTypeToPETString:(NSUInteger)arg0 ;
+(id)actionTypeToString:(NSUInteger)arg0 ;
+(id)engagementTypeToString:(NSUInteger)arg0 ;
+(id)inverseActionFeedbackTypeMapping;


@end


#endif