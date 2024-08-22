// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXSTAGEMANAGERWARNINGVIEWCONTROLLER_H
#define CFXSTAGEMANAGERWARNINGVIEWCONTROLLER_H

@class UIViewController, PUReviewScreenDoneButton;
@protocol CFXStageManagerWarningViewControllerDelegate;



@interface CFXStageManagerWarningViewController : UIViewController

@property (weak, nonatomic) NSObject<CFXStageManagerWarningViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PUReviewScreenDoneButton *doneButton; // ivar: _doneButton
@property (readonly, nonatomic) BOOL isMultitasking;


-(BOOL)showDoneButton;
-(void)doneButtonTapped:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif