// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPLICATIONSHORTCUTCONTROLLER_H
#define APPLICATIONSHORTCUTCONTROLLER_H


#import <Foundation/Foundation.h>

#import "BrowserController.h"

@interface ApplicationShortcutController : NSObject

@property (weak, nonatomic) BrowserController *browserController; // ivar: _browserController


+(id)_shortcutItemWithType:(id)arg0 systemImageName:(id)arg1 ;
+(id)_shortcutItems;
+(void)updateShortcutItemsIfNeeded;
-(BOOL)_handleActionWithType:(id)arg0 forShortcut:(BOOL)arg1 ;
-(BOOL)handleActionWithType:(id)arg0 forShortcut:(BOOL)arg1 ;
-(BOOL)handleShortcutItemWithType:(id)arg0 ;
-(id)init;
-(void)_openNewEmptyTabWithURLFieldFocused:(BOOL)arg0 privateBrowsingState:(NSInteger)arg1 ;
-(void)_showBookmarksPanelWithSelectedCollection:(id)arg0 ;


@end


#endif