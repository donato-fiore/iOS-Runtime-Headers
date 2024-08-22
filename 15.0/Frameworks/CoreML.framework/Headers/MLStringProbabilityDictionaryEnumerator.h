// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLSTRINGPROBABILITYDICTIONARYENUMERATOR_H
#define MLSTRINGPROBABILITYDICTIONARYENUMERATOR_H

@class NSEnumerator;



@interface MLStringProbabilityDictionaryEnumerator : NSEnumerator {
    __map_iterator<std::__tree_iterator<std::__value_type<std::string, unsigned long>, std::__tree_node<std::__value_type<std::string, unsigned long>, void *> *, long>> _iter;
    __map_iterator<std::__tree_iterator<std::__value_type<std::string, unsigned long>, std::__tree_node<std::__value_type<std::string, unsigned long>, void *> *, long>> _iterEnd;
}


@property ? iter;
@property ? iterEnd;


+(id)enumeratorFromMap:(*void)arg0 ;
-(id)initWithStrMap:(*void)arg0 ;


@end


#endif