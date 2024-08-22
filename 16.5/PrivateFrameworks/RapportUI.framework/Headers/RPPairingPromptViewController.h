// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPPAIRINGPROMPTVIEWCONTROLLER_H
#define RPPAIRINGPROMPTVIEWCONTROLLER_H

@class UIViewController, UIButton, UILabel, UIActivityIndicatorView;
@protocol OS_dispatch_source;


#import "RPPINEntryView.h"

@interface RPPairingPromptViewController : UIViewController {
    NSObject<OS_dispatch_source> *_retryTimer;
    NSUInteger _retryDeadlineTicks;
}


@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (retain, nonatomic) RPPINEntryView *pinEntryView; // ivar: _pinEntryView
@property (retain, nonatomic) UILabel *progressLabel; // ivar: _progressLabel
@property (retain, nonatomic) UIActivityIndicatorView *progressSpinner; // ivar: _progressSpinner
@property (retain, nonatomic) UILabel *subTitleLabel; // ivar: _subTitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) id *tryPasswordHandler; // ivar: _tryPasswordHandler


+(id)instantiateViewController;
-(void)_retryTimer;
-(void)handleCancelButton:(id)arg0 ;
-(void)handlePINEntered:(id)arg0 ;
-(void)updateWithFlags:(unsigned int)arg0 throttleSeconds:(int)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif