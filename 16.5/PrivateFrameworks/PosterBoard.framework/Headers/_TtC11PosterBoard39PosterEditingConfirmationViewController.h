// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11POSTERBOARD39POSTEREDITINGCONFIRMATIONVIEWCONTROLLER_H
#define _TTC11POSTERBOARD39POSTEREDITINGCONFIRMATIONVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11PosterBoard39PosterEditingConfirmationViewController : UIViewController {
    ? delegate;
    ? userInfo;
    ? contentView;
    ? backgroundView;
    ? previewStackView;
    ? lockPreviewImageView;
    ? homePreviewContainerView;
    ? homePreviewContentView;
    ? lockPreviewWidthConstraint;
    ? homePreviewWidthConstraint;
    ? lockPreviewHeightConstraint;
    ? homePreviewHeightConstraint;
    ? lockPreviewLoadingIndicator;
    ? homePreviewLoadingIndicator;
    ? continueButton;
    ? customizeHomeButton;
    ? buttonFont;
    ? lockPreviewImage;
    ? homePreviewView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;


@end


#endif