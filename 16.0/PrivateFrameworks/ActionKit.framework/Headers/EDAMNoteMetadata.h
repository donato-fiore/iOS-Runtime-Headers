// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTEMETADATA_H
#define EDAMNOTEMETADATA_H

@class NSNumber, NSString, NSArray;


#import "FATObject.h"
#import "EDAMNoteAttributes.h"

@interface EDAMNoteMetadata : FATObject

@property (retain, nonatomic) EDAMNoteAttributes *attributes; // ivar: _attributes
@property (retain, nonatomic) NSNumber *contentLength; // ivar: _contentLength
@property (retain, nonatomic) NSNumber *created; // ivar: _created
@property (retain, nonatomic) NSNumber *deleted; // ivar: _deleted
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSString *largestResourceMime; // ivar: _largestResourceMime
@property (retain, nonatomic) NSNumber *largestResourceSize; // ivar: _largestResourceSize
@property (retain, nonatomic) NSString *notebookGuid; // ivar: _notebookGuid
@property (retain, nonatomic) NSArray *tagGuids; // ivar: _tagGuids
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum
@property (retain, nonatomic) NSNumber *updated; // ivar: _updated


+(id)structFields;
+(id)structName;


@end


#endif