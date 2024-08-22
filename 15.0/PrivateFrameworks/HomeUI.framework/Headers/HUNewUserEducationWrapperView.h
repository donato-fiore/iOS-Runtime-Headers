// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNEWUSEREDUCATIONWRAPPERVIEW_H
#define HUNEWUSEREDUCATIONWRAPPERVIEW_H

@class UIView, UIToolbar;
@protocol HUNewUserEducationWrapperViewDelegate;


#import "HUNewUserEducationCollectionViewController.h"
#import "HUNewUserEducationStackView.h"
#import "HUNewUserEducationWrapperViewModel.h"

@interface HUNewUserEducationWrapperView : UIView

@property (retain, nonatomic) UIToolbar *bottomToolBar; // ivar: _bottomToolBar
@property (weak, nonatomic) NSObject<HUNewUserEducationWrapperViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HUNewUserEducationCollectionViewController *instructionsCollectionViewController; // ivar: _instructionsCollectionViewController
@property (retain, nonatomic) HUNewUserEducationStackView *verticalStackView; // ivar: _verticalStackView
@property (retain, nonatomic) HUNewUserEducationWrapperViewModel *viewModel; // ivar: _viewModel


-(id)initWithFrame:(struct CGRect )arg0 viewModel:(id)arg1 ;
-(void)_onLearnMoreButton:(id)arg0 ;


@end


#endif