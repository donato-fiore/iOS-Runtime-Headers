// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DODMLASRSCHEMADODMLASRRESULTINFO_H
#define DODMLASRSCHEMADODMLASRRESULTINFO_H

@class NSArray, NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRResultInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *choices; // ivar: _choices
@property (nonatomic) BOOL hasIsAligned;
@property (nonatomic) BOOL hasStageName; // ivar: _hasStageName
@property (nonatomic) BOOL isAligned; // ivar: _isAligned
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *stageName; // ivar: _stageName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)choicesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addChoices:(id)arg0 ;
-(void)clearChoices;
-(void)deleteChoices;
-(void)deleteIsAligned;
-(void)deleteStageName;
-(void)writeTo:(id)arg0 ;


@end


#endif