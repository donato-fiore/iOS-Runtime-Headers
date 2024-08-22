// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWSCHEMAFLOWENTITYCONTEXTTIER1_H
#define FLOWSCHEMAFLOWENTITYCONTEXTTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWEntityTier1.h"
#import "SISchemaUUID.h"

@interface FLOWSchemaFLOWEntityContextTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *entitiesPresenteds; // ivar: _entitiesPresenteds
@property (retain, nonatomic) FLOWSchemaFLOWEntityTier1 *entitySelected; // ivar: _entitySelected
@property (nonatomic) BOOL hasEntitySelected; // ivar: _hasEntitySelected
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)entitiesPresentedCount;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)entitiesPresentedAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addEntitiesPresented:(id)arg0 ;
-(void)clearEntitiesPresented;
-(void)writeTo:(id)arg0 ;


@end


#endif