// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMSYNCCHUNK_H
#define EDAMSYNCCHUNK_H

@class NSNumber, NSArray;


#import "FATObject.h"
#import "EDAMPreferences.h"

@interface EDAMSyncChunk : FATObject

@property (retain, nonatomic) NSNumber *chunkHighUSN; // ivar: _chunkHighUSN
@property (retain, nonatomic) NSNumber *currentTime; // ivar: _currentTime
@property (retain, nonatomic) NSArray *expungedLinkedAccounts; // ivar: _expungedLinkedAccounts
@property (retain, nonatomic) NSArray *expungedLinkedNotebooks; // ivar: _expungedLinkedNotebooks
@property (retain, nonatomic) NSArray *expungedNotebooks; // ivar: _expungedNotebooks
@property (retain, nonatomic) NSArray *expungedNotes; // ivar: _expungedNotes
@property (retain, nonatomic) NSArray *expungedSearches; // ivar: _expungedSearches
@property (retain, nonatomic) NSArray *expungedTags; // ivar: _expungedTags
@property (retain, nonatomic) NSArray *linkedAccounts; // ivar: _linkedAccounts
@property (retain, nonatomic) NSArray *linkedNotebooks; // ivar: _linkedNotebooks
@property (retain, nonatomic) NSArray *notebooks; // ivar: _notebooks
@property (retain, nonatomic) NSArray *notes; // ivar: _notes
@property (retain, nonatomic) NSArray *notesNoLongerSharedWithMe; // ivar: _notesNoLongerSharedWithMe
@property (retain, nonatomic) EDAMPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSArray *resources; // ivar: _resources
@property (retain, nonatomic) NSArray *searches; // ivar: _searches
@property (retain, nonatomic) NSArray *tags; // ivar: _tags
@property (retain, nonatomic) NSNumber *updateCount; // ivar: _updateCount


+(id)structFields;
+(id)structName;


@end


#endif