// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTROLCENTERCLICKINTERACTIONDRIVER_H
#define _UICONTROLCENTERCLICKINTERACTIONDRIVER_H

@class UILongPressTimeoutClickInteractionDriver;



@interface _UIControlCenterClickInteractionDriver : UILongPressTimeoutClickInteractionDriver



+(BOOL)prefersCancelsTouchesInView;
-(CGFloat)clickDownDuration;
-(CGFloat)clickTimeoutDuration;
-(id)init;


@end


#endif