// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif