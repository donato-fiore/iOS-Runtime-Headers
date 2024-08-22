// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACSPOKENCOMMANDPRESENTATION_H
#define CACSPOKENCOMMANDPRESENTATION_H

@class NSArray, NSMutableArray, NSSet, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CACSpokenCommandPresentation : NSObject {
    NSArray *_commandItems;
    NSArray *_commandsOnly;
    NSMutableArray *_newCommandItems;
    NSMutableArray *_deletedCommandIdentifiers;
    NSArray *_commandGroups;
    NSArray *_allCommandGroups;
    NSSet *_excludedSearchWordSet;
    NSDictionary *_conflictDictionary;
}


@property (retain, nonatomic) NSDictionary *additionalCommandInfo; // ivar: _additionalCommandInfo
@property (retain, nonatomic) NSArray *externalCommandGroups; // ivar: _externalCommandGroups
@property (readonly, nonatomic) NSArray *flattenedCommandGroupsAndItems;
@property (readonly) BOOL isSearching;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSArray *nestedCommandGroupsAndItems;
@property (retain, nonatomic) NSArray *relevantCommandIdentifiers; // ivar: _relevantCommandIdentifiers
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (nonatomic) BOOL usedByPreferences; // ivar: _usedByPreferences


-(BOOL)groupIsCollapsed:(id)arg0 ;
-(BOOL)hasConflicts;
-(NSUInteger)indexOfItemWithIdentifier:(id)arg0 ;
-(NSUInteger)indexOfItemWithIdentifier:(id)arg0 ignoreGroups:(BOOL)arg1 ;
-(id)_filteredCommandGroupsAndItemsWithSearchString:(id)arg0 ;
-(id)init;
-(id)itemsConflictingWithItem:(id)arg0 ;
-(void)_deepFlush;
-(void)_flushCommands;
-(void)addCustomCommandItem:(id)arg0 ;
-(void)deleteCustomCommandAtIndex:(NSUInteger)arg0 ;
-(void)discardChanges;
-(void)refreshItemWithIdentifier:(id)arg0 ;
-(void)resetConflicts;
-(void)saveChanges;
-(void)setGroup:(id)arg0 isCollapsed:(BOOL)arg1 ;
-(void)sortCustomCommands;


@end


#endif