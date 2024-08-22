// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMNOTE_H
#define EDAMNOTE_H

@class NSNumber, NSString, NSData, NSArray;


#import "FATObject.h"
#import "EDAMNoteAttributes.h"
#import "EDAMNoteLimits.h"
#import "EDAMNoteRestrictions.h"

@interface EDAMNote : FATObject

@property (retain, nonatomic) NSNumber *active; // ivar: _active
@property (retain, nonatomic) EDAMNoteAttributes *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *content; // ivar: _content
@property (retain, nonatomic) NSData *contentHash; // ivar: _contentHash
@property (retain, nonatomic) NSNumber *contentLength; // ivar: _contentLength
@property (retain, nonatomic) NSNumber *created; // ivar: _created
@property (retain, nonatomic) NSNumber *deleted; // ivar: _deleted
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) EDAMNoteLimits *limits; // ivar: _limits
@property (retain, nonatomic) NSString *notebookGuid; // ivar: _notebookGuid
@property (retain, nonatomic) NSArray *resources; // ivar: _resources
@property (retain, nonatomic) EDAMNoteRestrictions *restrictions; // ivar: _restrictions
@property (retain, nonatomic) NSArray *sharedNotes; // ivar: _sharedNotes
@property (retain, nonatomic) NSArray *tagGuids; // ivar: _tagGuids
@property (retain, nonatomic) NSArray *tagNames; // ivar: _tagNames
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum
@property (retain, nonatomic) NSNumber *updated; // ivar: _updated


+(id)structFields;
+(id)structName;


@end


#endif