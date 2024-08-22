// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMADICTATIONCONTENTEDITED_H
#define SISCHEMADICTATIONCONTENTEDITED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaDictationContentEdited : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *autoPunctuationEdits; // ivar: _autoPunctuationEdits
@property (nonatomic) BOOL exists; // ivar: _exists
@property (nonatomic) BOOL hasExists;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)autoPunctuationEditsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAutoPunctuationEdits:(id)arg0 ;
-(void)clearAutoPunctuationEdits;
-(void)deleteAutoPunctuationEdits;
-(void)deleteExists;
-(void)writeTo:(id)arg0 ;


@end


#endif