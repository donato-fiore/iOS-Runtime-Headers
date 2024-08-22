// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMSYNCCHUNKFILTER_H
#define EDAMSYNCCHUNKFILTER_H

@class NSNumber, NSSet, NSString;


#import "FATObject.h"

@interface EDAMSyncChunkFilter : FATObject

@property (retain, nonatomic) NSNumber *inAccountUserId; // ivar: _inAccountUserId
@property (retain, nonatomic) NSNumber *includeExpunged; // ivar: _includeExpunged
@property (retain, nonatomic) NSNumber *includeLinkedAccounts; // ivar: _includeLinkedAccounts
@property (retain, nonatomic) NSNumber *includeLinkedNotebooks; // ivar: _includeLinkedNotebooks
@property (retain, nonatomic) NSNumber *includeNoteApplicationDataFullMap; // ivar: _includeNoteApplicationDataFullMap
@property (retain, nonatomic) NSNumber *includeNoteAttributes; // ivar: _includeNoteAttributes
@property (retain, nonatomic) NSNumber *includeNoteResourceApplicationDataFullMap; // ivar: _includeNoteResourceApplicationDataFullMap
@property (retain, nonatomic) NSNumber *includeNoteResources; // ivar: _includeNoteResources
@property (retain, nonatomic) NSNumber *includeNotebooks; // ivar: _includeNotebooks
@property (retain, nonatomic) NSNumber *includeNotes; // ivar: _includeNotes
@property (retain, nonatomic) NSNumber *includeNotesSharedWithMe; // ivar: _includeNotesSharedWithMe
@property (retain, nonatomic) NSNumber *includePreferences; // ivar: _includePreferences
@property (retain, nonatomic) NSNumber *includeResourceApplicationDataFullMap; // ivar: _includeResourceApplicationDataFullMap
@property (retain, nonatomic) NSNumber *includeResources; // ivar: _includeResources
@property (retain, nonatomic) NSNumber *includeSearches; // ivar: _includeSearches
@property (retain, nonatomic) NSNumber *includeSharedNotes; // ivar: _includeSharedNotes
@property (retain, nonatomic) NSNumber *includeTags; // ivar: _includeTags
@property (retain, nonatomic) NSSet *notebookGuids; // ivar: _notebookGuids
@property (retain, nonatomic) NSNumber *omitSharedNotebooks; // ivar: _omitSharedNotebooks
@property (retain, nonatomic) NSString *requireNoteContentClass; // ivar: _requireNoteContentClass


+(id)structFields;
+(id)structName;


@end


#endif