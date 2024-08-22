// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBITEMRESIZEGESTURESWITCHERMODIFIER_H
#define SBITEMRESIZEGESTURESWITCHERMODIFIER_H



#import "SBGestureSwitcherModifier.h"
#import "SBDisplayItemLayoutGrid.h"
#import "SBAppLayout.h"

@interface SBItemResizeGestureSwitcherModifier : SBGestureSwitcherModifier {
    NSInteger _selectedLayoutRole;
    NSUInteger _selectedEdge;
    NSUInteger _resizeAnchor;
    CGPoint _location;
    CGRect _initialFrameInScreenCoordinates;
    CGRect _currentFrameForDrawingInScreenCoordinates;
    CGSize _currentSceneSize;
    SBDisplayItemLayoutGrid *_layoutGrid;
    NSUInteger _currentActiveResizeCorner;
}


@property (readonly, nonatomic) SBAppLayout *selectedAppLayout; // ivar: _currentAppLayout


-(BOOL)_anyItemExceedsWidthThresholdToHideStrip;
-(BOOL)isItemResizingAllowedForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)wantsSceneResizesHostedContextForAppLayout:(id)arg0 ;
-(CGFloat)_widthThresholdToHideStrip;
-(NSUInteger)activeCornersForTouchResizeForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(id)_animationSettingsForLayout;
-(id)_itemsValidForOverlapping;
-(id)_responseForGestureUpdateAtGestureEnd:(BOOL)arg0 ;
-(id)_responseForSceneSizeUpdateToSize:(struct CGSize )arg0 center:(struct CGPoint )arg1 sceneUpdatesOnly:(BOOL)arg2 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 ;
-(id)topMostLayoutRolesForAppLayout:(id)arg0 ;
-(struct CGRect )_convertToScreenRectFromSpaceRect:(struct CGRect )arg0 ;
-(struct CGRect )_convertToSpaceRectFromScreenRect:(struct CGRect )arg0 ;
-(struct CGRect )_currentStageFrame;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif