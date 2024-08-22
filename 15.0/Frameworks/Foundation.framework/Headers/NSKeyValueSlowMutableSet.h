// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUESLOWMUTABLESET_H
#define NSKEYVALUESLOWMUTABLESET_H



#import "NSKeyValueMutableSet.h"
#import "NSKeyValueGetter.h"
#import "NSKeyValueSetter.h"

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptySets;
    char _padding;
}




-(NSUInteger)count;
-(id)_createMutableSetValueWithSelector:(SEL)arg0 ;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)_setValueWithSelector:(SEL)arg0 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
-(void)_proxyNonGCFinalize;
-(void)_raiseNilValueExceptionWithSelector:(SEL)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)setSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif