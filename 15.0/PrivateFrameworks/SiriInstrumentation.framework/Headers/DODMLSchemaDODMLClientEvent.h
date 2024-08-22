// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DODMLSCHEMADODMLCLIENTEVENT_H
#define DODMLSCHEMADODMLCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "DODMLASRSchemaDODMLASRAudioFileResultTier1.h"
#import "DODMLSchemaDODMLClientEventMetadata.h"
#import "DODMLASRSchemaDODMLASRPersonalizationExperimentContext.h"
#import "DODMLASRSchemaDODMLASRUserEditExperimentContext.h"
#import "DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1.h"

@interface DODMLSchemaDODMLClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) DODMLASRSchemaDODMLASRAudioFileResultTier1 *audioFileResultTier1; // ivar: _audioFileResultTier1
@property (retain, nonatomic) DODMLSchemaDODMLClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasAudioFileResultTier1; // ivar: _hasAudioFileResultTier1
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasPersonalizationExperimentContext; // ivar: _hasPersonalizationExperimentContext
@property (nonatomic) BOOL hasUserEditExperimentContext; // ivar: _hasUserEditExperimentContext
@property (nonatomic) BOOL hasUserEditExperimentEndedTier1; // ivar: _hasUserEditExperimentEndedTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizationExperimentContext *personalizationExperimentContext; // ivar: _personalizationExperimentContext
@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentContext *userEditExperimentContext; // ivar: _userEditExperimentContext
@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 *userEditExperimentEndedTier1; // ivar: _userEditExperimentEndedTier1
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(int)getAnyEventType;
-(void)writeTo:(id)arg0 ;


@end


#endif