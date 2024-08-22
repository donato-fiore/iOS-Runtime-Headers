// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLEXPANDEDPLATTERPRESENTATIONVIEW_H
#define PLEXPANDEDPLATTERPRESENTATIONVIEW_H

@class UIView, NSString, UIView<PLExpandedPlatter><PLContentSizeCategoryAdjusting>, UIViewController<PLClickPresentationInteractionPresentable>, UIScrollView;
@protocol UIScrollViewDelegate, PLContentSizeManaging, PLExpandedPlatterPresentationViewDelegate;



@interface PLExpandedPlatterPresentationView : UIView <UIScrollViewDelegate, PLContentSizeManaging>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PLExpandedPlatterPresentationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView<PLExpandedPlatter><PLContentSizeCategoryAdjusting> *expandedPlatterView; // ivar: _expandedPlatterView
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController<PLClickPresentationInteractionPresentable> *presentableViewController; // ivar: _presentableViewController
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(CGFloat)_translationWithVelocity:(CGFloat)arg0 acceleration:(CGFloat)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )contentSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)_configureExpandedPlatterViewIfNecessary;
-(void)_configureScrollViewIfNecessary;
-(void)_dismissExpandedPlatterWithTrigger:(NSInteger)arg0 ;
-(void)_handleDismissButton:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif