// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCSCHEMASCCHECKCORRECTIONRESULT_H
#define SCSCHEMASCCHECKCORRECTIONRESULT_H

@class NSString, NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SCSchemaSCCheckCorrectionResult : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *correctedAttribute; // ivar: _correctedAttribute
@property (nonatomic) int correctionType; // ivar: _correctionType
@property (nonatomic) BOOL hasCorrectedAttribute; // ivar: _hasCorrectedAttribute
@property (nonatomic) BOOL hasCorrectionType;
@property (copy, nonatomic) NSArray *incomingEntities; // ivar: _incomingEntities
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *referredEntities; // ivar: _referredEntities


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)incomingEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)referredEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addIncomingEntities:(id)arg0 ;
-(void)addReferredEntities:(id)arg0 ;
-(void)clearIncomingEntities;
-(void)clearReferredEntities;
-(void)deleteCorrectedAttribute;
-(void)deleteCorrectionType;
-(void)deleteIncomingEntities;
-(void)deleteReferredEntities;
-(void)writeTo:(id)arg0 ;


@end


#endif