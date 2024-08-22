// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMRETRIEVALFILTER_H
#define BMRETRIEVALFILTER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface BMRetrievalFilter : NSObject

@property (nonatomic) NSInteger inclusionOperator; // ivar: _inclusionOperator
@property (retain, nonatomic) NSSet *items; // ivar: _items
@property (nonatomic) NSInteger operand; // ivar: _operand
@property (retain, nonatomic) NSSet *types; // ivar: _types


+(id)filterWithOperand:(NSInteger)arg0 inclusionOperator:(NSInteger)arg1 items:(id)arg2 ;
+(id)filterWithOperand:(NSInteger)arg0 inclusionOperator:(NSInteger)arg1 types:(id)arg2 ;
-(id)rulePredicate;


@end


#endif