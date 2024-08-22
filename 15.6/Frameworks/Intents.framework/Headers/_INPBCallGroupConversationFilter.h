// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBCALLGROUPCONVERSATIONFILTER_H
#define _INPBCALLGROUPCONVERSATIONFILTER_H

@class PBCodable, NSString, NSArray;
@protocol _INPBCallGroupConversationFilter, NSSecureCoding, NSCopying;


#import "_INPBCallGroup.h"
#import "_INPBContact.h"

@interface _INPBCallGroupConversationFilter : PBCodable <_INPBCallGroupConversationFilter, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCallGroup *callGroup; // ivar: _callGroup
@property (retain, nonatomic) _INPBContact *caller; // ivar: _caller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCallGroup;
@property (readonly, nonatomic) BOOL hasCaller;
@property (nonatomic) BOOL hasMatchCallerAndParticipantsExactly;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL matchCallerAndParticipantsExactly; // ivar: _matchCallerAndParticipantsExactly
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