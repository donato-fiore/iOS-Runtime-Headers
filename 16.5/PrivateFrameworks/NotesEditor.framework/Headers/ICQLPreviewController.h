// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQLPREVIEWCONTROLLER_H
#define ICQLPREVIEWCONTROLLER_H

@class QLPreviewController, NSLayoutConstraint, NSString, ICSelectorDelayer, UIButton;
@protocol UIPopoverPresentationControllerDelegate;


#import "ICViewOnlyPopoverViewController.h"

@interface ICQLPreviewController : QLPreviewController <UIPopoverPresentationControllerDelegate>



@property (retain, nonatomic) NSLayoutConstraint *bottomButtonConstraint; // ivar: _bottomButtonConstraint
@property (readonly, nonatomic) CGFloat bottomButtonSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICSelectorDelayer *hideViewOnlyDocumentButtonSelectorDelayer; // ivar: _hideViewOnlyDocumentButtonSelectorDelayer
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *viewOnlyDocumentButton; // ivar: _viewOnlyDocumentButton
@property (readonly, nonatomic) CGRect viewOnlyDocumentButtonFrame; // ivar: _viewOnlyDocumentButtonFrame
@property (readonly, nonatomic) BOOL viewOnlyDocumentButtonIsVisible;
@property (retain, nonatomic) ICViewOnlyPopoverViewController *viewOnlyPopoverController; // ivar: _viewOnlyPopoverController


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)commonInit;
-(void)hideViewOnlyButton;
-(void)popoverDidDismiss;
-(void)showViewOnlyDocumentPopover;
-(void)showViewOnlyWarning;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundColor;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif