// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCALLGROUPCONVERSATION_H
#define _INPBCALLGROUPCONVERSATION_H

@class PBCodable, NSString, NSArray;
@protocol _INPBCallGroupConversation, NSSecureCoding, NSCopying;


#import "_INPBCallGroup.h"
#import "_INPBContactValue.h"

@interface _INPBCallGroupConversation : PBCodable <_INPBCallGroupConversation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCallGroup *callGroup; // ivar: _callGroup
@property (retain, nonatomic) _INPBContactValue *caller; // ivar: _caller
@property (copy, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCallGroup;
@property (readonly, nonatomic) BOOL hasCaller;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *otherParticipants; // ivar: _otherParticipants
@property (readonly, nonatomic) NSUInteger otherParticipantsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)otherParticipantsAtIndex:(NSUInteger)arg0 ;
-(void)addOtherParticipants:(id)arg0 ;
-(void)clearOtherParticipants;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif