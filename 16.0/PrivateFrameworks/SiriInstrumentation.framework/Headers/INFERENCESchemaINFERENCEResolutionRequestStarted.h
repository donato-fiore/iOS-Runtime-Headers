// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCERESOLUTIONREQUESTSTARTED_H
#define INFERENCESCHEMAINFERENCERESOLUTIONREQUESTSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEResolverConfig.h"

@interface INFERENCESchemaINFERENCEResolutionRequestStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasResolverConfig; // ivar: _hasResolverConfig
@property (nonatomic) BOOL hasSlotType;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) INFERENCESchemaINFERENCEResolverConfig *resolverConfig; // ivar: _resolverConfig
@property (nonatomic) int slotType; // ivar: _slotType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteResolverConfig;
-(void)deleteSlotType;
-(void)writeTo:(id)arg0 ;


@end


#endif