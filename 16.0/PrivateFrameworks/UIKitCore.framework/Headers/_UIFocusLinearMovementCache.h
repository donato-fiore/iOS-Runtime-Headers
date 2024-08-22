// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSLINEARMOVEMENTCACHE_H
#define _UIFOCUSLINEARMOVEMENTCACHE_H

@class NSArray, NSHashTable;

#import <Foundation/Foundation.h>


@interface _UIFocusLinearMovementCache : NSObject {
    CGFloat _lastUpdate;
    CGFloat _cooldownThreshold;
    NSArray *_linearItems;
    NSHashTable *_parentEnvironments;
    ? _flags;
}




-(id)initWithFocusBehavior:(id)arg0 ;
-(id)nextItemForRequest:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidateOnTimeout;
-(void)_updateParentEnvironmentIfNecessary;
-(void)environmentDidAppear:(id)arg0 ;
-(void)environmentWillDisappear:(id)arg0 ;
-(void)focusGroupPriorityDidChange:(id)arg0 ;
-(void)invalidateFocusItemContainer:(id)arg0 ;
-(void)scrollableContainerDidScroll:(id)arg0 ;
-(void)updateCacheWithContext:(id)arg0 ;


@end


#endif