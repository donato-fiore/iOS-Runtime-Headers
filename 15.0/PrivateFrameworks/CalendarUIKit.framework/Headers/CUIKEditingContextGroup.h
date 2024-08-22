// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKEDITINGCONTEXTGROUP_H
#define CUIKEDITINGCONTEXTGROUP_H

@class NSMutableArray, NSNumber, EKEventStore, NSSet;

#import <Foundation/Foundation.h>

#import "CUIKObjectGroup.h"

@interface CUIKEditingContextGroup : NSObject

@property (retain) NSMutableArray *additionalObjectGroups; // ivar: _additionalObjectGroups
@property (retain) NSNumber *earlyCommitDecisionAsNumber; // ivar: _earlyCommitDecisionAsNumber
@property (weak) EKEventStore *eventStore; // ivar: _eventStore
@property (retain) CUIKObjectGroup *objectGroup; // ivar: _objectGroup
@property (retain) NSSet *openContexts; // ivar: _openContexts
@property (retain) NSNumber *spanDecisionAsNumber; // ivar: _spanDecisionAsNumber




@end


#endif