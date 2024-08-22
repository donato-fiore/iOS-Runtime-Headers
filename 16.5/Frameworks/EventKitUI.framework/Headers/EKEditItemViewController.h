// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEDITITEMVIEWCONTROLLER_H
#define EKEDITITEMVIEWCONTROLLER_H

@class UIViewController;
@protocol EKEditItemViewControllerProtocol, EKStyleProvider, EKEditItemViewControllerDelegate;


#import "EKUIRecurrenceAlertController.h"

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol>

 {
    CGRect _initialFrame;
    id<EKStyleProvider> *_styleProvider;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}


@property (weak, nonatomic) NSObject<EKEditItemViewControllerDelegate> *editDelegate; // ivar: _editDelegate
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL modal; // ivar: _modal
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL showsDoneButton; // ivar: _showsDoneButton
@property (nonatomic) NSUInteger subitem; // ivar: _subitem
@property (nonatomic) BOOL useCustomBackButton;


+(id)preferredViewControllerForPresentationsFromViewController:(id)arg0 ;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(BOOL)hidesBottomBarWhenPushed;
-(BOOL)validateAllowingAlert:(BOOL)arg0 ;
-(CGFloat)marginForTableView:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 styleProvider:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_saveAndDismissWithForce:(BOOL)arg0 ;
-(void)cancel;
-(void)didReceiveMemoryWarning;
-(void)popIfNonModal;
-(void)saveAndDismiss;
-(void)saveAndDismissWithExtremePrejudice;
-(void)setCell:(id)arg0 checked:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif