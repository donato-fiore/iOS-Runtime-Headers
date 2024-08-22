// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABGROUPALERTCONTROLLER_H
#define TABGROUPALERTCONTROLLER_H

@class UIAlertController;
@protocol TabGroupAlertControllerDelegate;



@interface TabGroupAlertController : UIAlertController

@property (weak, nonatomic) NSObject<TabGroupAlertControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger role; // ivar: _role


-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif