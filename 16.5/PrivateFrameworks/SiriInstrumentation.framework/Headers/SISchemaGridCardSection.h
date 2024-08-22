// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAGRIDCARDSECTION_H
#define SISCHEMAGRIDCARDSECTION_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaGridCardSection : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int cardSource; // ivar: _cardSource
@property (nonatomic) BOOL hasCardSource;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *resultIdentifiers; // ivar: _resultIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)resultIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addResultIdentifiers:(id)arg0 ;
-(void)clearResultIdentifiers;
-(void)deleteCardSource;
-(void)deleteResultIdentifiers;
-(void)writeTo:(id)arg0 ;


@end


#endif