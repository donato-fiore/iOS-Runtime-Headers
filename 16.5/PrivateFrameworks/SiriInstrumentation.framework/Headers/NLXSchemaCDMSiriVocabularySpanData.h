// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMSIRIVOCABULARYSPANDATA_H
#define NLXSCHEMACDMSIRIVOCABULARYSPANDATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMSiriVocabularySpanData : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMatchScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat matchScore; // ivar: _matchScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMatchScore;
-(void)writeTo:(id)arg0 ;


@end


#endif