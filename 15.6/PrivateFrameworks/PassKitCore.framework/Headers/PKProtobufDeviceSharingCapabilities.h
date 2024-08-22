// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFDEVICESHARINGCAPABILITIES_H
#define PKPROTOBUFDEVICESHARINGCAPABILITIES_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface PKProtobufDeviceSharingCapabilities : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSString *deviceRegion; // ivar: _deviceRegion
@property (retain, nonatomic) NSData *fromDeviceVersion; // ivar: _fromDeviceVersion
@property (retain, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL hasAltDSID;
@property (readonly, nonatomic) BOOL hasDeviceRegion;
@property (readonly, nonatomic) BOOL hasFromDeviceVersion;
@property (readonly, nonatomic) BOOL hasHandle;
@property (nonatomic) BOOL hasSupportsManatee;
@property (nonatomic) BOOL supportsManatee; // ivar: _supportsManatee
@property (nonatomic) unsigned int version; // ivar: _version


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