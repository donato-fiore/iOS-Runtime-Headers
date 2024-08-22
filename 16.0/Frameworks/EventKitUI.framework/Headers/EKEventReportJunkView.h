// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTREPORTJUNKVIEW_H
#define EKEVENTREPORTJUNKVIEW_H

@class UIView;


#import "EKEventDetailsHighlightControl.h"
#import "EKEventViewController.h"

@interface EKEventReportJunkView : UIView {
    EKEventDetailsHighlightControl *_control;
    EKEventViewController *_controller;
}


@property BOOL isLargeDayView; // ivar: _isLargeDayView


-(id)initWithViewController:(id)arg0 ;
-(void)tapped:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateActionText;
-(void)viewDidMoveToSuperview;


@end


#endif