// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITACCESSORYNETWORKPROTECTIONREPORT_H
#define AWDHOMEKITACCESSORYNETWORKPROTECTIONREPORT_H

@class PBCodable;
@protocol NSCopying;


#import "AWDHomeKitVendorInformation.h"

@interface AWDHomeKitAccessoryNetworkProtectionReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hadViolationsInLast24h; // ivar: _hadViolationsInLast24h
@property (nonatomic) BOOL hasHadViolationsInLast24h;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (nonatomic) int status; // ivar: _status
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // ivar: _vendorDetails


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif