// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDDISMISSALRESPONSE_H
#define _UIKEYSHORTCUTHUDDISMISSALRESPONSE_H

@class BKSHIDEventAuthenticationMessage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIKeyCommand.h"

@interface _UIKeyShortcutHUDDismissalResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) UIKeyCommand *keyCommand; // ivar: _keyCommand
@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *pasteAuthenticationMessage; // ivar: _pasteAuthenticationMessage


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif