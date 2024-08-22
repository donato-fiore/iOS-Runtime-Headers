// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARDISPLAYITEMPLACEMENTSTATE_H
#define _UISTATUSBARDISPLAYITEMPLACEMENTSTATE_H

@class NSMutableArray;
@protocol _UIStatusBarPrioritized;

#import <Foundation/Foundation.h>

#import "_UIStatusBarDisplayItemPlacement.h"
#import "_UIStatusBarRegion.h"

@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized>



@property (readonly, nonatomic) BOOL canBeEnabled;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // ivar: _placement
@property (readonly, nonatomic) NSInteger priority;
@property (readonly, weak, nonatomic) _UIStatusBarRegion *region; // ivar: _region
@property (retain, nonatomic) NSMutableArray *relations; // ivar: _relations
@property (readonly, nonatomic, getter=areRelationsFulfilled) BOOL relationsFulfilled;


+(id)stateForDisplayItemPlacement:(id)arg0 region:(id)arg1 ;
-(id)description;


@end


#endif