// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAUDIOBARVIEWCONTROLLER_H
#define ICAUDIOBARVIEWCONTROLLER_H

@class UIViewController, UIButton, ICNote;
@protocol ICAudioBarViewControllerDelegate;



@interface ICAudioBarViewController : UIViewController

@property (weak, nonatomic) UIViewController *addedToViewController; // ivar: _addedToViewController
@property (weak, nonatomic) NSObject<ICAudioBarViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIButton *doneButton;
@property (nonatomic) CGFloat height;
@property (weak, nonatomic) ICNote *note; // ivar: _note


-(BOOL)_canShowWhileLocked;
-(BOOL)hasTranslucentNavigationBar;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)addConstraintsInSuperview:(id)arg0 ;
-(void)addToViewController:(id)arg0 ;
-(void)adjustTextViewContentInsetWhenAddingView:(BOOL)arg0 ;
-(void)dealloc;
-(void)done:(id)arg0 ;
-(void)noteWillBeDeletedNotification:(id)arg0 ;


@end


#endif