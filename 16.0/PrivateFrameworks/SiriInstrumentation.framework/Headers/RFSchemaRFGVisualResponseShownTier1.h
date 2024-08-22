// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RFSCHEMARFGVISUALRESPONSESHOWNTIER1_H
#define RFSCHEMARFGVISUALRESPONSESHOWNTIER1_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface RFSchemaRFGVisualResponseShownTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPatternId; // ivar: _hasPatternId
@property (nonatomic) BOOL hasResponseModel; // ivar: _hasResponseModel
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *patternId; // ivar: _patternId
@property (copy, nonatomic) NSString *responseModel; // ivar: _responseModel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deletePatternId;
-(void)deleteResponseModel;
-(void)writeTo:(id)arg0 ;


@end


#endif