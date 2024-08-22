// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONCOMMANDSHORTCUTCONFLICT_H
#define WBSWEBEXTENSIONCOMMANDSHORTCUTCONFLICT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionCommandShortcutConflict : NSObject

@property (readonly, copy, nonatomic) NSString *extensionDisplayName; // ivar: _extensionDisplayName
@property (readonly, copy, nonatomic) NSString *extensionDisplayShortName; // ivar: _extensionDisplayShortName
@property (readonly, copy, nonatomic) NSString *shortcut; // ivar: _shortcut


-(id)description;
-(id)initWithShortcut:(id)arg0 extensionDisplayName:(id)arg1 extensionDisplayShortName:(id)arg2 ;


@end


#endif