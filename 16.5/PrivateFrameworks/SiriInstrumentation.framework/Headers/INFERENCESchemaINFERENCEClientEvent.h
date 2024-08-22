// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECLIENTEVENT_H
#define INFERENCESCHEMAINFERENCECLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "INFERENCESchemaINFERENCEABModelEvaluated.h"
#import "INFERENCESchemaINFERENCEABModelResultTriggered.h"
#import "INFERENCESchemaINFERENCECommsAppSelectionGroundTruthGenerated.h"
#import "INFERENCESchemaINFERENCEContactCandidatesInfoGenerated.h"
#import "INFERENCESchemaINFERENCECRRTrainingSampleCollected.h"
#import "INFERENCESchemaINFERENCEClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEMusicAppSelectionGroundTruthGenerated.h"
#import "INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated.h"
#import "INFERENCESchemaINFERENCEResolutionQueryInfoGenerated.h"
#import "INFERENCESchemaINFERENCEResolutionRequestContext.h"
#import "INFERENCESchemaINFERENCESimpleTaskInfoGenerated.h"
#import "INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated.h"
#import "INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated.h"
#import "INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationSignalsGenerated.h"
#import "INFERENCESchemaINFERENCEWorkoutsAppSelectionGroundTruthGenerated.h"

@interface INFERENCESchemaINFERENCEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) INFERENCESchemaINFERENCEABModelEvaluated *abModelEvaluated; // ivar: _abModelEvaluated
@property (retain, nonatomic) INFERENCESchemaINFERENCEABModelResultTriggered *abModelResultTriggered; // ivar: _abModelResultTriggered
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionGroundTruthGenerated *commsAppSelectionGroundTruthGenerated; // ivar: _commsAppSelectionGroundTruthGenerated
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactCandidatesInfoGenerated *contactCandidatesInfoGenerated; // ivar: _contactCandidatesInfoGenerated
@property (retain, nonatomic) INFERENCESchemaINFERENCECRRTrainingSampleCollected *crrTrainingSampleCollected; // ivar: _crrTrainingSampleCollected
@property (retain, nonatomic) INFERENCESchemaINFERENCEClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasAbModelEvaluated; // ivar: _hasAbModelEvaluated
@property (nonatomic) BOOL hasAbModelResultTriggered; // ivar: _hasAbModelResultTriggered
@property (nonatomic) BOOL hasCommsAppSelectionGroundTruthGenerated; // ivar: _hasCommsAppSelectionGroundTruthGenerated
@property (nonatomic) BOOL hasContactCandidatesInfoGenerated; // ivar: _hasContactCandidatesInfoGenerated
@property (nonatomic) BOOL hasCrrTrainingSampleCollected; // ivar: _hasCrrTrainingSampleCollected
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasMusicAppSelectionGroundTruthGenerated; // ivar: _hasMusicAppSelectionGroundTruthGenerated
@property (nonatomic) BOOL hasNotebookAppSelectionGroundTruthGenerated; // ivar: _hasNotebookAppSelectionGroundTruthGenerated
@property (nonatomic) BOOL hasResolutionQueryInfoGenerated; // ivar: _hasResolutionQueryInfoGenerated
@property (nonatomic) BOOL hasResolutionRequestContext; // ivar: _hasResolutionRequestContext
@property (nonatomic) BOOL hasSimpleTaskInfoGenerated; // ivar: _hasSimpleTaskInfoGenerated
@property (nonatomic) BOOL hasUserPromptSelectedInfoGenerated; // ivar: _hasUserPromptSelectedInfoGenerated
@property (nonatomic) BOOL hasVideoPlayOnThirdPartyAppGroundTruthGenerated; // ivar: _hasVideoPlayOnThirdPartyAppGroundTruthGenerated
@property (nonatomic) BOOL hasVideoSmartAppSelectionDisambiguation; // ivar: _hasVideoSmartAppSelectionDisambiguation
@property (nonatomic) BOOL hasWorkoutsAppSelectionGroundTruthGenerated; // ivar: _hasWorkoutsAppSelectionGroundTruthGenerated
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) INFERENCESchemaINFERENCEMusicAppSelectionGroundTruthGenerated *musicAppSelectionGroundTruthGenerated; // ivar: _musicAppSelectionGroundTruthGenerated
@property (retain, nonatomic) INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated *notebookAppSelectionGroundTruthGenerated; // ivar: _notebookAppSelectionGroundTruthGenerated
@property (retain, nonatomic) INFERENCESchemaINFERENCEResolutionQueryInfoGenerated *resolutionQueryInfoGenerated; // ivar: _resolutionQueryInfoGenerated
@property (retain, nonatomic) INFERENCESchemaINFERENCEResolutionRequestContext *resolutionRequestContext; // ivar: _resolutionRequestContext
@property (retain, nonatomic) INFERENCESchemaINFERENCESimpleTaskInfoGenerated *simpleTaskInfoGenerated; // ivar: _simpleTaskInfoGenerated
@property (retain, nonatomic) INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated *userPromptSelectedInfoGenerated; // ivar: _userPromptSelectedInfoGenerated
@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated *videoPlayOnThirdPartyAppGroundTruthGenerated; // ivar: _videoPlayOnThirdPartyAppGroundTruthGenerated
@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationSignalsGenerated *videoSmartAppSelectionDisambiguation; // ivar: _videoSmartAppSelectionDisambiguation
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type
@property (retain, nonatomic) INFERENCESchemaINFERENCEWorkoutsAppSelectionGroundTruthGenerated *workoutsAppSelectionGroundTruthGenerated; // ivar: _workoutsAppSelectionGroundTruthGenerated


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)clockIsolationLevel;
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteAbModelEvaluated;
-(void)deleteAbModelResultTriggered;
-(void)deleteCommsAppSelectionGroundTruthGenerated;
-(void)deleteContactCandidatesInfoGenerated;
-(void)deleteCrrTrainingSampleCollected;
-(void)deleteEventMetadata;
-(void)deleteMusicAppSelectionGroundTruthGenerated;
-(void)deleteNotebookAppSelectionGroundTruthGenerated;
-(void)deleteResolutionQueryInfoGenerated;
-(void)deleteResolutionRequestContext;
-(void)deleteSimpleTaskInfoGenerated;
-(void)deleteUserPromptSelectedInfoGenerated;
-(void)deleteVideoPlayOnThirdPartyAppGroundTruthGenerated;
-(void)deleteVideoSmartAppSelectionDisambiguation;
-(void)deleteWorkoutsAppSelectionGroundTruthGenerated;
-(void)writeTo:(id)arg0 ;


@end


#endif