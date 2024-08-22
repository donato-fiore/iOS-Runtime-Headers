// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPSHAREIDENTIFIER_H
#define CKDPSHAREIDENTIFIER_H

@class PBCodable, CKDPIdentifier, CKDPRecordZoneIdentifier;
@protocol NSCopying;



@interface CKDPShareIdentifier : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPIdentifier *value; // ivar: _value
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)_CKLogToFileHandle:(id)arg0 atDepth:(int)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif