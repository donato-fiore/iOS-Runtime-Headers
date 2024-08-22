// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDEKDAYVIEWCONTROLLER_H
#define DDEKDAYVIEWCONTROLLER_H

@class EKDayViewController, EKEvent;



@interface DDEKDayViewController : EKDayViewController

@property (retain) EKEvent *dd_event; // ivar: _dd_event


-(struct CGSize )preferredContentSize;
-(void)dd_update_scroll;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif