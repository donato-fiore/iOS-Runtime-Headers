// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSNAVIGATIONALERTVIEW_H
#define CPSNAVIGATIONALERTVIEW_H

@class UIView, NSString, UIImageView, CPNavigationAlert;
@protocol CPSLinearFocusProviding;


#import "CPSNavigationAlertButtonView.h"
#import "CPSNavigationAlertProgressView.h"
#import "CPSAbridgableLabel.h"

@interface CPSNavigationAlertView : UIView <CPSLinearFocusProviding>



@property (retain, nonatomic) CPSNavigationAlertButtonView *buttonView; // ivar: _buttonView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) CPNavigationAlert *navigationAlert; // ivar: _navigationAlert
@property (retain, nonatomic) CPSNavigationAlertProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) CPSAbridgableLabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) CPSAbridgableLabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(id)_linearFocusItems;
-(id)initWithFrame:(struct CGRect )arg0 navigationAlert:(id)arg1 templateDelegate:(id)arg2 buttonDelegate:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )intrinsicContentSize;
-(void)startAnimating;
-(void)updateNavigationAlert:(id)arg0 ;


@end


#endif