// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALPARSEOVERRIDE_H
#define SIRINLUINTERNALPARSEOVERRIDE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALUserParse.h"

@interface SIRINLUINTERNALParseOverride : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger creationTimestampMsSinceUnixEpoch; // ivar: _creationTimestampMsSinceUnixEpoch
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) BOOL hasIdA;
@property (readonly, nonatomic) BOOL hasParse;
@property (nonatomic) BOOL hasParserIdentifier;
@property (retain, nonatomic) NSString *idA; // ivar: _idA
@property (retain, nonatomic) NSMutableArray *nluRequestRules; // ivar: _nluRequestRules
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *parse; // ivar: _parse
@property (nonatomic) int parserIdentifier; // ivar: _parserIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)nluRequestRulesAtIndex:(NSUInteger)arg0 ;
-(id)parserIdentifierAsString:(int)arg0 ;
-(int)StringAsParserIdentifier:(id)arg0 ;
-(void)addNluRequestRules:(id)arg0 ;
-(void)clearNluRequestRules;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif