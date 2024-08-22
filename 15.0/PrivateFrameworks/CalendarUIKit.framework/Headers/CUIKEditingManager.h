// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKEDITINGMANAGER_H
#define CUIKEDITINGMANAGER_H

@class NSMutableDictionary, NSMutableSet, EKEventStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUIKEditingManager : NSObject

@property (retain) NSMutableDictionary *changeHistory; // ivar: _changeHistory
@property (retain) NSMutableDictionary *changedObjectMap; // ivar: _changedObjectMap
@property (retain) NSMutableSet *editingContextGroups; // ivar: _editingContextGroups
@property (weak) EKEventStore *eventStore; // ivar: _eventStore
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue




@end


#endif