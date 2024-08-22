// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICALERTCONTROLLER_H
#define ICALERTCONTROLLER_H

@class UIAlertController, UIAlertAction;



@interface ICAlertController : UIAlertController

@property (nonatomic) BOOL didDismissWithDismissWithoutActionBlock; // ivar: _didDismissWithDismissWithoutActionBlock
@property (nonatomic) BOOL didPerformAction; // ivar: _didPerformAction
@property (retain, nonatomic) UIAlertAction *dismissAction; // ivar: _dismissAction
@property (copy, nonatomic) id *dismissWithoutActionBlock; // ivar: _dismissWithoutActionBlock
@property (nonatomic) BOOL shouldDismissWhenShowingNote; // ivar: _shouldDismissWhenShowingNote


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)commonInit;
-(void)dealloc;
-(void)dismissWhenPossible;


@end


#endif