// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DODMLSCHEMADODMLCLIENTEVENTMETADATA_H
#define DODMLSCHEMADODMLCLIENTEVENTMETADATA_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DODMLSchemaDODMLClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *dodMlId; // ivar: _dodMlId
@property (copy, nonatomic) NSString *experimentName; // ivar: _experimentName
@property (nonatomic) BOOL hasDodMlId; // ivar: _hasDodMlId
@property (nonatomic) BOOL hasExperimentName; // ivar: _hasExperimentName
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDodMlId;
-(void)deleteExperimentName;
-(void)writeTo:(id)arg0 ;


@end


#endif