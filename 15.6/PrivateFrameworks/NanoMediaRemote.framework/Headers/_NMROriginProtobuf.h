// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NMRORIGINPROTOBUF_H
#define _NMRORIGINPROTOBUF_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface _NMROriginProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *deviceInfoData; // ivar: _deviceInfoData
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasDeviceInfoData;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) int uniqueIdentifier; // ivar: _uniqueIdentifier


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