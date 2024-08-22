// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRECORDREFERENCE_H
#define FCCKPRECORDREFERENCE_H

@class PBCodable;
@protocol NSCopying;


#import "FCCKPRecordIdentifier.h"

@interface FCCKPRecordReference : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier
@property (nonatomic) int type; // ivar: _type


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