// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTHREADSAFEMUTABLEARRAY_H
#define FCTHREADSAFEMUTABLEARRAY_H

@class NFUnfairLock, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface FCThreadSafeMutableArray : NSObject {
    NFUnfairLock *_lock;
    NSMutableArray *_array;
}


@property (readonly, nonatomic) id *firstObject;
@property (readonly, nonatomic) id *lastObject;
@property (readonly, copy, nonatomic) NSArray *readOnlyArray;


-(id)init;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)readWriteWithAccessor:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeFirstObject;


@end


#endif