// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPRECORDZONEIDENTIFIER_H
#define CKDPRECORDZONEIDENTIFIER_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPIdentifier.h"

@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int databaseType; // ivar: _databaseType
@property (nonatomic) BOOL hasDatabaseType;
@property (readonly, nonatomic) BOOL hasOwnerIdentifier;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) CKDPIdentifier *ownerIdentifier; // ivar: _ownerIdentifier
@property (retain, nonatomic) CKDPIdentifier *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)databaseTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsDatabaseType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif