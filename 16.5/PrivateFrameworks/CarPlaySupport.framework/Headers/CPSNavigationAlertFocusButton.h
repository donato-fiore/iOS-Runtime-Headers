// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSNAVIGATIONALERTFOCUSBUTTON_H
#define CPSNAVIGATIONALERTFOCUSBUTTON_H

@class CPAlertAction;


#import "CPSButton.h"
#import "CPSNavigationAlertProgressView.h"

@interface CPSNavigationAlertFocusButton : CPSButton

@property (weak, nonatomic) CPAlertAction *alertAction; // ivar: _alertAction
@property (nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (weak, nonatomic) CPSNavigationAlertProgressView *progressView; // ivar: _progressView


+(id)buttonWithAction:(id)arg0 progressView:(id)arg1 isPrimary:(BOOL)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif