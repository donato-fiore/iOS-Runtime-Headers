// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROGRESSALERTCONTROLLER_H
#define PKPROGRESSALERTCONTROLLER_H

@class UIAlertController;
@protocol PKProgressAlertControllerDelegate;



@interface PKProgressAlertController : UIAlertController

@property (weak, nonatomic) NSObject<PKProgressAlertControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat progress; // ivar: _progress


+(id)newProgressAlertControllerWithTitle:(id)arg0 cancel:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)canBecomeFirstResponder;


@end


#endif