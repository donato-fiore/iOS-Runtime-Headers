// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSTHREADSAFESET_H
#define AMSTHREADSAFESET_H

@class NSArray, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSThreadSafeSet : NSObject

@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (retain, nonatomic) NSMutableSet *backingSet; // ivar: _backingSet
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backingSetAccessQueue; // ivar: _backingSetAccessQueue
@property (readonly, nonatomic) NSUInteger count;


-(id)init;
-(void)addObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif