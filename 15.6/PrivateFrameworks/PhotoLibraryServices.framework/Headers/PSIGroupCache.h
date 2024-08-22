// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIGROUPCACHE_H
#define PSIGROUPCACHE_H

@class NSMutableSet;
@protocol PSIGroupCacheDelegate;

#import <Foundation/Foundation.h>


@interface PSIGroupCache : NSObject {
    NSMutableSet *_groups;
    id<PSIGroupCacheDelegate> *_delegate;
}


@property (readonly) NSUInteger numberOfGroupsChecked; // ivar: _numberOfGroupsChecked
@property (readonly) NSUInteger numberOfGroupsQueried; // ivar: _numberOfGroupsQueried


-(NSUInteger)idOfGroupWithText:(id)arg0 identifier:(id)arg1 category:(NSUInteger)arg2 owningGroupId:(NSUInteger)arg3 didUpdateGroup:(*BOOL)arg4 ;
-(id)initWithDelegate:(id)arg0 ;


@end


#endif