// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPZONESAVEREQUEST_H
#define CKDPZONESAVEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "CKDPZone.h"

@interface CKDPZoneSaveRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasRecordZone;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property (retain, nonatomic) CKDPZone *recordZone; // ivar: _recordZone
@property (retain, nonatomic) NSString *zoneProtectionInfoTag; // ivar: _zoneProtectionInfoTag


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif