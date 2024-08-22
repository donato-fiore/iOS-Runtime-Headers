// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALUSONODE_H
#define SIRINLUEXTERNALUSONODE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "SIRICOMMONInt64Value.h"
#import "SIRICOMMONStringValue.h"
#import "SIRICOMMONUInt32Value.h"

@interface SIRINLUEXTERNALUsoNode : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *entityLabel; // ivar: _entityLabel
@property (readonly, nonatomic) BOOL hasEntityLabel;
@property (readonly, nonatomic) BOOL hasIntegerPayload;
@property (readonly, nonatomic) BOOL hasStringPayload;
@property (nonatomic) BOOL hasUsoElementId;
@property (readonly, nonatomic) BOOL hasUsoVerbElementId;
@property (readonly, nonatomic) BOOL hasVerbLabel;
@property (retain, nonatomic) SIRICOMMONInt64Value *integerPayload; // ivar: _integerPayload
@property (retain, nonatomic) NSMutableArray *normalizedStringPayloads; // ivar: _normalizedStringPayloads
@property (retain, nonatomic) SIRICOMMONStringValue *stringPayload; // ivar: _stringPayload
@property (nonatomic) unsigned int usoElementId; // ivar: _usoElementId
@property (retain, nonatomic) SIRICOMMONUInt32Value *usoVerbElementId; // ivar: _usoVerbElementId
@property (retain, nonatomic) NSString *verbLabel; // ivar: _verbLabel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)normalizedStringPayloadsAtIndex:(NSUInteger)arg0 ;
-(void)addNormalizedStringPayloads:(id)arg0 ;
-(void)clearNormalizedStringPayloads;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif