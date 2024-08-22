// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11NOTESEDITOR35SIDECARINSERTPROGRESSVIEWCONTROLLER_H
#define _TTC11NOTESEDITOR35SIDECARINSERTPROGRESSVIEWCONTROLLER_H

@class UIViewController;
@protocol UIAdaptivePresentationControllerDelegate;



@interface _TtC11NotesEditor35SidecarInsertProgressViewController : UIViewController <UIAdaptivePresentationControllerDelegate>

 {
    ? service;
    ? device;
    ? $__lazy_storage_$_deviceImageView;
    ? $__lazy_storage_$_progressTitleLabel;
    ? $__lazy_storage_$_dividerView;
    ? $__lazy_storage_$_cancelButton;
    ? $__lazy_storage_$_stackView;
    ? didTapCancel;
}




-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancelButtonDidTouchUpInsideButton:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif