// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALTOKEN_H
#define SIRINLUINTERNALTOKEN_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALToken : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int begin; // ivar: _begin
@property (retain, nonatomic) NSString *cleanValue; // ivar: _cleanValue
@property (retain, nonatomic) NSMutableArray *cleanValues; // ivar: _cleanValues
@property (nonatomic) int end; // ivar: _end
@property (nonatomic) BOOL hasBegin;
@property (readonly, nonatomic) BOOL hasCleanValue;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasIsSignificant;
@property (nonatomic) BOOL hasIsWhitespace;
@property (nonatomic) BOOL hasNonWhitespaceTokenIndex;
@property (nonatomic) BOOL hasTokenIndex;
@property (readonly, nonatomic) BOOL hasValue;
@property (nonatomic) BOOL isSignificant; // ivar: _isSignificant
@property (nonatomic) BOOL isWhitespace; // ivar: _isWhitespace
@property (nonatomic) int nonWhitespaceTokenIndex; // ivar: _nonWhitespaceTokenIndex
@property (retain, nonatomic) NSMutableArray *normalizedValues; // ivar: _normalizedValues
@property (nonatomic) int tokenIndex; // ivar: _tokenIndex
@property (retain, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cleanValuesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)normalizedValuesAtIndex:(NSUInteger)arg0 ;
-(void)addCleanValues:(id)arg0 ;
-(void)addNormalizedValues:(id)arg0 ;
-(void)clearCleanValues;
-(void)clearNormalizedValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif