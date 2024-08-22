// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROTOBUFPAYMENTDEVICEREQUEST_H
#define PKPROTOBUFPAYMENTDEVICEREQUEST_H

@class PBRequest, NSString, NSMutableArray;
@protocol NSCopying;



@interface PKProtobufPaymentDeviceRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) BOOL hasShouldAdvertise;
@property (retain, nonatomic) NSMutableArray *knownManifestHashes; // ivar: _knownManifestHashes
@property (nonatomic) unsigned int protocolVersion; // ivar: _protocolVersion
@property (nonatomic) BOOL shouldAdvertise; // ivar: _shouldAdvertise


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)knownManifestHashesAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addKnownManifestHashes:(id)arg0 ;
-(void)clearKnownManifestHashes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif