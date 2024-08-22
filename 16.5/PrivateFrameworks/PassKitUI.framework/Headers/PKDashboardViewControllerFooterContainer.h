// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDVIEWCONTROLLERFOOTERCONTAINER_H
#define PKDASHBOARDVIEWCONTROLLERFOOTERCONTAINER_H

@class UIView, _UIBackdropView, UIView<PKHorizontalScrollingFooterViewComparator>, NSString;
@protocol PKHorizontalScrollingFooterViewProtocol;



@interface PKDashboardViewControllerFooterContainer : UIView <PKHorizontalScrollingFooterViewProtocol>

 {
    NSInteger _backdropStyle;
    _UIBackdropView *_backdropView;
    UIView *_topSeparatorView;
}


@property (retain, nonatomic) UIView<PKHorizontalScrollingFooterViewComparator> *currentFooter; // ivar: _currentFooter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView<PKHorizontalScrollingFooterViewComparator> *nextFooter; // ivar: _nextFooter
@property (readonly) Class superclass;


-(NSInteger)preferredBackdropStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(void)setTransitionProgress:(CGFloat)arg0 ;


@end


#endif