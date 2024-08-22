// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7SWIFTUI23UIKITMAINMENUCONTROLLER_H
#define _TTC7SWIFTUI23UIKITMAINMENUCONTROLLER_H

@class UIResponder;



@interface _TtC7SwiftUI23UIKitMainMenuController : UIResponder {
    ? commandsList;
    ? navigationAuthority;
    ? environment;
    ? focusedValues;
    ? topLevelItemCoordinators;
    ? keyCommandMap;
}




-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)init;
-(void)_performMainMenuShortcutKeyCommand:(id)arg0 ;
-(void)buildMenuWithBuilder:(id)arg0 ;


@end


#endif