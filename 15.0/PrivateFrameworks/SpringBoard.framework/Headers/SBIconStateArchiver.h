// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONSTATEARCHIVER_H
#define SBICONSTATEARCHIVER_H

@class SBHIconStateArchiver;



@interface SBIconStateArchiver : SBHIconStateArchiver



+(id)_iTunesDictionaryForLeafIcon:(id)arg0 withIdentifier:(id)arg1 ;
+(id)_iTunesDictionaryForLeafIdentifier:(id)arg0 ;
+(id)_iTunesIconCellForCell:(id)arg0 preApex:(BOOL)arg1 pending:(BOOL)arg2 iconSource:(id)arg3 ;
+(id)_iTunesIconListForList:(id)arg0 preApex:(BOOL)arg1 pending:(BOOL)arg2 iconSource:(id)arg3 ;
+(id)_iTunesIconListsForLists:(id)arg0 preApex:(BOOL)arg1 pending:(BOOL)arg2 iconSource:(id)arg3 ;
+(id)_migrateLeafIdentifierIfNecessary:(id)arg0 ;
+(id)_modernIconCellForCell:(id)arg0 allowFolders:(BOOL)arg1 ;
+(id)_modernIconListForList:(id)arg0 allowFolders:(BOOL)arg1 ;
+(id)_modernIconListsForLists:(id)arg0 allowFolders:(BOOL)arg1 ;
+(id)iTunesRepresentationFromRootArchive:(id)arg0 preApex:(BOOL)arg1 pending:(BOOL)arg2 iconSource:(id)arg3 ;
+(id)modernizeRootArchive:(id)arg0 ;
+(id)rootArchiveFromITunesRepresentation:(id)arg0 ;


@end


#endif