// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBANNOUNCEMENT_H
#define _INPBANNOUNCEMENT_H

@class PBCodable, NSString;
@protocol _INPBAnnouncement, NSSecureCoding, NSCopying;


#import "_INPBURLValue.h"

@interface _INPBAnnouncement : PBCodable <_INPBAnnouncement, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger endTime; // ivar: _endTime
@property (nonatomic) BOOL hasEndTime;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasSpeechDataTranscription;
@property (readonly, nonatomic) BOOL hasSpeechDataURL;
@property (nonatomic) BOOL hasStartTime;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *speechDataTranscription; // ivar: _speechDataTranscription
@property (retain, nonatomic) _INPBURLValue *speechDataURL; // ivar: _speechDataURL
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (readonly) Class superclass;


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