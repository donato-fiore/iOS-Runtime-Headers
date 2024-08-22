// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASRAPPLANGUAGEMODELLOADSTARTED_H
#define ASRSCHEMAASRAPPLANGUAGEMODELLOADSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRAppLanguageModelLoadStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasModelLocale;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int modelLocale; // ivar: _modelLocale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteModelLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif