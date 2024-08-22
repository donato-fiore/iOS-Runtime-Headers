// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUEXTERNALSPAN_H
#define SIRINLUEXTERNALSPAN_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALUsoGraph.h"

@interface SIRINLUEXTERNALSpan : PBCodable <NSCopying>

 {
    ? _matcherNames;
    ? _has;
}


@property (nonatomic) unsigned int endTokenIndex; // ivar: _endTokenIndex
@property (nonatomic) BOOL hasEndTokenIndex;
@property (readonly, nonatomic) BOOL hasInput;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasStartTokenIndex;
@property (readonly, nonatomic) BOOL hasUsoGraph;
@property (retain, nonatomic) NSString *input; // ivar: _input
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) *int matcherNames;
@property (readonly, nonatomic) NSUInteger matcherNamesCount;
@property (nonatomic) CGFloat score; // ivar: _score
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