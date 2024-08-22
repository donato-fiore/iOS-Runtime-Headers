// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHWEEKENDNODE_H
#define PGGRAPHWEEKENDNODE_H



#import "PGGraphPartOfWeekNode.h"
#import "PGGraphWeekendNodeCollection.h"

@interface PGGraphWeekendNode : PGGraphPartOfWeekNode

@property (readonly, nonatomic) PGGraphWeekendNodeCollection *collection;


+(id)filter;
-(id)init;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;


@end


#endif