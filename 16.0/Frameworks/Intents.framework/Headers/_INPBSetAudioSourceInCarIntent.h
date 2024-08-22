// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSETAUDIOSOURCEINCARINTENT_H
#define _INPBSETAUDIOSOURCEINCARINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetAudioSourceInCarIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBSetAudioSourceInCarIntent : PBCodable <_INPBSetAudioSourceInCarIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int audioSource; // ivar: _audioSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAudioSource;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasRelativeAudioSourceReference;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int relativeAudioSourceReference; // ivar: _relativeAudioSourceReference
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)audioSourceAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)relativeAudioSourceReferenceAsString:(int)arg0 ;
-(int)StringAsAudioSource:(id)arg0 ;
-(int)StringAsRelativeAudioSourceReference:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif