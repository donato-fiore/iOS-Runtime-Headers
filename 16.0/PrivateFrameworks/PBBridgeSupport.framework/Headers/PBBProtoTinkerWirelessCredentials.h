// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBBPROTOTINKERWIRELESSCREDENTIALS_H
#define PBBPROTOTINKERWIRELESSCREDENTIALS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface PBBProtoTinkerWirelessCredentials : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *serializedNetworkRecords; // ivar: _serializedNetworkRecords


+(Class)serializedNetworkRecordType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)serializedNetworkRecordAtIndex:(NSUInteger)arg0 ;
-(void)addSerializedNetworkRecord:(id)arg0 ;
-(void)clearSerializedNetworkRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif