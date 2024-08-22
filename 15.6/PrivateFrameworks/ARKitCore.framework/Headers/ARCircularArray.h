// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCIRCULARARRAY_H
#define ARCIRCULARARRAY_H

@class NSMutableOrderedSet, NSArray;

#import <Foundation/Foundation.h>


@interface ARCircularArray : NSObject {
    NSMutableOrderedSet *_objects;
    NSInteger _capacity;
    os_unfair_lock_s _orderedSetLock;
}


@property (readonly) NSArray *contents;


-(BOOL)contains:(id)arg0 ;
-(NSInteger)count;
-(id)add:(id)arg0 ;
-(id)initWithCapacity:(NSInteger)arg0 ;
-(id)peekLatest;


@end


#endif