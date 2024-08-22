// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSPEAKERIDINFO_H
#define _INPBSPEAKERIDINFO_H

@class PBCodable, NSString;
@protocol _INPBSpeakerIDInfo, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBSpeakerIDInfo : PBCodable <_INPBSpeakerIDInfo, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSharedUserID;
@property (nonatomic) BOOL hasSpeakerIDConfidence;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBString *sharedUserID; // ivar: _sharedUserID
@property (nonatomic) int speakerIDConfidence; // ivar: _speakerIDConfidence
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)speakerIDConfidenceAsString:(int)arg0 ;
-(int)StringAsSpeakerIDConfidence:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif