// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HUQUICKCONTROLSINGLECONTROLHOSTVIEW_H
#define _HUQUICKCONTROLSINGLECONTROLHOSTVIEW_H

@class UIView, NAUILayoutConstraintSet;
@protocol HULayoutAnchorProviding;



@interface _HUQuickControlSingleControlHostView : UIView

@property (readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // ivar: _constraintSet
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSObject<HULayoutAnchorProviding> *preferredFrameLayoutGuide; // ivar: _preferredFrameLayoutGuide


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)hasSingleControlView;
-(id)initWithContentView:(id)arg0 ;
-(void)_setupConstraintSet;
-(void)didMoveToWindow;
-(void)updateConstraints;


@end


#endif