// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALMATCHINGSPAN_H
#define SIRINLUINTERNALMATCHINGSPAN_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRINLUINTERNALInternalSpanData.h"
#import "SIRINLUEXTERNALUsoGraph.h"

@interface SIRINLUINTERNALMatchingSpan : PBCodable <NSCopying>

 {
    ? _matcherNames;
    ? _has;
}


@property (nonatomic) unsigned int endTokenIndex; // ivar: _endTokenIndex
@property (nonatomic) BOOL hasEndTokenIndex;
@property (readonly, nonatomic) BOOL hasInput;
@property (readonly, nonatomic) BOOL hasInternalSpanData;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasSemanticValue;
@property (nonatomic) BOOL hasStartTokenIndex;
@property (readonly, nonatomic) BOOL hasUsoGraph;
@property (retain, nonatomic) NSString *input; // ivar: _input
@property (retain, nonatomic) SIRINLUINTERNALInternalSpanData *internalSpanData; // ivar: _internalSpanData
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) *int matcherNames;
@property (readonly, nonatomic) NSUInteger matcherNamesCount;
@property (retain, nonatomic) NSString *semanticValue; // ivar: _semanticValue
@property (nonatomic) unsigned int startTokenIndex; // ivar: _startTokenIndex
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *usoGraph; // ivar: _usoGraph


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)matcherNamesAsString:(int)arg0 ;
-(int)StringAsMatcherNames:(id)arg0 ;
-(int)matcherNamesAtIndex:(NSUInteger)arg0 ;
-(void)addMatcherNames:(int)arg0 ;
-(void)clearMatcherNames;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif