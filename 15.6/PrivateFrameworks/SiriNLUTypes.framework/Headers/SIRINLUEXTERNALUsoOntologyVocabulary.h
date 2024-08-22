// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUEXTERNALUSOONTOLOGYVOCABULARY_H
#define SIRINLUEXTERNALUSOONTOLOGYVOCABULARY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALSemVer.h"

@interface SIRINLUEXTERNALUsoOntologyVocabulary : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *elementNames; // ivar: _elementNames
@property (readonly, nonatomic) BOOL hasUsoVersion;
@property (retain, nonatomic) SIRINLUEXTERNALSemVer *usoVersion; // ivar: _usoVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)elementNamesAtIndex:(NSUInteger)arg0 ;
-(void)addElementNames:(id)arg0 ;
-(void)clearElementNames;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif