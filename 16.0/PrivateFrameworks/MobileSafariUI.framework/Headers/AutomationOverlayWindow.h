// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUTOMATIONOVERLAYWINDOW_H
#define AUTOMATIONOVERLAYWINDOW_H

@class UIWindow;
@protocol AutomationOverlayWindowDelegate;



@interface AutomationOverlayWindow : UIWindow

@property (weak, nonatomic) NSObject<AutomationOverlayWindowDelegate> *automationWindowDelegate; // ivar: _automationWindowDelegate


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif