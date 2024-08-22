// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDBARCODESUPPORTCODEACTIVATEDEVENT_H
#define AWDBARCODESUPPORTCODEACTIVATEDEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDBarcodeSupportCodeActivatedEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int appLinkActivationOpenStrategy; // ivar: _appLinkActivationOpenStrategy
@property (nonatomic) int barcodeDataType; // ivar: _barcodeDataType
@property (nonatomic) int barcodeSourceType; // ivar: _barcodeSourceType
@property (nonatomic) int barcodeURLType; // ivar: _barcodeURLType
@property (nonatomic) int clientType; // ivar: _clientType
@property (nonatomic) BOOL hasAppLinkActivationOpenStrategy;
@property (nonatomic) BOOL hasBarcodeDataType;
@property (nonatomic) BOOL hasBarcodeSourceType;
@property (nonatomic) BOOL hasBarcodeURLType;
@property (nonatomic) BOOL hasClientType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appLinkActivationOpenStrategyAsString:(int)arg0 ;
-(id)barcodeDataTypeAsString:(int)arg0 ;
-(id)barcodeSourceTypeAsString:(int)arg0 ;
-(id)barcodeURLTypeAsString:(int)arg0 ;
-(id)clientTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAppLinkActivationOpenStrategy:(id)arg0 ;
-(int)StringAsBarcodeDataType:(id)arg0 ;
-(int)StringAsBarcodeSourceType:(id)arg0 ;
-(int)StringAsBarcodeURLType:(id)arg0 ;
-(int)StringAsClientType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif