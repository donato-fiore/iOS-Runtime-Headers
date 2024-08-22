// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFDATECOMPONENTSCONDITION_H
#define HFDATECOMPONENTSCONDITION_H

@class NSDateComponents, NSString;
@protocol HFPrimitiveTimeCondition;


#import "HFTimeCondition.h"

@interface HFDateComponentsCondition : HFTimeCondition <HFPrimitiveTimeCondition>



@property (readonly, nonatomic) NSUInteger comparisonType; // ivar: _comparisonType
@property (readonly, nonatomic) NSDateComponents *dateComponents; // ivar: _dateComponents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTimeOfDayCondition;
@property (readonly) Class superclass;


-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)timeConditionType;
-(id)initWithDateComponents:(id)arg0 comparisonType:(NSUInteger)arg1 ;
-(id)initWithPredicate:(id)arg0 ;


@end


#endif