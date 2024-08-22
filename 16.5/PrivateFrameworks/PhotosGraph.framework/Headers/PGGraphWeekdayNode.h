// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHWEEKDAYNODE_H
#define PGGRAPHWEEKDAYNODE_H



#import "PGGraphPartOfWeekNode.h"
#import "PGGraphWeekdayNodeCollection.h"

@interface PGGraphWeekdayNode : PGGraphPartOfWeekNode

@property (readonly, nonatomic) PGGraphWeekdayNodeCollection *collection;


+(id)filter;
-(id)init;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;


@end


#endif