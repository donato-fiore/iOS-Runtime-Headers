// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSTHREADSAFESET_H
#define AMSTHREADSAFESET_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AMSThreadSafeObject.h"

@interface AMSThreadSafeSet : NSObject

@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (retain, nonatomic) AMSThreadSafeObject *backingSet; // ivar: _backingSet
@property (readonly, nonatomic) NSUInteger count;


-(id)init;
-(void)addObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif