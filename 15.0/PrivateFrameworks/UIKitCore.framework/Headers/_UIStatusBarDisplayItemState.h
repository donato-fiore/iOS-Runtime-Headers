// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARDISPLAYITEMSTATE_H
#define _UISTATUSBARDISPLAYITEMSTATE_H

@class NSMutableSet, NSMutableArray, NSArray;
@protocol _UIStatusBarPrioritized;

#import <Foundation/Foundation.h>

#import "_UIStatusBarAnimation.h"
#import "_UIStatusBarDisplayItemPlacementState.h"
#import "_UIStatusBarDisplayItem.h"
#import "_UIStatusBarIdentifier.h"
#import "_UIStatusBarItem.h"
#import "_UIStatusBarStyleAttributes.h"
#import "_UIStatusBar.h"

@interface _UIStatusBarDisplayItemState : NSObject <_UIStatusBarPrioritized>



@property (retain, nonatomic) _UIStatusBarAnimation *addingAnimation; // ivar: _addingAnimation
@property (readonly, nonatomic, getter=_animationType) NSInteger animationType;
@property (readonly, nonatomic) NSMutableSet *animations; // ivar: _animations
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementState *currentPlacementState;
@property (nonatomic) NSInteger currentPlacementStateIndex; // ivar: _currentPlacementStateIndex
@property (nonatomic) BOOL dataEnabled; // ivar: _dataEnabled
@property (nonatomic) NSInteger dataUpdateStatus; // ivar: _dataUpdateStatus
@property (weak, nonatomic) _UIStatusBarDisplayItem *displayItem; // ivar: _displayItem
@property (nonatomic) NSInteger enabilityStatus; // ivar: _enabilityStatus
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isEnabledIgnoringAnimations) BOOL enabledIgnoringAnimations;
@property (nonatomic) BOOL floating; // ivar: _floating
@property (copy, nonatomic) _UIStatusBarIdentifier *identifier; // ivar: _identifier
@property (weak, nonatomic) _UIStatusBarItem *item; // ivar: _item
@property (retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes; // ivar: _overriddenStyleAttributes
@property (retain, nonatomic) NSMutableArray *placementStates; // ivar: _placementStates
@property (nonatomic) NSInteger placementUpdateStatus; // ivar: _placementUpdateStatus
@property (readonly, copy, nonatomic) NSArray *potentialPlacementRegionIdentifiers;
@property (nonatomic) NSInteger preferredPlacementStateIndex; // ivar: _preferredPlacementStateIndex
@property (nonatomic) NSInteger previousPlacementStateIndex; // ivar: _previousPlacementStateIndex
@property (readonly, nonatomic) NSInteger priority;
@property (retain, nonatomic) _UIStatusBarAnimation *removingAnimation; // ivar: _removingAnimation
@property (weak, nonatomic) _UIStatusBar *statusBar; // ivar: _statusBar
@property (nonatomic) NSInteger visibilityStatus; // ivar: _visibilityStatus
@property (nonatomic) BOOL wasEnabled; // ivar: _wasEnabled
@property (nonatomic) BOOL wasVisible; // ivar: _wasVisible


+(id)stateForDisplayItemWithIdentifier:(id)arg0 statusBar:(id)arg1 ;
+(void)setupRelationsBetweenDisplayItemStates:(id)arg0 visualProvider:(id)arg1 ;
-(BOOL)_resolveDependentItemStatesWithBlock:(id)arg0 ;
-(BOOL)_updatePlacementWithRecursionBlock:(id)arg0 ;
-(BOOL)_updateToNextPlacementStateIfNeeded;
-(BOOL)hasRunningAnimations;
-(BOOL)isCurrentPlacement:(id)arg0 ;
-(BOOL)prepareAnimation:(id)arg0 ;
-(BOOL)updatePlacement;
-(id)_animationWithUpdateAnimation:(id)arg0 ;
-(id)_effectiveStyleAttributesFromStyleAttributes:(id)arg0 data:(id)arg1 styleAttributesChanged:(*BOOL)arg2 ;
-(id)_updateForItem:(id)arg0 data:(id)arg1 styleAttributes:(id)arg2 ;
-(id)_updateForUpdatedData:(id)arg0 updatedStyleAttributes:(id)arg1 updatedEnability:(id)arg2 ;
-(id)description;
-(id)placementStateForPlacement:(id)arg0 ;
-(id)updateWithData:(id)arg0 styleAttributes:(id)arg1 ;
-(void)_cancelObsoleteAnimations;
-(void)_updateStatuses;
-(void)addPlacement:(id)arg0 inRegion:(id)arg1 ;
-(void)prepareForDataUpdate;
-(void)resetToPreferredPlacement;
-(void)updateToNextEnabledPlacement;


@end


#endif