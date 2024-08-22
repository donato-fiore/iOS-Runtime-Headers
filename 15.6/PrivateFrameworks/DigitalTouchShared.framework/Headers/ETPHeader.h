// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETPHEADER_H
#define ETPHEADER_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface ETPHeader : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int baseColor; // ivar: _baseColor
@property (nonatomic) BOOL hasBaseColor;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasMessageData;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL hasSendDate;
@property (nonatomic) BOOL hasStartDelay;
@property (nonatomic) BOOL hasSupportsPlaybackTimeOffsets;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *messageData; // ivar: _messageData
@property (nonatomic) int messageType; // ivar: _messageType
@property (nonatomic) NSInteger sendDate; // ivar: _sendDate
@property (nonatomic) CGFloat startDelay; // ivar: _startDelay
@property (nonatomic) BOOL supportsPlaybackTimeOffsets; // ivar: _supportsPlaybackTimeOffsets


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)messageTypeAsString:(int)arg0 ;
-(int)StringAsMessageType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif