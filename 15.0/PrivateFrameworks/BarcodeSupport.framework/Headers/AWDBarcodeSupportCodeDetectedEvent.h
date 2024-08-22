// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDBARCODESUPPORTCODEDETECTEDEVENT_H
#define AWDBARCODESUPPORTCODEDETECTEDEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDBarcodeSupportCodeDetectedEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int appLinkPreferredOpenStrategy; // ivar: _appLinkPreferredOpenStrategy
@property (nonatomic) int barcodeDataType; // ivar: _barcodeDataType
@property (nonatomic) int barcodeSourceType; // ivar: _barcodeSourceType
@property (nonatomic) int barcodeURLType; // ivar: _barcodeURLType
@property (nonatomic) int clientType; // ivar: _clientType
@property (nonatomic) NSUInteger detectionTimeMs; // ivar: _detectionTimeMs
@property (nonatomic) BOOL hasAppLinkPreferredOpenStrategy;
@property (nonatomic) BOOL hasBarcodeDataType;
@property (nonatomic) BOOL hasBarcodeSourceType;
@property (nonatomic) BOOL hasBarcodeURLType;
@property (nonatomic) BOOL hasClientType;
@property (nonatomic) BOOL hasDetectionTimeMs;
@property (nonatomic) BOOL hasInvalidBarcodeDataType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int invalidBarcodeDataType; // ivar: _invalidBarcodeDataType
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appLinkPreferredOpenStrategyAsString:(int)arg0 ;
-(id)barcodeDataTypeAsString:(int)arg0 ;
-(id)barcodeSourceTypeAsString:(int)arg0 ;
-(id)barcodeURLTypeAsString:(int)arg0 ;
-(id)clientTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)invalidBarcodeDataTypeAsString:(int)arg0 ;
-(int)StringAsAppLinkPreferredOpenStrategy:(id)arg0 ;
-(int)StringAsBarcodeDataType:(id)arg0 ;
-(int)StringAsBarcodeSourceType:(id)arg0 ;
-(int)StringAsBarcodeURLType:(id)arg0 ;
-(int)StringAsClientType:(id)arg0 ;
-(int)StringAsInvalidBarcodeDataType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif