// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCONCRETESETCHANGES_H
#define NSCONCRETESETCHANGES_H

@class NSSet, NSMutableArray;


#import "NSSetChanges.h"

@interface NSConcreteSetChanges : NSSetChanges {
    NSSet *_backing;
    NSMutableArray *_changes;
    BOOL _backingIsMutable;
}




-(NSUInteger)changeCount;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithSet:(id)arg0 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
-(void)_fault;
-(void)_willChange;
-(void)addChange:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateChanges:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateChangesUsingBlock:(id)arg0 ;
-(void)filterObjectsWithTest:(id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)removeAllObjects;
-(void)setSet:(id)arg0 ;
-(void)transformObjectsWithBlock:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif