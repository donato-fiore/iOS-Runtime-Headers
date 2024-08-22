// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTTABLEVIEW_H
#define EKEVENTTABLEVIEW_H

@class UITableView;


#import "EKEventViewController.h"

@interface EKEventTableView : UITableView

@property (weak, nonatomic) EKEventViewController *controller; // ivar: _controller


-(void)reloadData;


@end


#endif