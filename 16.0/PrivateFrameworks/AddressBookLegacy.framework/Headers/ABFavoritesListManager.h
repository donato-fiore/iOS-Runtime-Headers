// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABFAVORITESLISTMANAGER_H
#define ABFAVORITESLISTMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ABFavoritesListManager : NSObject {
    *void _addressBook;
    NSMutableArray *_list;
    *__CFDictionary _uidToEntry;
    ? _flags;
}




+(id)sharedInstance;
+(id)sharedInstanceWithAddressBook:(*void)arg0 ;
-(BOOL)_isValueForEntry:(id)arg0 equalToValue:(id)arg1 ;
-(BOOL)addEntryForPerson:(*void)arg0 property:(int)arg1 withIdentifier:(int)arg2 ;
-(BOOL)containsEntryWithIdentifier:(int)arg0 forPerson:(*void)arg1 ;
-(BOOL)containsEntryWithType:(int)arg0 forPerson:(*void)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(BOOL)entryIsDuplicateAndThusRemoved:(id)arg0 oldUid:(int)arg1 ;
-(BOOL)isFull;
-(BOOL)shouldNotReportFavoritesError:(id)arg0 ;
-(id)entries;
-(id)entriesForPeople:(id)arg0 ;
-(id)entriesForPerson:(*void)arg0 ;
-(id)entryFromEntries:(id)arg0 type:(int)arg1 property:(int)arg2 identifier:(int)arg3 value:(id)arg4 label:(id)arg5 ;
-(id)entryFromEntries:(id)arg0 type:(int)arg1 property:(int)arg2 value:(id)arg3 label:(id)arg4 ;
-(id)entryWithIdentifier:(int)arg0 forPerson:(*void)arg1 ;
-(id)entryWithType:(int)arg0 forPerson:(*void)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)initWithAddressBook:(*void)arg0 ;
-(void)_addEntryToMap:(id)arg0 ;
-(void)_delayedLookup;
-(void)_entryIdentityChanged:(id)arg0 ;
-(void)_listChangedExternally;
-(void)_loadList;
-(void)_loadListWithAddressBook:(*void)arg0 ;
-(void)_postChangeNotification;
-(void)_removeEntryFromMap:(id)arg0 withUid:(int)arg1 ;
-(void)_scheduleSave;
-(void)addEntry:(id)arg0 ;
-(void)dealloc;
-(void)moveEntryAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)recacheIdentitiesSoon;
-(void)removeAllEntries;
-(void)removeEntryAtIndex:(NSInteger)arg0 ;
-(void)reportFavoritesIssue:(id)arg0 ;
-(void)save;
-(void)saveImmediately;


@end


#endif