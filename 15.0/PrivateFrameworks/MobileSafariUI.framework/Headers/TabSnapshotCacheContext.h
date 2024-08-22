// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABSNAPSHOTCACHECONTEXT_H
#define TABSNAPSHOTCACHECONTEXT_H

@class NSOrderedSet;

#import <Foundation/Foundation.h>


@interface TabSnapshotCacheContext : NSObject

@property (nonatomic) NSUInteger capacity; // ivar: _capacity
@property (retain, nonatomic) NSOrderedSet *identifiersToCache; // ivar: _identifiersToCache
@property (nonatomic) BOOL updating; // ivar: _updating


-(id)description;


@end


#endif