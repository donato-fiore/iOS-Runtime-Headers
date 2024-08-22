// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSANIMATIONCOORDINATORMANAGER_H
#define _UIFOCUSANIMATIONCOORDINATORMANAGER_H

@class NSNumber, NSHashTable;

#import <Foundation/Foundation.h>

#import "UIFocusAnimationCoordinator.h"

@interface _UIFocusAnimationCoordinatorManager : NSObject

@property (retain, nonatomic) UIFocusAnimationCoordinator *activeFocusAnimationCoordinator; // ivar: _activeFocusAnimationCoordinator
@property (retain, nonatomic) NSNumber *inheritedAnimationCoordinatorActiveAnimation; // ivar: _inheritedAnimationCoordinatorActiveAnimation
@property (nonatomic) CGFloat lastFocusUpdateTime; // ivar: _lastFocusUpdateTime
@property (retain, nonatomic) UIFocusAnimationCoordinator *lastFocusingItemAnimationCoordinator; // ivar: _lastFocusingItemAnimationCoordinator
@property (readonly, nonatomic) NSHashTable *unfocusingItems; // ivar: _unfocusingItems


-(id)init;
-(id)willUpdateFocusInContext:(id)arg0 ;
-(void)_performDelayedFocusingAnimationIfNecessary;
-(void)didUpdateFocusInContext:(id)arg0 fromItem:(id)arg1 ;


@end


#endif