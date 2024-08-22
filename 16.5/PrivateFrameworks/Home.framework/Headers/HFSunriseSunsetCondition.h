// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSUNRISESUNSETCONDITION_H
#define HFSUNRISESUNSETCONDITION_H

@class NSString, NSDateComponents;
@protocol HFPrimitiveTimeCondition;


#import "HFTimeCondition.h"

@interface HFSunriseSunsetCondition : HFTimeCondition <HFPrimitiveTimeCondition>



@property (readonly, nonatomic) NSUInteger comparisonType; // ivar: _comparisonType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDateComponents *offset; // ivar: _offset
@property (readonly, copy, nonatomic) NSString *significantEvent; // ivar: _significantEvent
@property (readonly) Class superclass;


-(NSInteger)compare:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(id)initWithSignificantEvent:(id)arg0 comparisonType:(NSUInteger)arg1 ;
-(id)initWithSignificantEvent:(id)arg0 offset:(id)arg1 comparisonType:(NSUInteger)arg2 ;


@end


#endif