// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCPROTOANNOTATION_H
#define BCPROTOANNOTATION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "BCAnnotationRange.h"

@interface BCProtoAnnotation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *annotationVersion; // ivar: _annotationVersion
@property (retain, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (retain, nonatomic) NSString *attachments; // ivar: _attachments
@property (retain, nonatomic) NSString *chapterTitle; // ivar: _chapterTitle
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *creatorIdentifier; // ivar: _creatorIdentifier
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (retain, nonatomic) NSString *futureProofing11; // ivar: _futureProofing11
@property (retain, nonatomic) NSString *futureProofing12; // ivar: _futureProofing12
@property (readonly, nonatomic) BOOL hasAnnotationVersion;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (readonly, nonatomic) BOOL hasAttachments;
@property (readonly, nonatomic) BOOL hasChapterTitle;
@property (nonatomic) BOOL hasDeleted;
@property (readonly, nonatomic) BOOL hasFutureProofing11;
@property (readonly, nonatomic) BOOL hasFutureProofing12;
@property (nonatomic) BOOL hasIsUnderline;
@property (readonly, nonatomic) BOOL hasLocationCFIString;
@property (nonatomic) BOOL hasLocationModificationDate;
@property (readonly, nonatomic) BOOL hasNote;
@property (readonly, nonatomic) BOOL hasPhysicalPageNumber;
@property (nonatomic) BOOL hasPlAbsolutePhysicalLocation;
@property (nonatomic) BOOL hasPlLocationRangeEnd;
@property (nonatomic) BOOL hasPlLocationRangeStart;
@property (readonly, nonatomic) BOOL hasPlLocationStorageUUID;
@property (readonly, nonatomic) BOOL hasPlUserData;
@property (nonatomic) BOOL hasReadingProgress;
@property (nonatomic) BOOL hasReadingProgressHighWaterMark;
@property (readonly, nonatomic) BOOL hasRepresentativeText;
@property (readonly, nonatomic) BOOL hasSelectedText;
@property (readonly, nonatomic) BOOL hasSelectedTextRange;
@property (nonatomic) BOOL hasSpineIndexUpdated;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUserModificationDate;
@property (nonatomic) BOOL isUnderline; // ivar: _isUnderline
@property (retain, nonatomic) NSString *locationCFIString; // ivar: _locationCFIString
@property (nonatomic) CGFloat locationModificationDate; // ivar: _locationModificationDate
@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *note; // ivar: _note
@property (retain, nonatomic) NSString *physicalPageNumber; // ivar: _physicalPageNumber
@property (nonatomic) int plAbsolutePhysicalLocation; // ivar: _plAbsolutePhysicalLocation
@property (nonatomic) int plLocationRangeEnd; // ivar: _plLocationRangeEnd
@property (nonatomic) int plLocationRangeStart; // ivar: _plLocationRangeStart
@property (retain, nonatomic) NSString *plLocationStorageUUID; // ivar: _plLocationStorageUUID
@property (retain, nonatomic) NSData *plUserData; // ivar: _plUserData
@property (nonatomic) float readingProgress; // ivar: _readingProgress
@property (nonatomic) float readingProgressHighWaterMark; // ivar: _readingProgressHighWaterMark
@property (retain, nonatomic) NSString *representativeText; // ivar: _representativeText
@property (retain, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (retain, nonatomic) BCAnnotationRange *selectedTextRange; // ivar: _selectedTextRange
@property (nonatomic) BOOL spineIndexUpdated; // ivar: _spineIndexUpdated
@property (nonatomic) unsigned int style; // ivar: _style
@property (nonatomic) unsigned int type; // ivar: _type
@property (nonatomic) CGFloat userModificationDate; // ivar: _userModificationDate
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif