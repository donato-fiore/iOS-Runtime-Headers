// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTESMETADATARESULTSPEC_H
#define EDAMNOTESMETADATARESULTSPEC_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMNotesMetadataResultSpec : FATObject

@property (retain, nonatomic) NSNumber *includeAttributes; // ivar: _includeAttributes
@property (retain, nonatomic) NSNumber *includeContentLength; // ivar: _includeContentLength
@property (retain, nonatomic) NSNumber *includeCreated; // ivar: _includeCreated
@property (retain, nonatomic) NSNumber *includeDeleted; // ivar: _includeDeleted
@property (retain, nonatomic) NSNumber *includeLargestResourceMime; // ivar: _includeLargestResourceMime
@property (retain, nonatomic) NSNumber *includeLargestResourceSize; // ivar: _includeLargestResourceSize
@property (retain, nonatomic) NSNumber *includeNotebookGuid; // ivar: _includeNotebookGuid
@property (retain, nonatomic) NSNumber *includeTagGuids; // ivar: _includeTagGuids
@property (retain, nonatomic) NSNumber *includeTitle; // ivar: _includeTitle
@property (retain, nonatomic) NSNumber *includeUpdateSequenceNum; // ivar: _includeUpdateSequenceNum
@property (retain, nonatomic) NSNumber *includeUpdated; // ivar: _includeUpdated


+(id)structFields;
+(id)structName;


@end


#endif