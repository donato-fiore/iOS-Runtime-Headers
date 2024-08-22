// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSPROXYWRAPPERMUTABLESET_H
#define _NSPROXYWRAPPERMUTABLESET_H

@class NSNotifyingWrapperMutableSet;


#import "_NSFaultingMutableSetMutationMethods.h"

@interface _NSProxyWrapperMutableSet : NSNotifyingWrapperMutableSet {
    _NSFaultingMutableSetMutationMethods *_mutationMethods;
}




-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)intersectSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)setSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif