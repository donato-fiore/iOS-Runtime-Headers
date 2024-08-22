// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBFILE_H
#define _INPBFILE_H

@class PBCodable, NSData, NSString;
@protocol _INPBFile, NSSecureCoding, NSCopying;


#import "_INPBURLValue.h"

@interface _INPBFile : PBCodable <_INPBFile, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSData *bookmarkData; // ivar: _bookmarkData
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBURLValue *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) BOOL hasBookmarkData;
@property (readonly, nonatomic) BOOL hasData;
@property (readonly, nonatomic) BOOL hasFileURL;
@property (readonly, nonatomic) BOOL hasFilename;
@property (nonatomic) BOOL hasRemovedOnCompletion;
@property (readonly, nonatomic) BOOL hasTypeIdentifier;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL removedOnCompletion; // ivar: _removedOnCompletion
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif