// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPRECORDRETRIEVECHANGESRESPONSERECORDCHANGE_H
#define CKDPRECORDRETRIEVECHANGESRESPONSERECORDCHANGE_H

@class PBCodable, NSString, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPRecord.h"
#import "CKDPRecordType.h"

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasRecord;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (readonly, nonatomic) BOOL hasRecordType;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecord *record; // ivar: _record
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier
@property (retain, nonatomic) CKDPRecordType *recordType; // ivar: _recordType
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif