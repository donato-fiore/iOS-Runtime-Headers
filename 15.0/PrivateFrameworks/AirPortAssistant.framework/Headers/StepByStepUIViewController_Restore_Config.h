// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_RESTORE_CONFIG_H
#define STEPBYSTEPUIVIEWCONTROLLER_RESTORE_CONFIG_H

@class UILabel, UIView;


#import "StepByStepUIViewController.h"

@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController {
    UILabel *restoreRecommendationLabel;
    UILabel *dontRestoreRecommendationLabel;
    BOOL dontRestore;
}


@property (retain, nonatomic) UIView *dontRestoreRecommendationContainerView; // ivar: dontRestoreRecommendationContainerView
@property (retain, nonatomic) UIView *restoreRecommendationContainerView; // ivar: restoreRecommendationContainerView


-(void)dealloc;
-(void)loadView;
-(void)setupInitialTableHeaderConfiguration;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif