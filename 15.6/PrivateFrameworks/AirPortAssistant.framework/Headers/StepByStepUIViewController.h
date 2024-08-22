// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_H
#define STEPBYSTEPUIVIEWCONTROLLER_H

@class UIView, UILabel, UIActivityIndicatorView;


#import "AssistantSubUIViewController.h"
#import "NetTopoMiniStaticLayout.h"

@interface StepByStepUIViewController : AssistantSubUIViewController

@property (retain, nonatomic) UIView *justTextContainerView; // ivar: justTextContainerView
@property (nonatomic) UILabel *justTextLabel; // ivar: justTextLabel
@property (nonatomic) int sbsMode; // ivar: sbsMode
@property (retain, nonatomic) UILabel *spinnerWithStatusBelowLabel; // ivar: spinnerWithStatusBelowLabel
@property (retain, nonatomic) UIActivityIndicatorView *spinnerWithStatusBelowSpinner; // ivar: spinnerWithStatusBelowSpinner
@property (retain, nonatomic) UIView *spinnerWithStatusBelowView; // ivar: spinnerWithStatusBelowView
@property (retain, nonatomic) UIView *tableFooterContainerView; // ivar: tableFooterContainerView
@property (retain, nonatomic) UIView *tableHeaderContainerView; // ivar: tableHeaderContainerView
@property (retain, nonatomic) NetTopoMiniStaticLayout *topoLayout; // ivar: topoLayout
@property (retain, nonatomic) UIView *topoView; // ivar: topoView


-(void)dealloc;
-(void)loadView;
-(void)stepByStepUpdateProgress:(id)arg0 forState:(int)arg1 ;
-(void)syncTopoUIForTarget:(id)arg0 andSource:(id)arg1 andNetwork:(id)arg2 connectionType:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif