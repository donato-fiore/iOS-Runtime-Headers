// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUEXTERNALUSOEDGELABEL_H
#define SIRINLUEXTERNALUSOEDGELABEL_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUEXTERNALUsoLabel.h"

@interface SIRINLUEXTERNALUsoEdgeLabel : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SIRINLUEXTERNALUsoLabel *baseEdgeLabel; // ivar: _baseEdgeLabel
@property (nonatomic) unsigned int enumeration; // ivar: _enumeration
@property (readonly, nonatomic) BOOL hasBaseEdgeLabel;
@property (nonatomic) BOOL hasEnumeration;
@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) unsigned int usoElementId; // ivar: _usoElementId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif