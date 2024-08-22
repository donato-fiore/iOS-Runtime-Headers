// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSCHEMACAMMODELID_H
#define CAMSCHEMACAMMODELID_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaVersion.h"

@interface CAMSchemaCAMModelId : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasModelName; // ivar: _hasModelName
@property (nonatomic) BOOL hasModelVersion; // ivar: _hasModelVersion
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (retain, nonatomic) SISchemaVersion *modelVersion; // ivar: _modelVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteModelName;
-(void)deleteModelVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif