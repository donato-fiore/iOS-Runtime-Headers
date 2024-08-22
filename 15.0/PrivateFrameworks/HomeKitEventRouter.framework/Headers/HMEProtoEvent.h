// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMEPROTOEVENT_H
#define HMEPROTOEVENT_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "HMEProtoEventMetadata.h"

@interface HMEProtoEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *eventData; // ivar: _eventData
@property (retain, nonatomic) HMEProtoEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (readonly, nonatomic) BOOL hasEventData;
@property (readonly, nonatomic) BOOL hasEventMetadata;


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