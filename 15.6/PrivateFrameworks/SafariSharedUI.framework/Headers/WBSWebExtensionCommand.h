// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONCOMMAND_H
#define WBSWEBEXTENSIONCOMMAND_H

@class NSDictionary, NSString, NSArray, UIKeyCommand;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionCommand : NSObject {
    NSDictionary *_properties;
    NSString *_shortcutKey;
    NSArray *_modifiers;
    UIKeyCommand *_keyCommand;
}


@property (readonly, copy, nonatomic) NSString *commandDescription; // ivar: _commandDescription
@property (readonly, copy, nonatomic) NSString *commandName; // ivar: _commandName
@property (readonly, copy, nonatomic) NSString *extensionComposedIdentifier; // ivar: _extensionComposedIdentifier
@property (readonly, nonatomic) UIKeyCommand *keyCommand;
@property (readonly, copy, nonatomic) NSString *shortcut; // ivar: _shortcut


-(id)description;
-(id)initWithProperties:(id)arg0 extensionComposedIdentifier:(id)arg1 outErrorMessage:(*id)arg2 ;
-(void)_parseShortcut:(id)arg0 ;


@end


#endif