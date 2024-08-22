// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSENDMESSAGEATTACHMENT_H
#define _INPBSENDMESSAGEATTACHMENT_H

@class PBCodable, NSString;
@protocol _INPBSendMessageAttachment, NSSecureCoding, NSCopying;


#import "_INPBFileDataAttachment.h"
#import "_INPBURLValue.h"

@interface _INPBSendMessageAttachment : PBCodable <_INPBSendMessageAttachment, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBFileDataAttachment *audioMessageFile; // ivar: _audioMessageFile
@property (retain, nonatomic) _INPBURLValue *audioMessageFileURL; // ivar: _audioMessageFileURL
@property (nonatomic) BOOL currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBFileDataAttachment *file; // ivar: _file
@property (retain, nonatomic) _INPBURLValue *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) BOOL hasAudioMessageFile;
@property (readonly, nonatomic) BOOL hasAudioMessageFileURL;
@property (readonly, nonatomic) BOOL hasCurrentLocation;
@property (readonly, nonatomic) BOOL hasFile;
@property (readonly, nonatomic) BOOL hasFileURL;
@property (readonly, nonatomic) BOOL hasPhAssetId;
@property (readonly, nonatomic) BOOL hasSharedLink;
@property (readonly, nonatomic) BOOL hasSpeechDataURL;
@property (readonly, nonatomic) BOOL hasTypeIdentifier;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *phAssetId; // ivar: _phAssetId
@property (retain, nonatomic) _INPBURLValue *sharedLink; // ivar: _sharedLink
@property (retain, nonatomic) _INPBURLValue *speechDataURL; // ivar: _speechDataURL
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (readonly, nonatomic) NSUInteger whichDatasource; // ivar: _whichDatasource


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