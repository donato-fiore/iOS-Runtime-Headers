// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VOSPROFILECOMMAND_H
#define _VOSPROFILECOMMAND_H

@class NSMutableSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VOSCommand.h"
#import "_VOSProfileMode.h"

@interface _VOSProfileCommand : NSObject <NSSecureCoding>



@property (retain, nonatomic) VOSCommand *command; // ivar: _command
@property (retain, nonatomic) NSMutableSet *gestures; // ivar: _gestures
@property (readonly, nonatomic) BOOL hasSecondaryCommands;
@property (retain, nonatomic) NSMutableSet *keyboardShortcuts; // ivar: _keyboardShortcuts
@property (weak, nonatomic) _VOSProfileMode *mode; // ivar: _mode
@property (retain, nonatomic) NSMutableSet *quickNavShortcuts; // ivar: _quickNavShortcuts
@property (retain, nonatomic) NSMutableSet *secondaryCommands; // ivar: _secondaryCommands


+(BOOL)supportsSecureCoding;
+(id)profileCommandWithCommand:(id)arg0 ;
+(id)profileCommandWithStringValue:(id)arg0 ;
-(id)_initWithCommand:(id)arg0 gestures:(id)arg1 keyboardShortcuts:(id)arg2 quickNavShortcuts:(id)arg3 secondaryCommands:(id)arg4 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)profileGestureForGesture:(id)arg0 ;
-(id)profileKeyboardShortcutForKeyChord:(id)arg0 ;
-(id)profileQuickNavShortcutForKeyChord:(id)arg0 ;
-(id)secondaryCommandsForPressCount:(NSInteger)arg0 ;
-(void)addGesture:(id)arg0 ;
-(void)addKeyboardShortcut:(id)arg0 ;
-(void)addQuickNavShortcut:(id)arg0 ;
-(void)addSecondaryCommand:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeGesture:(id)arg0 ;
-(void)removeKeyboardShortcut:(id)arg0 ;
-(void)removeQuickNavShortcut:(id)arg0 ;
-(void)removeSecondaryCommand:(id)arg0 ;


@end


#endif