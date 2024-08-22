// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSDEBUGWINDOWLABELMODULE_H
#define _UIFOCUSDEBUGWINDOWLABELMODULE_H

@protocol _UIFocusDebugWindowModule;


#import "UIView.h"
#import "UILabel.h"

@interface _UIFocusDebugWindowLabelModule : UIView <_UIFocusDebugWindowModule>

 {
    UILabel *_content;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)title;
-(id)updatedAttributedLabelContent;
-(id)updatedLabelContent;
-(void)update;


@end


#endif