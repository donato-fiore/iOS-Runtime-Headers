// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDCLIENTSESSION_H
#define _UIKEYSHORTCUTHUDCLIENTSESSION_H


#import <Foundation/Foundation.h>

#import "_UIKeyShortcutHUDConfiguration.h"
#import "UIWindowScene.h"

@interface _UIKeyShortcutHUDClientSession : NSObject

@property (retain, nonatomic) _UIKeyShortcutHUDConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) UIWindowScene *keyWindowScene; // ivar: _keyWindowScene
@property (nonatomic) NSInteger remainingInitialHeldModifierFlags; // ivar: _remainingInitialHeldModifierFlags




@end


#endif