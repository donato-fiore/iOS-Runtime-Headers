// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYSHORTCUTHUDMODIFIERKEYLISTENER_H
#define _UIKEYSHORTCUTHUDMODIFIERKEYLISTENER_H

@protocol _UIKeyShortcutHUDKeyListenerDelegate;

#import <Foundation/Foundation.h>


@interface _UIKeyShortcutHUDModifierKeyListener : NSObject

@property (nonatomic) NSInteger currentModifierFlags; // ivar: _currentModifierFlags
@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDKeyListenerDelegate> *delegate; // ivar: _delegate


-(void)handleKeyboardEvent:(id)arg0 ;
-(void)resetModifierFlags;


@end


#endif