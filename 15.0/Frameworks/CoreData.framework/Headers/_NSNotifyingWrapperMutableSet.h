// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSNOTIFYINGWRAPPERMUTABLESET_H
#define _NSNOTIFYINGWRAPPERMUTABLESET_H

@class NSMutableSet, NSString;


#import "NSManagedObject.h"

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {
    NSManagedObject *_container;
    NSString *_key;
    NSMutableSet *_mutableSet;
}




+(Class)classForKeyedUnarchiver;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqualToSet:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allObjects;
-(id)anyObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)initWithContainer:(id)arg0 key:(id)arg1 mutableSet:(id)arg2 ;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 withObject:(id)arg1 ;
-(void)minusSet:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)setSet:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)unionSet:(id)arg0 ;


@end


#endif