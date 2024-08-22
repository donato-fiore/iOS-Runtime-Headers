// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIALERTCONTROLLER_H
#define BKUIALERTCONTROLLER_H

@class UIAlertController;
@protocol BKUIAlertControllerListener;



@interface BKUIAlertController : UIAlertController

@property (weak, nonatomic) NSObject<BKUIAlertControllerListener> *alertListener; // ivar: _alertListener


-(void)addAction:(id)arg0 ;
-(void)bkui_addPreferredAction:(id)arg0 ;


@end


#endif