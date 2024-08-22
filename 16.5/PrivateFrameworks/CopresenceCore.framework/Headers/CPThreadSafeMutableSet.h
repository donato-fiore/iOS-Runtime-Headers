// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPTHREADSAFEMUTABLESET_H
#define CPTHREADSAFEMUTABLESET_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface CPThreadSafeMutableSet : NSObject {
    NSMutableSet *_mutableSet;
}


@property (readonly, nonatomic) os_unfair_lock_s operationLock; // ivar: _operationLock


-(BOOL)containsObject:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addObject:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif