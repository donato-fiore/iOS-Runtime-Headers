// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGBINARYPREDICATE_H
#define KGBINARYPREDICATE_H


#import <Foundation/Foundation.h>


@interface KGBinaryPredicate : NSObject

@property (readonly, nonatomic) NSUInteger comparator; // ivar: _comparator
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)initWithComparator:(NSUInteger)arg0 value:(id)arg1 ;


@end


#endif