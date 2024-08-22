// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMIOSPROGRESSVIEWCONTROLLER_H
#define PMIOSPROGRESSVIEWCONTROLLER_H

@class UIViewController, UIButton, NSLayoutConstraint, NSString, UILabel;
@protocol UIGestureRecognizerDelegate;


#import "PMRoundProgressView.h"

@interface PMiOSProgressViewController : UIViewController <UIGestureRecognizerDelegate>



@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) NSLayoutConstraint *cancelButtonLeadingConstraint; // ivar: _cancelButtonLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *cancelButtonTopConstraint; // ivar: _cancelButtonTopConstraint
@property (nonatomic) NSUInteger cancelStyle; // ivar: _cancelStyle
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *horizontalCenteredLabel; // ivar: _horizontalCenteredLabel
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSLayoutConstraint *nonCompactRoundProgressCenterY; // ivar: _nonCompactRoundProgressCenterY
@property (nonatomic) float progress;
@property (retain, nonatomic) PMRoundProgressView *progressView; // ivar: _progressView
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton
@property (copy, nonatomic) NSString *stageDescription; // ivar: _stageDescription
@property (retain, nonatomic) UILabel *stageLabel; // ivar: _stageLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *verticalCenteredLabel; // ivar: _verticalCenteredLabel
@property (retain, nonatomic) NSLayoutConstraint *verticalProgressLabelSpace; // ivar: _verticalProgressLabelSpace


-(void)attachCancelButton;
-(void)loadView;
-(void)setCancelTarget:(id)arg0 action:(SEL)arg1 ;
-(void)updateLayoutWithTraitCollection:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif