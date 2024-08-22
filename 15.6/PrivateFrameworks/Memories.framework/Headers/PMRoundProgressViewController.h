// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMROUNDPROGRESSVIEWCONTROLLER_H
#define PMROUNDPROGRESSVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel, UIButton, UIScreenEdgePanGestureRecognizer;
@protocol UIGestureRecognizerDelegate;


#import "PMRoundProgressView.h"

@interface PMRoundProgressViewController : UIViewController <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFadeOut; // ivar: _didFadeOut
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIButton *leftCancelButton; // ivar: _leftCancelButton
@property (nonatomic) float progress;
@property (retain, nonatomic) PMRoundProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) UIButton *rightCancelButton; // ivar: _rightCancelButton
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanLeftGestureRecognizer; // ivar: _screenEdgePanLeftGestureRecognizer
@property (nonatomic) BOOL showCancelButton;
@property (readonly) Class superclass;


-(BOOL)prefersStatusBarHidden;
-(id)cancelButton;
-(id)nibBundle;
-(void)configureView;
-(void)handlePanFromEdge:(id)arg0 ;
-(void)setCancelTarget:(id)arg0 action:(SEL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif