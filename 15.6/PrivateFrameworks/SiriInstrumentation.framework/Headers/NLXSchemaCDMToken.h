// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMTOKEN_H
#define NLXSCHEMACDMTOKEN_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMToken : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int begin; // ivar: _begin
@property (copy, nonatomic) NSString *cleanValue; // ivar: _cleanValue
@property (nonatomic) unsigned int end; // ivar: _end
@property (nonatomic) BOOL hasBegin;
@property (nonatomic) BOOL hasCleanValue; // ivar: _hasCleanValue
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasIsSignificant;
@property (nonatomic) BOOL hasIsWhitespace;
@property (nonatomic) BOOL hasNonWhitespaceTokenIndex;
@property (nonatomic) BOOL hasTokenIndex;
@property (nonatomic) BOOL hasValue; // ivar: _hasValue
@property (nonatomic) BOOL isSignificant; // ivar: _isSignificant
@property (nonatomic) BOOL isWhitespace; // ivar: _isWhitespace
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int nonWhitespaceTokenIndex; // ivar: _nonWhitespaceTokenIndex
@property (copy, nonatomic) NSArray *normalizedValues; // ivar: _normalizedValues
@property (nonatomic) unsigned int tokenIndex; // ivar: _tokenIndex
@property (copy, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)normalizedValuesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addNormalizedValues:(id)arg0 ;
-(void)clearNormalizedValues;
-(void)deleteBegin;
-(void)deleteCleanValue;
-(void)deleteEnd;
-(void)deleteIsSignificant;
-(void)deleteIsWhitespace;
-(void)deleteNonWhitespaceTokenIndex;
-(void)deleteNormalizedValues;
-(void)deleteTokenIndex;
-(void)deleteValue;
-(void)writeTo:(id)arg0 ;


@end


#endif