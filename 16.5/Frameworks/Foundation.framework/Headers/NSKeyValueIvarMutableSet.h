// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKEYVALUEIVARMUTABLESET_H
#define NSKEYVALUEIVARMUTABLESET_H



#import "NSKeyValueMutableSet.h"

@interface NSKeyValueIvarMutableSet : NSKeyValueMutableSet {
    *objc_ivar _ivar;
}




-(NSUInteger)count;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
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