// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUIVIEWSTACKCONTAINER_H
#define SIRISHAREDUIVIEWSTACKCONTAINER_H

@class NSLayoutConstraint, UIView, NSArray;
@protocol SiriSharedUIStackableContentDelegate, SiriSharedUIViewStackContainerHosting;


#import "SiriSharedUIStandardView.h"
#import "SiriSharedUIViewStack.h"
#import "SiriSharedUIRectSet.h"

@interface SiriSharedUIViewStackContainer : SiriSharedUIStandardView <SiriSharedUIStackableContentDelegate, SiriSharedUIViewStackContainerHosting>



@property (retain, nonatomic) NSLayoutConstraint *bottomContainerConstraint; // ivar: _bottomContainerConstraint
@property (nonatomic) CGFloat bottomPadding; // ivar: _bottomPadding
@property (retain, nonatomic) SiriSharedUIViewStack *bottomViewStack; // ivar: _bottomViewStack
@property (retain, nonatomic) UIView *containingView; // ivar: _containingView
@property (readonly, nonatomic) NSArray *contentViews; // ivar: _contentViews
@property (retain, nonatomic) SiriSharedUIViewStack *customConstraintsViewStack; // ivar: _customConstraintsViewStack
@property (retain, nonatomic) NSLayoutConstraint *temporaryTopConstraintForBottomViewStack; // ivar: _temporaryTopConstraintForBottomViewStack
@property (retain, nonatomic) NSLayoutConstraint *topContainerConstraint; // ivar: _topContainerConstraint
@property (readonly, nonatomic) CGFloat topPadding; // ivar: _topPadding
@property (retain, nonatomic) SiriSharedUIViewStack *topViewStack; // ivar: _topViewStack
@property (retain, nonatomic) NSLayoutConstraint *trailingContainerConstraint; // ivar: _trailingContainerConstraint
@property (copy, nonatomic, getter=_transitionalContentViewFrames, setter=_setTransitionalContentViewFrames:) SiriSharedUIRectSet *transitionalContentViewFrames; // ivar: _transitionalContentViewFrames


-(BOOL)hasContentAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)stackableContentMaximumContainerWidth;
-(id)_mostRecentBottomStackViewAnchor;
-(id)_mostRecentTopStackViewAnchor;
-(id)_stackContainingContentView:(id)arg0 ;
-(id)hostingView;
-(id)initWithFrame:(struct CGRect )arg0 contentViews:(id)arg1 ;
-(id)stackableViewsWithAttachment:(NSInteger)arg0 ;
-(void)_attachContentView:(id)arg0 ;
-(void)_clearTransitionalContentViewFrameSnapshots;
-(void)_configureContainingView;
-(void)_configureCustomTopAndBottomViews:(id)arg0 ;
-(void)_snapshotContentViewFramesForTransition;
-(void)_updateContainingViewConstraints;
-(void)_updateContainingViewTopConstraint;
-(void)_updateContainingViewTrailingConstraint;
-(void)addContentView:(id)arg0 ;
-(void)bringSubviewToFront:(id)arg0 ;
-(void)didDismissModalContent;
-(void)didMoveToWindow;
-(void)relayout;
-(void)removeContentView:(id)arg0 ;
-(void)stackableContentDidLayout:(id)arg0 ;
-(void)stackableContentWillUpdateLayout:(id)arg0 withUpdatedContentSize:(struct CGSize )arg1 animated:(BOOL)arg2 ;
-(void)updateConstraints;
-(void)willDismissModalContent;
-(void)willPresentModalContent;


@end


#endif