// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSSUGGESTION_H
#define ATSSUGGESTION_H

@class NSUserActivity, NSString, INIntent, BMRule, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATSSuggestion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUserActivity *activity; // ivar: _activity
@property (retain, nonatomic) NSString *activityString; // ivar: _activityString
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) BMRule *rule; // ivar: _rule
@property (retain, nonatomic) NSString *trialID; // ivar: _trialID
@property (readonly, nonatomic) NSArray *triggers; // ivar: _triggers


+(BOOL)supportsSecureCoding;
+(id)activityStringFromConsequentItem:(id)arg0 withActionRetriever:(id)arg1 ;
+(id)bundleIDFromConsequentItem:(id)arg0 ;
+(id)intentFromConsequentItem:(id)arg0 withActionRetriever:(id)arg1 ;
+(id)suggestionFromRule:(id)arg0 withActionRetriever:(id)arg1 routineManager:(id)arg2 ;
+(id)triggerFromAntecedentItem:(id)arg0 timeRestrictionItem:(id)arg1 withRoutineManager:(id)arg2 ;
-(id)actionTitle;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTriggers:(id)arg0 intent:(id)arg1 activityString:(id)arg2 bundleID:(id)arg3 rule:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif