// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBBUTTONTRAY_H
#define OBBUTTONTRAY_H

@class UIView, NSLayoutConstraint, NSMutableArray, UIViewController, UIStackView;


#import "OBButtonTrayLayoutGuide.h"
#import "OBLinkableTemplateLabel.h"
#import "OBPrivacyLinkController.h"

@interface OBButtonTray : UIView

@property (retain, nonatomic) UIView *backdropContainer; // ivar: _backdropContainer
@property (nonatomic) NSInteger backdropStyle; // ivar: _backdropStyle
@property (retain, nonatomic) OBButtonTrayLayoutGuide *buttonLayoutGuide; // ivar: _buttonLayoutGuide
@property (retain, nonatomic) NSLayoutConstraint *buttonViewBottomConstraint; // ivar: _buttonViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *buttonViewLeadingConstraint; // ivar: _buttonViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *buttonViewTopConstraint; // ivar: _buttonViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *buttonViewTrailingConstraint; // ivar: _buttonViewTrailingConstraint
@property (retain, nonatomic) NSMutableArray *buttons; // ivar: _buttons
@property (retain, nonatomic) OBLinkableTemplateLabel *captionLabel; // ivar: _captionLabel
@property (nonatomic) NSInteger captionStyle; // ivar: _captionStyle
@property (nonatomic, getter=isDetached) BOOL detached; // ivar: _detached
@property (retain, nonatomic) UIView *effectView; // ivar: _effectView
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (retain, nonatomic) UIView *privacyContainer; // ivar: _privacyContainer
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // ivar: _privacyLinkController
@property (retain, nonatomic) NSLayoutConstraint *privacyLinkControllerLeadingConstraint; // ivar: _privacyLinkControllerLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *privacyLinkControllerTrailingConstraint; // ivar: _privacyLinkControllerTrailingConstraint
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(BOOL)_shouldHandleLandscapeiPhoneLayout;
-(BOOL)hasContent;
-(CGFloat)bottomPadding;
-(CGFloat)topPadding;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )detachedSize;
-(struct CGSize )intrinsicContentSize;
-(void)_setCaptionText:(id)arg0 style:(NSInteger)arg1 learnMoreURL:(id)arg2 ;
-(void)_setUpBackdrops;
-(void)_updateButtonConstraints;
-(void)_updateCaptionTextAppearance;
-(void)_updateTrayVisibility;
-(void)addButton:(id)arg0 ;
-(void)addCaptionText:(id)arg0 ;
-(void)addPrivacyLinkForBundles:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)removeAllButtons;
-(void)removeButton:(id)arg0 ;
-(void)removeFromSuperview;
-(void)setCaptionText:(id)arg0 ;
-(void)setCaptionText:(id)arg0 learnMoreURL:(id)arg1 ;
-(void)setCaptionText:(id)arg0 style:(NSInteger)arg1 ;
-(void)setCaptionText:(id)arg0 style:(NSInteger)arg1 learnMoreURL:(id)arg2 ;
-(void)setPrivacyLinkForBundles:(id)arg0 ;
-(void)showButtonsAvailable;
-(void)showButtonsBusy;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif