// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCACTIVITYVIEWCONTROLLER_H
#define MCACTIVITYVIEWCONTROLLER_H

@class UIViewController, UIImageView, NSString, UILabel, UIActivityIndicatorView;



@interface MCActivityViewController : UIViewController

@property (retain, nonatomic) UIImageView *completionIconImageView; // ivar: _completionIconImageView
@property (retain, nonatomic) NSString *completionText; // ivar: _completionText
@property (retain, nonatomic) NSString *inProgresText; // ivar: _inProgresText
@property (nonatomic) BOOL isInProgress; // ivar: _isInProgress
@property (retain, nonatomic) UILabel *longWaitingWarningLabel; // ivar: _longWaitingWarningLabel
@property (retain, nonatomic) NSString *longWaitingWarningText; // ivar: _longWaitingWarningText
@property (nonatomic) CGFloat longWaitingWarningThreshold; // ivar: _longWaitingWarningThreshold
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_scheduleLongWaitingWarning;
-(void)completeActivityAnimated:(BOOL)arg0 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif