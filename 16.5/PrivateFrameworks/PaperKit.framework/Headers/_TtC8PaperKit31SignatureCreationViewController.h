// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT31SIGNATURECREATIONVIEWCONTROLLER_H
#define _TTC8PAPERKIT31SIGNATURECREATIONVIEWCONTROLLER_H

@class UIViewController;
@protocol PKCanvasViewDelegate;



@interface _TtC8PaperKit31SignatureCreationViewController : UIViewController <PKCanvasViewDelegate>

 {
    ? panelSize;
    ? downArrowImagePadding;
    ? clearButtonBottomPadding;
    ? clearButtonImagePadding;
    ? signatureLineInset;
    ? signatureLinePadding;
    ? signatureMarkPadding;
    ? signatureLineColor;
    ? buttonImageConfiguration;
    ? xmarkImageConfiguration;
    ? signaturePenWidth;
    ? navigationBar;
    ? signatureView;
    ? signatureLineView;
    ? doneItem;
    ? clearButton;
    ? savedFirstResponder;
    ? signatureDescription;
    ? completion;
    ? customLabelDoneAction;
}


@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;


-(BOOL)_canShowWhileLocked;
-(BOOL)becomeFirstResponder;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancelAction:(id)arg0 ;
-(void)canvasViewDrawingDidChange:(id)arg0 ;
-(void)clearAction;
-(void)descriptionAction;
-(void)doneAction:(id)arg0 ;
-(void)updateDoneButtonState:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif