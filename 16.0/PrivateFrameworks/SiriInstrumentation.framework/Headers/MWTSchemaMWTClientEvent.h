// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MWTSCHEMAMWTCLIENTEVENT_H
#define MWTSCHEMAMWTCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "MWTSchemaMWTEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "MWTSchemaMWTCheckpointReported.h"
#import "MWTSchemaMWTMusicMetadataReported.h"
#import "MWTSchemaMWTVMCPUStatsReported.h"

@interface MWTSchemaMWTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) MWTSchemaMWTEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasMwtCheckpointReported; // ivar: _hasMwtCheckpointReported
@property (nonatomic) BOOL hasMwtMusicMetadataReported; // ivar: _hasMwtMusicMetadataReported
@property (nonatomic) BOOL hasMwtVMCpuStatsReported; // ivar: _hasMwtVMCpuStatsReported
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MWTSchemaMWTCheckpointReported *mwtCheckpointReported; // ivar: _mwtCheckpointReported
@property (retain, nonatomic) MWTSchemaMWTMusicMetadataReported *mwtMusicMetadataReported; // ivar: _mwtMusicMetadataReported
@property (retain, nonatomic) MWTSchemaMWTVMCPUStatsReported *mwtVMCpuStatsReported; // ivar: _mwtVMCpuStatsReported
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


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
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteEventMetadata;
-(void)deleteMwtCheckpointReported;
-(void)deleteMwtMusicMetadataReported;
-(void)deleteMwtVMCpuStatsReported;
-(void)writeTo:(id)arg0 ;


@end


#endif