// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGSTATEDEVICECONNECTION_H
#define GEOLOGMSGSTATEDEVICECONNECTION_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_deviceCarrierName;
    NSString *_deviceCountryCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _cellularDataState;
    int _deviceNetworkConnectivity;
    ? _flags;
}


@property (nonatomic) int cellularDataState;
@property (retain, nonatomic) NSString *deviceCarrierName;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (nonatomic) int deviceNetworkConnectivity;
@property (nonatomic) BOOL hasCellularDataState;
@property (readonly, nonatomic) BOOL hasDeviceCarrierName;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (nonatomic) BOOL hasDeviceNetworkConnectivity;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cellularDataStateAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceNetworkConnectivityAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsCellularDataState:(id)arg0 ;
-(int)StringAsDeviceNetworkConnectivity:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif