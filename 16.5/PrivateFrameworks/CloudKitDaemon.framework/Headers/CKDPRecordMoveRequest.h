// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPRECORDMOVEREQUEST_H
#define CKDPRECORDMOVEREQUEST_H

@class PBRequest, NSString, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPRecord.h"

@interface CKDPRecordMoveRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *destinationEtag; // ivar: _destinationEtag
@property (retain, nonatomic) CKDPRecord *destinationRecord; // ivar: _destinationRecord
@property (retain, nonatomic) NSString *destinationRecordProtectionInfoTag; // ivar: _destinationRecordProtectionInfoTag
@property (retain, nonatomic) NSString *destinationZoneProtectionInfoTag; // ivar: _destinationZoneProtectionInfoTag
@property (readonly, nonatomic) BOOL hasDestinationEtag;
@property (readonly, nonatomic) BOOL hasDestinationRecord;
@property (readonly, nonatomic) BOOL hasDestinationRecordProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasDestinationZoneProtectionInfoTag;
@property (nonatomic) BOOL hasMerge;
@property (readonly, nonatomic) BOOL hasOriginEtag;
@property (readonly, nonatomic) BOOL hasOriginId;
@property (nonatomic) BOOL hasSemantics;
@property (nonatomic) BOOL merge; // ivar: _merge
@property (retain, nonatomic) NSString *originEtag; // ivar: _originEtag
@property (retain, nonatomic) CKDPRecordIdentifier *originId; // ivar: _originId
@property (nonatomic) int semantics; // ivar: _semantics


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)semanticsAsString:(int)arg0 ;
-(int)StringAsSemantics:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif