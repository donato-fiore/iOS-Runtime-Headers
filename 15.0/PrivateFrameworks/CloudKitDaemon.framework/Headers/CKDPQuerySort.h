// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPQUERYSORT_H
#define CKDPQUERYSORT_H

@class PBCodable, CKDPLocationCoordinate;
@protocol NSCopying;


#import "CKDPRecordFieldIdentifier.h"

@interface CKDPQuerySort : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPLocationCoordinate *coordinate; // ivar: _coordinate
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldName; // ivar: _fieldName
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (readonly, nonatomic) BOOL hasFieldName;
@property (nonatomic) BOOL hasOrder;
@property (nonatomic) int order; // ivar: _order


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)orderAsString:(int)arg0 ;
-(int)StringAsOrder:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif