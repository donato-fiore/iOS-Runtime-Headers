// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIREADONLYEVENTVIEWCONTROLLER_H
#define EKUIREADONLYEVENTVIEWCONTROLLER_H



#import "EKEventViewController.h"

@interface EKUIReadonlyEventViewController : EKEventViewController



-(BOOL)shouldAutorotate;
-(BOOL)wantsManagement;
-(id)initWithEvent:(id)arg0 ;
-(void)willCommitPreview;


@end


#endif