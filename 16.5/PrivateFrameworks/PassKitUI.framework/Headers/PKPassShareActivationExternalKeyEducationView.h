// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREACTIVATIONEXTERNALKEYEDUCATIONVIEW_H
#define PKPASSSHAREACTIVATIONEXTERNALKEYEDUCATIONVIEW_H

@class UIView, UIImageView, UIImage;
@protocol PKPassShareActivationExternalKeyEducationViewDelegate;


#import "PKContinuousButton.h"

@interface PKPassShareActivationExternalKeyEducationView : UIView {
    id<PKPassShareActivationExternalKeyEducationViewDelegate> *_delegate;
    UIImageView *_educationImageView;
    PKContinuousButton *_nextButton;
}


@property (retain, nonatomic) UIImage *educationImage;


-(id)init;
-(id)initWithContinueButtonText:(id)arg0 delegate:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_nextButtonPressed;
-(void)layoutSubviews;


@end


#endif