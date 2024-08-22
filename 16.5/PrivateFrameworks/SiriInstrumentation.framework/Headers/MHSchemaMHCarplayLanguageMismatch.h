// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHCARPLAYLANGUAGEMISMATCH_H
#define MHSCHEMAMHCARPLAYLANGUAGEMISMATCH_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHCarplayLanguageMismatch : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *carHeadUnitSelectedLocale; // ivar: _carHeadUnitSelectedLocale
@property (nonatomic) int carplayTriggerMode; // ivar: _carplayTriggerMode
@property (nonatomic) BOOL hasCarHeadUnitSelectedLocale; // ivar: _hasCarHeadUnitSelectedLocale
@property (nonatomic) BOOL hasCarplayTriggerMode;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCarHeadUnitSelectedLocale;
-(void)deleteCarplayTriggerMode;
-(void)writeTo:(id)arg0 ;


@end


#endif