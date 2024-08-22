// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_REPLACECHOICE_H
#define STEPBYSTEPUIVIEWCONTROLLER_REPLACECHOICE_H

@protocol TableViewManagerDelegate;


#import "StepByStepUIViewController.h"

@interface StepByStepUIViewController_ReplaceChoice : StepByStepUIViewController <TableViewManagerDelegate>





-(void)loadView;
-(void)setupTable;
-(void)touchInCellAtIndexPath:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif