// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCENTERFILLOBWELCOMECONTROLLER_H
#define HUCENTERFILLOBWELCOMECONTROLLER_H

@class OBWelcomeFullCenterContentController, UIView, NSLayoutConstraint;



@interface HUCenterFillOBWelcomeController : OBWelcomeFullCenterContentController

@property (readonly, nonatomic) UIView *centerFillContentView; // ivar: _centerFillContentView
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) NSUInteger contentMode; // ivar: _contentMode
@property (readonly, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (readonly, nonatomic) UIView *contentViewContainer; // ivar: _contentViewContainer
@property (readonly, nonatomic) NSLayoutConstraint *contentViewContainerHeightConstraint; // ivar: _contentViewContainerHeightConstraint
@property (readonly, nonatomic) NSLayoutConstraint *contentViewContainerWidthConstraint; // ivar: _contentViewContainerWidthConstraint
@property (readonly, nonatomic) NSLayoutConstraint *contentViewLeadingConstraint; // ivar: _contentViewLeadingConstraint
@property (readonly, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // ivar: _contentViewTopConstraint
@property (readonly, nonatomic) NSLayoutConstraint *contentViewTrailingConstraint; // ivar: _contentViewTrailingConstraint


-(BOOL)_limitToNonScrollingContentHeight;
-(CGFloat)_contentAspectRatio;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentView:(id)arg3 ;
-(void)_updateContentViewContainerConstraints;
-(void)_updateContentViewInsetConstraints;
-(void)_viewDidUpdateContent;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif