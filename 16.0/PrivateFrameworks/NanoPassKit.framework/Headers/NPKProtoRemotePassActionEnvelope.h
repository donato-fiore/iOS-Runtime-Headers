// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOREMOTEPASSACTIONENVELOPE_H
#define NPKPROTOREMOTEPASSACTIONENVELOPE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoRemotePassActionEnvelope : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *caption; // ivar: _caption
@property (nonatomic) int cardType; // ivar: _cardType
@property (readonly, nonatomic) BOOL hasCaption;
@property (nonatomic) BOOL hasCardType;
@property (readonly, nonatomic) BOOL hasPassLocalizedDescription;
@property (readonly, nonatomic) BOOL hasPassOrganizationName;
@property (readonly, nonatomic) BOOL hasSummaryText;
@property (nonatomic) BOOL isResponse; // ivar: _isResponse
@property (retain, nonatomic) NSData *messageProtoData; // ivar: _messageProtoData
@property (nonatomic) int messageType; // ivar: _messageType
@property (retain, nonatomic) NSString *passLocalizedDescription; // ivar: _passLocalizedDescription
@property (retain, nonatomic) NSString *passOrganizationName; // ivar: _passOrganizationName
@property (retain, nonatomic) NSString *summaryText; // ivar: _summaryText
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cardTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)messageTypeAsString:(int)arg0 ;
-(int)StringAsCardType:(id)arg0 ;
-(int)StringAsMessageType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif