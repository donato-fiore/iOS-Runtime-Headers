// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSORTEDCHANGEDOBJECTS_H
#define PLSORTEDCHANGEDOBJECTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLSortedChangedObjects : NSObject

@property (readonly, nonatomic) NSArray *changedObjects; // ivar: _changedObjects
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) *id sortedObjectPointers; // ivar: _sortedObjectPointers


-(id)initWithChangedObjects:(id)arg0 ;
-(void)dealloc;


@end


#endif