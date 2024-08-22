// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHDATENODE_H
#define PGGRAPHDATENODE_H

@class NSString, MANodeFilter;
@protocol MAUniquelyIdentifiableNode;


#import "PGGraphOptimizedNode.h"
#import "PGGraphDateNodeCollection.h"
#import "PGGraphCalendarUnitNode.h"
#import "PGGraphSeasonNode.h"

@interface PGGraphDateNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode>



@property (readonly) PGGraphDateNodeCollection *collection;
@property (readonly) NSInteger day;
@property (readonly) PGGraphCalendarUnitNode *dayNode;
@property (readonly) NSInteger month;
@property (readonly) NSInteger monthDay;
@property (readonly) PGGraphCalendarUnitNode *monthDayNode;
@property (readonly) PGGraphCalendarUnitNode *monthNode;
@property (readonly) NSString *name; // ivar: _name
@property (readonly, nonatomic) PGGraphSeasonNode *seasonNode;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;
@property (readonly) PGGraphCalendarUnitNode *weekOfMonthNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfYearNode;
@property (readonly) NSInteger year;
@property (readonly) PGGraphCalendarUnitNode *yearNode;


+(id)dateNodeForDayNode:(id)arg0 monthNode:(id)arg1 yearNode:(id)arg2 ;
+(id)filter;
+(id)filterWithDateNames:(id)arg0 ;
+(id)momentOfDate;
+(id)seasonOfDate;
+(id)weekOfMonthOfDate;
+(id)weekOfYearOfDate;
-(BOOL)hasProperties:(id)arg0 ;
-(id)associatedNodesForRemoval;
-(id)description;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithName:(id)arg0 ;
-(id)label;
-(id)lastWeekDateNodes;
-(id)localDate;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)sameWeekDateNodes;
-(unsigned short)domain;
-(void)enumerateHolidayEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateHolidayNodesUsingBlock:(id)arg0 ;
-(void)enumerateMomentEdgesAndNodesUsingBlock:(id)arg0 ;


@end


#endif