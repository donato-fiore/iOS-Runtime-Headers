// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7SWIFTUI11APPDELEGATE_H
#define _TTC7SWIFTUI11APPDELEGATE_H

@class UIResponder;
@protocol UIApplicationDelegate;



@interface _TtC7SwiftUI11AppDelegate : UIResponder <UIApplicationDelegate>

 {
    ? fallbackDelegate;
    ? mainMenuController;
    ? appNavigationAuthority;
}




-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(BOOL)application:(id)arg0 runTest:(id)arg1 options:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)application:(id)arg0 configurationForConnectingSceneSession:(id)arg1 options:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(void)_performMainMenuShortcutKeyCommand:(id)arg0 ;
-(void)buildMenuWithBuilder:(id)arg0 ;
-(void)validateCommand:(id)arg0 ;


@end


#endif