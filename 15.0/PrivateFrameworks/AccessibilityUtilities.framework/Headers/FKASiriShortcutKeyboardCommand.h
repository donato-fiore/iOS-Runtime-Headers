// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FKASIRISHORTCUTKEYBOARDCOMMAND_H
#define FKASIRISHORTCUTKEYBOARDCOMMAND_H

@class AXSSKeyboardCommand, NSString;


#import "AXSiriShortcut.h"

@interface FKASiriShortcutKeyboardCommand : AXSSKeyboardCommand

@property (retain, nonatomic) AXSiriShortcut *shortcut; // ivar: _shortcut
@property (readonly, nonatomic) NSString *siriShortcutIdentifier; // ivar: _siriShortcutIdentifier


+(BOOL)supportsSecureCoding;
+(id)commandWithSiriShortcutIdentifier:(id)arg0 ;
-(BOOL)isEqualToCommand:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiriShortcutIdentifier:(id)arg0 ;
-(id)localizedName;
-(void)encodeWithCoder:(id)arg0 ;
-(void)perform;


@end


#endif