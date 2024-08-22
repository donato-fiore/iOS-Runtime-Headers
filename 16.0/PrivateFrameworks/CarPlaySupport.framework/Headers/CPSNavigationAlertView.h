// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSNAVIGATIONALERTVIEW_H
#define CPSNAVIGATIONALERTVIEW_H

@class UIView, NSString, CPUIFocusRingView, UIImageView, CPNavigationAlert, NSArray, UIStackView;
@protocol CPSLinearFocusProviding;


#import "CPSButton.h"
#import "CPSNavigationAlertFocusButton.h"
#import "CPSNavigationAlertProgressView.h"
#import "CPSAbridgableNewlineLabel.h"

@interface CPSNavigationAlertView : UIView <CPSLinearFocusProviding>



@property (retain, nonatomic) CPSButton *closeButton; // ivar: _closeButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPUIFocusRingView *focusRingView; // ivar: _focusRingView
@property (nonatomic) BOOL hasStartedAnimating; // ivar: _hasStartedAnimating
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) CPNavigationAlert *navigationAlert; // ivar: _navigationAlert
@property (retain, nonatomic) CPSNavigationAlertFocusButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) CPSNavigationAlertProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) NSArray *ringConstraints; // ivar: _ringConstraints
@property (retain, nonatomic) CPSNavigationAlertFocusButton *secondaryButton; // ivar: _secondaryButton
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) CPSAbridgableNewlineLabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) CPSAbridgableNewlineLabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(BOOL)_layoutHeightDependsOnWidth;
-(NSUInteger)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
-(id)_linearFocusItems;
-(id)initWithFrame:(struct CGRect )arg0 navigationAlert:(id)arg1 templateDelegate:(id)arg2 buttonDelegate:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)startAnimating;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNavigationAlert:(id)arg0 ;


@end


#endif