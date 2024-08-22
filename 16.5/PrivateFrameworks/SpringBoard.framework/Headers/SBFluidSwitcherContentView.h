// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERCONTENTVIEW_H
#define SBFLUIDSWITCHERCONTENTVIEW_H

@class UIView, NSString;
@protocol UIFocusItemScrollableContainer, SBSwitcherLayoutElementProviding, UICoordinateSpace, SBFluidSwitcherContentViewDelegate;



@interface SBFluidSwitcherContentView : UIView <UIFocusItemScrollableContainer, SBSwitcherLayoutElementProviding>



@property (nonatomic) CGPoint contentOffset;
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFluidSwitcherContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL passesTouchesThrough; // ivar: _passesTouchesThrough
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize visibleSize;


-(NSUInteger)switcherLayoutElementType;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)preferredFocusEnvironments;


@end


#endif