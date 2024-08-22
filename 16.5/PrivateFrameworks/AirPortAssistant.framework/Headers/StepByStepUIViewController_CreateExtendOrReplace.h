// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_CREATEEXTENDORREPLACE_H
#define STEPBYSTEPUIVIEWCONTROLLER_CREATEEXTENDORREPLACE_H

@protocol TableViewManagerDelegate;


#import "StepByStepUIViewController.h"

@interface StepByStepUIViewController_CreateExtendOrReplace : StepByStepUIViewController <TableViewManagerDelegate>





-(void)handleSelectorChoiceWithTag:(NSUInteger)arg0 ;
-(void)loadView;
-(void)setupInitialTableHeaderConfiguration;
-(void)setupTable;
-(void)touchInCellAtIndexPath:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif