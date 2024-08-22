// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPQUERYFILTER_H
#define CKDPQUERYFILTER_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPLocationBound.h"
#import "CKDPRecordFieldIdentifier.h"
#import "CKDPRecordFieldValue.h"

@interface CKDPQueryFilter : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPLocationBound *bounds; // ivar: _bounds
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldName; // ivar: _fieldName
@property (retain, nonatomic) CKDPRecordFieldValue *fieldValue; // ivar: _fieldValue
@property (readonly, nonatomic) BOOL hasBounds;
@property (readonly, nonatomic) BOOL hasFieldName;
@property (readonly, nonatomic) BOOL hasFieldValue;
@property (nonatomic) BOOL hasType;
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