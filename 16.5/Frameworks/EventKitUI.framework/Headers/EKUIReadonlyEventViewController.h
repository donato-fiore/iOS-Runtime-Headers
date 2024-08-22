// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIREADONLYEVENTVIEWCONTROLLER_H
#define EKUIREADONLYEVENTVIEWCONTROLLER_H



#import "EKEventViewController.h"

@interface EKUIReadonlyEventViewController : EKEventViewController



-(BOOL)shouldAutorotate;
-(BOOL)wantsManagement;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithEvent:(id)arg0 ;
-(void)willCommitPreview;


@end


#endif