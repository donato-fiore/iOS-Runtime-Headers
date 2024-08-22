// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDINPUTMODEINDICATORPOPOVERCONTROLLER_H
#define UIKEYBOARDINPUTMODEINDICATORPOPOVERCONTROLLER_H



#import "UIKeyboardPopoverController.h"
#import "UIKeyboardInputModeIndicator.h"

@interface UIKeyboardInputModeIndicatorPopoverController : UIKeyboardPopoverController {
    UIKeyboardInputModeIndicator *_inputModeIndicator;
}




-(NSInteger)overrideUserInterfaceStyle;
-(id)init;
-(void)updateInputModeIndicator;


@end


#endif