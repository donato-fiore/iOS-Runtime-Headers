// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLINT64PROBABILITYDICTIONARYENUMERATOR_H
#define MLINT64PROBABILITYDICTIONARYENUMERATOR_H

@class NSEnumerator;



@interface MLInt64ProbabilityDictionaryEnumerator : NSEnumerator {
    __map_iterator<std::__tree_iterator<std::__value_type<unsigned long, unsigned long>, std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *> *, long>> _iter;
    __map_iterator<std::__tree_iterator<std::__value_type<unsigned long, unsigned long>, std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *> *, long>> _iterEnd;
}


@property ? iter;
@property ? iterEnd;


+(id)enumeratorFromMap:(*void)arg0 ;
-(id)initWithIntMap:(*void)arg0 ;


@end


#endif