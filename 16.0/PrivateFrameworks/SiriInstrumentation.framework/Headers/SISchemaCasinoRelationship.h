// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMACASINORELATIONSHIP_H
#define SISCHEMACASINORELATIONSHIP_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaCasinoRelationship : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int casinoFromType; // ivar: _casinoFromType
@property (nonatomic) BOOL hasCasinoFromType;
@property (nonatomic) BOOL hasViewIDFrom; // ivar: _hasViewIDFrom
@property (nonatomic) BOOL hasViewIDTo; // ivar: _hasViewIDTo
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *viewIDFrom; // ivar: _viewIDFrom
@property (copy, nonatomic) NSString *viewIDTo; // ivar: _viewIDTo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCasinoFromType;
-(void)deleteViewIDFrom;
-(void)deleteViewIDTo;
-(void)writeTo:(id)arg0 ;


@end


#endif