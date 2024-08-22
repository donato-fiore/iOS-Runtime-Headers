// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTBUILDERSTATISTICSCALCULATORS_H
#define HDWORKOUTBUILDERSTATISTICSCALCULATORS_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDWorkoutBuilderStatisticsCalculators : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_calculatorsByTypeAndActivityUUID;
}




+(BOOL)supportsSecureCoding;
-(id)allQuantityTypes;
-(id)calculatorForQuantityType:(id)arg0 activityUUID:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateCalculatorsForActivityUUID:(id)arg0 handler:(id)arg1 ;
-(void)enumerateCalculatorsForQuantityType:(id)arg0 handler:(id)arg1 ;
-(void)enumerateCalculatorsWithHandler:(id)arg0 ;
-(void)setCalculator:(id)arg0 forQuantityType:(id)arg1 activityUUID:(id)arg2 ;


@end


#endif