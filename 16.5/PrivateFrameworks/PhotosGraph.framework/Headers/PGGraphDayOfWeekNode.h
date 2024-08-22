// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHDAYOFWEEKNODE_H
#define PGGRAPHDAYOFWEEKNODE_H

@class NSString, MANodeFilter;
@protocol MAUniquelyIdentifiableNode;


#import "PGGraphOptimizedNode.h"

@interface PGGraphDayOfWeekNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode>



@property (readonly) NSInteger dayOfWeek; // ivar: _dayOfWeek
@property (readonly) NSString *name;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;


+(NSInteger)dayOfWeekForName:(id)arg0 ;
+(id)filter;
+(id)nameForDayOfWeek:(NSInteger)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)initWithDayOfWeek:(NSInteger)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif