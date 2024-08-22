// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUEFASTMUTABLESET_H
#define NSKEYVALUEFASTMUTABLESET_H



#import "NSKeyValueMutableSet.h"
#import "NSKeyValueMutatingSetMethodSet.h"

@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {
    NSKeyValueMutatingSetMethodSet *_mutatingMethods;
}




-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(void)_proxyNonGCFinalize;
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