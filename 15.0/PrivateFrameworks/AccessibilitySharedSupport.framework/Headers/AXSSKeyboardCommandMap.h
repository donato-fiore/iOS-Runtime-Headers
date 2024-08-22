// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSKEYBOARDCOMMANDMAP_H
#define AXSSKEYBOARDCOMMANDMAP_H

@class NSSet, NSDictionary, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXSSKeyboardCommandMap : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSSet *availableCommands; // ivar: _availableCommands
@property (readonly, nonatomic) NSDictionary *commandsToArraysOfKeyChords; // ivar: _commandsToArraysOfKeyChords
@property (readonly, nonatomic) NSDictionary *keyChordsToCommands; // ivar: _keyChordsToCommands
@property (readonly, nonatomic) NSMutableDictionary *transientCommands; // ivar: _transientCommands
@property (readonly, nonatomic) NSDictionary *userDefinedCommandsToKeyChords; // ivar: _userDefinedCommandsToKeyChords


+(BOOL)supportsSecureCoding;
-(BOOL)_isAvailableCommand:(id)arg0 ;
-(BOOL)_validateCommandsToKeyChords:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCommandMap:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithCommandsToKeyChordsDictionary:(id)arg0 ;
-(id)addCommandsForTransientKeyChords:(id)arg0 ;
-(id)commandForKeyChord:(id)arg0 ;
-(id)commandMapWithKeyChord:(id)arg0 forCommand:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)keyChordForCommand:(id)arg0 ;
-(void)_initializeDictionariesIfNeeded;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeTransientKeyChordsForIdentifier:(id)arg0 ;


@end


#endif