// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROTOBUFPAYMENTDEVICERESPONSE_H
#define PKPROTOBUFPAYMENTDEVICERESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int defaultPaymentInstrumentIndex; // ivar: _defaultPaymentInstrumentIndex
@property (nonatomic) BOOL deviceDisabled; // ivar: _deviceDisabled
@property (nonatomic) BOOL hasDefaultPaymentInstrumentIndex;
@property (nonatomic) BOOL hasDeviceDisabled;
@property (nonatomic) BOOL hasLocked;
@property (nonatomic) BOOL hasNearby;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) BOOL hasSupportsFaceID;
@property (nonatomic) BOOL hasUserDisabled;
@property (nonatomic) BOOL locked; // ivar: _locked
@property (nonatomic) int nearby; // ivar: _nearby
@property (retain, nonatomic) NSMutableArray *paymentInstruments; // ivar: _paymentInstruments
@property (nonatomic) unsigned int protocolVersion; // ivar: _protocolVersion
@property (retain, nonatomic) NSMutableArray *supportedSetupFeatures; // ivar: _supportedSetupFeatures
@property (nonatomic) BOOL supportsFaceID; // ivar: _supportsFaceID
@property (nonatomic) BOOL userDisabled; // ivar: _userDisabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)nearbyAsString:(int)arg0 ;
-(id)paymentInstrumentsAtIndex:(NSUInteger)arg0 ;
-(id)supportedSetupFeaturesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsNearby:(id)arg0 ;
-(void)addPaymentInstruments:(id)arg0 ;
-(void)addSupportedSetupFeatures:(id)arg0 ;
-(void)clearPaymentInstruments;
-(void)clearSupportedSetupFeatures;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif