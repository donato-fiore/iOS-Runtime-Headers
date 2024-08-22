// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGRANGEPREDICATE_H
#define KGRANGEPREDICATE_H


#import <Foundation/Foundation.h>


@interface KGRangePredicate : NSObject

@property (readonly, nonatomic) NSUInteger comparator; // ivar: _comparator
@property (readonly, nonatomic) id *value1; // ivar: _value1
@property (readonly, nonatomic) id *value2; // ivar: _value2


-(id)initWithComparator:(NSUInteger)arg0 value1:(id)arg1 value2:(id)arg2 ;


@end


#endif