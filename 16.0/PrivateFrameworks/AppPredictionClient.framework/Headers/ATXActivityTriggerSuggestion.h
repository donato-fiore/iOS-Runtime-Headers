// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXACTIVITYTRIGGERSUGGESTION_H
#define ATXACTIVITYTRIGGERSUGGESTION_H

@class NSString, NSArray;
@protocol ATXActivitySuggestion;

#import <Foundation/Foundation.h>

#import "ATXActivitySuggestionClient.h"
#import "ATXActivity.h"

@interface ATXActivityTriggerSuggestion : NSObject <ATXActivitySuggestion>

 {
    ATXActivitySuggestionClient *_activitySuggestionClient;
}


@property (readonly, nonatomic) ATXActivity *activity; // ivar: _activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedTriggerSuggestionText;
@property (readonly, nonatomic) NSUInteger location;
@property (readonly, copy, nonatomic) NSString *suggestionUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) NSString *uuidString;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXActivityTriggerSuggestion:(id)arg0 ;
-(id)_localizableStringForModeSemanticType:(NSInteger)arg0 ;
-(id)_localizedStringForDrivingTriggerFromBundle:(id)arg0 semanticType:(NSInteger)arg1 userModeName:(id)arg2 ;
-(id)_localizedStringForGameControllerTriggerFromBundle:(id)arg0 semanticType:(NSInteger)arg1 userModeName:(id)arg2 ;
-(id)_localizedStringForLocationTriggerFromBundle:(id)arg0 semanticType:(NSInteger)arg1 userModeName:(id)arg2 ;
-(id)_localizedStringForScreenActivityTriggerFromBundle:(id)arg0 semanticType:(NSInteger)arg1 userModeName:(id)arg2 ;
-(id)_localizedStringForSleepingTriggerFromBundle:(id)arg0 semanticType:(NSInteger)arg1 userModeName:(id)arg2 ;
-(id)_localizedStringForSmartActivationFromBundle:(id)arg0 semanticType:(NSInteger)arg1 userModeName:(id)arg2 ;
-(id)_localizedStringForWorkoutTriggerFromBundle:(id)arg0 semanticType:(NSInteger)arg1 userModeName:(id)arg2 ;
-(id)init;
-(id)initWithActivity:(id)arg0 activitySuggestionClient:(id)arg1 ;


@end


#endif