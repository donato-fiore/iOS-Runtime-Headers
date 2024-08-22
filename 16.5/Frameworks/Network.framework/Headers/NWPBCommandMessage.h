// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWPBCOMMANDMESSAGE_H
#define NWPBCOMMANDMESSAGE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NWPBCommandMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int command; // ivar: _command
@property (nonatomic) BOOL hasCommand;
@property (readonly, nonatomic) BOOL hasMessageData;
@property (retain, nonatomic) NSData *messageData; // ivar: _messageData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)commandAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCommand:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif