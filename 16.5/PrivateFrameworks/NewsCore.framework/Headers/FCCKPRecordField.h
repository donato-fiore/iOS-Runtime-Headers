// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKPRECORDFIELD_H
#define FCCKPRECORDFIELD_H

@class PBCodable;
@protocol NSCopying;


#import "FCCKPRecordFieldIdentifier.h"
#import "FCCKPRecordFieldValue.h"

@interface FCCKPRecordField : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) FCCKPRecordFieldIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) FCCKPRecordFieldValue *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif