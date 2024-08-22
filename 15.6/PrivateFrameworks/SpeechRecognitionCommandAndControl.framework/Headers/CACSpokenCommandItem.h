// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACSPOKENCOMMANDITEM_H
#define CACSPOKENCOMMANDITEM_H

@class NSMutableDictionary, NSString, AXReplayableGesture, NSArray;


#import "CACSpokenCommandGroup.h"
#import "CACRecordedUserActionFlow.h"

@interface CACSpokenCommandItem : CACSpokenCommandGroup {
    NSMutableDictionary *_customDictionary;
}


@property (retain, nonatomic) id *commandInfo; // ivar: _commandInfo
@property (retain, nonatomic) NSString *customAppName;
@property (retain, nonatomic) AXReplayableGesture *customGesture;
@property (retain, nonatomic) NSArray *customPasteBoard;
@property (retain, nonatomic) NSString *customScope;
@property (retain, nonatomic) NSString *customShortcutsWorkflowIdentifier;
@property (retain, nonatomic) NSString *customTextToInsert;
@property (retain, nonatomic) NSString *customType;
@property (retain, nonatomic) CACRecordedUserActionFlow *customUserActionFlow;
@property (nonatomic) BOOL isCollapsed;
@property (nonatomic) BOOL isEdited; // ivar: _isEdited
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSArray *searchAlternates; // ivar: _searchAlternates
@property (retain, nonatomic) NSString *untranslatedDisplayString; // ivar: _untranslatedDisplayString
@property (retain, nonatomic) NSString *untranslatedLocale; // ivar: _untranslatedLocale


+(id)newCommandItemWithLocale:(id)arg0 scope:(id)arg1 ;
-(BOOL)conflictsWithItem:(id)arg0 ;
-(BOOL)evaluateCommandPredicate:(id)arg0 ;
-(BOOL)isGroup;
-(BOOL)isVisible;
-(id)_customCommandStringsWithLocale:(id)arg0 ;
-(id)cloneWithoutCommands;
-(id)commandsArray;
-(id)copy;
-(id)description;
-(id)dictionaryForSavingToPreferences;
-(id)displayString;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 properties:(id)arg1 locale:(id)arg2 ;
-(id)primaryBuiltinCommandForLocale:(id)arg0 ;
-(id)sortString;
-(id)untranslatedDisplayStringAndLocale:(*id)arg0 ;
-(id)valueForKey:(id)arg0 locale:(id)arg1 ;
-(void)_reloadFromProperties:(id)arg0 ;
-(void)_saveKey:(id)arg0 toDictionary:(id)arg1 ;
-(void)_setCustomCommandStrings:(id)arg0 withLocale:(id)arg1 ;
-(void)_updateBuiltInCommandsWithLocale:(id)arg0 ;
-(void)refreshDataFromPreferences;
-(void)removeFromPreferences;
-(void)saveToPreferences;
-(void)setDisplayString:(id)arg0 ;
-(void)setIsConfirmationRequired:(BOOL)arg0 ;
-(void)setIsEnabled:(BOOL)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 locale:(id)arg2 ;


@end


#endif