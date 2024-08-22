// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERDROPREGIONCONTEXT_H
#define SBSWITCHERDROPREGIONCONTEXT_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"

@interface SBSwitcherDropRegionContext : NSObject <BSDescriptionProviding>



@property (retain, nonatomic) SBAppLayout *closestVisibleAppLayout; // ivar: _closestVisibleAppLayout
@property (readonly, nonatomic) NSUInteger currentDropAction;
@property (nonatomic) NSUInteger currentDropRegion; // ivar: _currentDropRegion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBAppLayout *draggingAppLayout; // ivar: _draggingAppLayout
@property (readonly, nonatomic) NSInteger draggingLayoutRole; // ivar: _draggingLayoutRole
@property (readonly, nonatomic) SBAppLayout *draggingLeafAppLayout;
@property (retain, nonatomic) SBAppLayout *evictedAppLayout; // ivar: _evictedAppLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBAppLayout *intersectingAppLayout; // ivar: _intersectingAppLayout
@property (nonatomic) NSInteger intersectingAppLayoutConfiguration; // ivar: _intersectingAppLayoutConfiguration
@property (nonatomic) BOOL intersectingAppLayoutIsOnFirstRow; // ivar: _intersectingAppLayoutIsOnFirstRow
@property (nonatomic) NSInteger intersectingLayoutRole; // ivar: _intersectingLayoutRole
@property (readonly, nonatomic) SBAppLayout *intersectingLeafAppLayout;
@property (nonatomic) CGRect originRect; // ivar: _originRect
@property (retain, nonatomic) SBAppLayout *remainingAppLayout; // ivar: _remainingAppLayout
@property (nonatomic) CGSize scaledIntersectingAppLayoutSize; // ivar: _scaledIntersectingAppLayoutSize
@property (readonly) Class superclass;
@property (nonatomic) CGRect targetRect; // ivar: _targetRect
@property (nonatomic) CGSize unscaledIntersectingAppLayoutSize; // ivar: _unscaledIntersectingAppLayoutSize


-(BOOL)isSwap;
-(NSInteger)effectiveDroppingAppLayoutConfiguration;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayItemsToReloadSnapshots;
-(id)droppedLeafAppLayout;
-(id)finalTargetAppLayout;
-(id)initWithDraggingLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif