// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHANNELACTIVITYUPDATEPAYLOAD_H
#define CHANNELACTIVITYUPDATEPAYLOAD_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "ChannelActivityParticipantPayload.h"

@interface ChannelActivityUpdatePayload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPadding;
@property (readonly, nonatomic) BOOL hasParticipantPayload;
@property (nonatomic) BOOL hasUpdateType;
@property (retain, nonatomic) NSData *padding; // ivar: _padding
@property (retain, nonatomic) ChannelActivityParticipantPayload *participantPayload; // ivar: _participantPayload
@property (nonatomic) int updateType; // ivar: _updateType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)updateTypeAsString:(int)arg0 ;
-(int)StringAsUpdateType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif