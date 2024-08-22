// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI11MENUMANAGER_H
#define _TTC5TEAUI11MENUMANAGER_H

@class UIResponder;



@interface _TtC5TeaUI11MenuManager : UIResponder {
    ? menu;
    ? menuItems;
    ? alternateMenuItems;
    ? stagedMenuActions;
    ? stagedAlternateMenuActions;
}




-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)init;
-(void)buildMenuWithBuilder:(id)arg0 ;
-(void)handleAlternateMenuCommandWithSender:(id)arg0 ;
-(void)handleMenuCommandWithSender:(id)arg0 ;


@end


#endif