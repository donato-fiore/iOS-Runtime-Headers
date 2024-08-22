// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTHREADSAFEMUTABLESET_H
#define FCTHREADSAFEMUTABLESET_H

@class NFUnfairLock, NSMutableSet, NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface FCThreadSafeMutableSet : NSObject {
    NFUnfairLock *_lock;
    NSMutableSet *_set;
}


@property (readonly, copy) NSArray *allObjects;
@property (readonly) NSUInteger count;
@property (readonly) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSSet *readOnlySet;


-(BOOL)containsObject:(id)arg0 ;
-(id)init;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)readWithAccessor:(id)arg0 ;
-(void)readWriteWithAccessor:(id)arg0 ;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectsInArray:(id)arg0 ;
-(void)removeObjectsInSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif