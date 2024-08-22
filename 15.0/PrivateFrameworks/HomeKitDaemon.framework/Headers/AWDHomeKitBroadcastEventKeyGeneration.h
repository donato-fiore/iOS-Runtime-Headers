// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITBROADCASTEVENTKEYGENERATION_H
#define AWDHOMEKITBROADCASTEVENTKEYGENERATION_H

@class PBCodable;
@protocol NSCopying;


#import "AWDHomeKitVendorInformation.h"

@interface AWDHomeKitBroadcastEventKeyGeneration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int certified; // ivar: _certified
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (nonatomic) int reason; // ivar: _reason
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // ivar: _vendorDetails


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)certifiedAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reasonAsString:(int)arg0 ;
-(int)StringAsCertified:(id)arg0 ;
-(int)StringAsReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif