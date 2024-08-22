// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHCALENDARUNITNODE_H
#define PGGRAPHCALENDARUNITNODE_H

@class NSString, MANodeFilter;
@protocol PGAssetCollectionFeature, MAUniquelyIdentifiableNode;


#import "PGGraphOptimizedNode.h"

@interface PGGraphCalendarUnitNode : PGGraphOptimizedNode <PGAssetCollectionFeature, MAUniquelyIdentifiableNode>

 {
    BOOL _calendarUnit;
}


@property (readonly, nonatomic) NSInteger calendarUnitValue; // ivar: _calendarUnitValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;


+(NSInteger)encodedMonthDayForMonth:(NSInteger)arg0 day:(NSInteger)arg1 ;
+(id)dayFilter;
+(id)monthDayFilter;
+(id)monthFilter;
+(id)propertiesForMonth:(NSInteger)arg0 day:(NSInteger)arg1 ;
+(id)propertiesWithCalendarUnitValue:(NSInteger)arg0 ;
+(id)weekOfMonthFilter;
+(id)weekOfYearFilter;
+(id)yearFilter;
+(struct PGCalendarUnitMonthDayValue )monthDayValueForMonthDayNode:(id)arg0 ;
+(struct PGCalendarUnitMonthDayValue )monthDayValueForMonthDayNodeCalendarUnitValue:(NSInteger)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)collection;
-(id)initWithCalendarUnit:(NSUInteger)arg0 value:(NSInteger)arg1 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(id)name;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(unsigned short)domain;


@end


#endif