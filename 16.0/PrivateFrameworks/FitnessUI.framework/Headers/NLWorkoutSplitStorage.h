// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLWORKOUTSPLITSTORAGE_H
#define NLWORKOUTSPLITSTORAGE_H


#import <Foundation/Foundation.h>


@interface NLWorkoutSplitStorage : NSObject

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) CGFloat value; // ivar: _value


+(CGFloat)_defaultSplitDistanceForActivityType:(id)arg0 userDistanceUnit:(id)arg1 ;
+(NSInteger)mapSplitTypeStringToEnum:(id)arg0 ;
+(id)_defaultSplit:(id)arg0 activityType:(id)arg1 userDistanceUnit:(id)arg2 ;
+(id)distanceSplitForActivityType:(id)arg0 userDistanceUnit:(id)arg1 ;
+(id)mapSplitTypeEnumToString:(NSInteger)arg0 ;
+(id)restoreFromDictionary:(id)arg0 ;
+(id)restoreFromDictionary:(id)arg0 activityType:(id)arg1 ;
+(id)serializeSplitStorage:(id)arg0 ;
+(id)splitForActivityType:(id)arg0 splitsActivityTypeKey:(id)arg1 userDistanceUnit:(id)arg2 ;
+(id)timeSplitForActivityType:(id)arg0 ;
+(void)saveSplitStorage:(id)arg0 forActivityType:(id)arg1 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 value:(CGFloat)arg1 ;


@end


#endif