// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBADDCALLPARTICIPANTINTENT_H
#define _INPBADDCALLPARTICIPANTINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBAddCallParticipantIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBAddCallParticipantIntent : PBCodable <_INPBAddCallParticipantIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSUInteger participantsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)participantsAtIndex:(NSUInteger)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)clearParticipants;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif