// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTUIENROLLMENTBASEVIEW_H
#define VTUIENROLLMENTBASEVIEW_H

@class UIView, SUICOrbView, UILabel, UITextView, UIScrollView, _UIBackdropView, NSLayoutConstraint, NSString;
@protocol UITextViewDelegate, SUICOrbViewControlling, VTUIEnrollmentDelegate;



@interface VTUIEnrollmentBaseView : UIView <UITextViewDelegate, SUICOrbViewControlling>

 {
    SUICOrbView *_orbView;
    UIView *_scrollContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_instructionLabel;
    UIView *_contentView;
    UITextView *_privacyTextView;
    UIScrollView *_scrollView;
    _UIBackdropView *_backdropView;
    NSLayoutConstraint *_readableLeftAnchorConstraint;
    NSLayoutConstraint *_readableRightAnchorConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<VTUIEnrollmentDelegate> *enrollmentDelegate; // ivar: _enrollmentDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)showPrivacyTextView;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(NSInteger)_backdropStyle;
-(id)_createPrivacyTextView;
-(id)backdropView;
-(id)footerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupUI;
-(void)animateOrbViewToOffWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)fadeInSubviews;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)setContentView:(id)arg0 ;
-(void)setInputPowerLevel:(float)arg0 ;
-(void)setInstructionText:(id)arg0 ;
-(void)setOutputPowerLevel:(float)arg0 ;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif