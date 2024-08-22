// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPARTOFDAYNODE_H
#define PGGRAPHPARTOFDAYNODE_H

@class NSString;


#import "PGGraphOptimizedNode.h"

@interface PGGraphPartOfDayNode : PGGraphOptimizedNode

@property (readonly) NSString *name;
@property (readonly) NSUInteger partOfDay; // ivar: _partOfDay


+(NSUInteger)partOfDayForPartOfDayName:(id)arg0 ;
+(id)filter;
+(id)partOfDayNameForPartOfDay:(NSUInteger)arg0 ;
+(id)stringValueForPartOfDay:(NSUInteger)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithPartOfDay:(NSUInteger)arg0 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif