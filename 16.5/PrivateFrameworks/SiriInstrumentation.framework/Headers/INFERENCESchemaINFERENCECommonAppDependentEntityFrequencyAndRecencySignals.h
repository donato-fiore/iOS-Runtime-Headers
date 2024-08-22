// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMONAPPDEPENDENTENTITYFREQUENCYANDRECENCYSIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMONAPPDEPENDENTENTITYFREQUENCYANDRECENCYSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int appUsageCountForEntity10Min; // ivar: _appUsageCountForEntity10Min
@property (nonatomic) int appUsageCountForEntity14Days; // ivar: _appUsageCountForEntity14Days
@property (nonatomic) int appUsageCountForEntity1Day; // ivar: _appUsageCountForEntity1Day
@property (nonatomic) int appUsageCountForEntity1Hr; // ivar: _appUsageCountForEntity1Hr
@property (nonatomic) int appUsageCountForEntity28Days; // ivar: _appUsageCountForEntity28Days
@property (nonatomic) int appUsageCountForEntity2Min; // ivar: _appUsageCountForEntity2Min
@property (nonatomic) int appUsageCountForEntity6Hrs; // ivar: _appUsageCountForEntity6Hrs
@property (nonatomic) int appUsageCountForEntity7Days; // ivar: _appUsageCountForEntity7Days
@property (nonatomic) int appUsageCountForEntityFromSiri10Min; // ivar: _appUsageCountForEntityFromSiri10Min
@property (nonatomic) int appUsageCountForEntityFromSiri14Days; // ivar: _appUsageCountForEntityFromSiri14Days
@property (nonatomic) int appUsageCountForEntityFromSiri1Day; // ivar: _appUsageCountForEntityFromSiri1Day
@property (nonatomic) int appUsageCountForEntityFromSiri1Hr; // ivar: _appUsageCountForEntityFromSiri1Hr
@property (nonatomic) int appUsageCountForEntityFromSiri28Days; // ivar: _appUsageCountForEntityFromSiri28Days
@property (nonatomic) int appUsageCountForEntityFromSiri2Min; // ivar: _appUsageCountForEntityFromSiri2Min
@property (nonatomic) int appUsageCountForEntityFromSiri6Hrs; // ivar: _appUsageCountForEntityFromSiri6Hrs
@property (nonatomic) int appUsageCountForEntityFromSiri7Days; // ivar: _appUsageCountForEntityFromSiri7Days
@property (nonatomic) int appUsageCountForEntityFromSiriInf; // ivar: _appUsageCountForEntityFromSiriInf
@property (nonatomic) int appUsageCountForEntityInf; // ivar: _appUsageCountForEntityInf
@property (nonatomic) BOOL hasAppUsageCountForEntity10Min;
@property (nonatomic) BOOL hasAppUsageCountForEntity14Days;
@property (nonatomic) BOOL hasAppUsageCountForEntity1Day;
@property (nonatomic) BOOL hasAppUsageCountForEntity1Hr;
@property (nonatomic) BOOL hasAppUsageCountForEntity28Days;
@property (nonatomic) BOOL hasAppUsageCountForEntity2Min;
@property (nonatomic) BOOL hasAppUsageCountForEntity6Hrs;
@property (nonatomic) BOOL hasAppUsageCountForEntity7Days;
@property (nonatomic) BOOL hasAppUsageCountForEntityFromSiri10Min;
@property (nonatomic) BOOL hasAppUsageCountForEntityFromSiri14Days;
@property (nonatomic) BOOL hasAppUsageCountForEntityFromSiri1Day;
@property (nonatomic) BOOL hasAppUsageCountForEntityFromSiri1Hr;
@property (nonatomic) BOOL hasAppUsageCountForEntityFromSiri28Days;
@property (nonatomic) BOOL hasAppUsageCountForEntityFromSiri2Min;
@property (nonatomic) BOOL hasAppUsageCountForEntityFromSiri6Hrs;
@property (nonatomic) BOOL hasAppUsageCountForEntityFromSiri7Days;
@property (nonatomic) BOOL hasAppUsageCountForEntityFromSiriInf;
@property (nonatomic) BOOL hasAppUsageCountForEntityInf;
@property (nonatomic) BOOL hasRecencyOrderOfAppUsageForEntityFromSiri;
@property (nonatomic) BOOL hasRecencyOrderOfAppUsedForEntity;
@property (nonatomic) BOOL hasTaskAbandonCountForEntityInUsingApp10Min;
@property (nonatomic) BOOL hasTaskAbandonCountForEntityInUsingApp14Days;
@property (nonatomic) BOOL hasTaskAbandonCountForEntityInUsingApp1Day;
@property (nonatomic) BOOL hasTaskAbandonCountForEntityInUsingApp1Hr;
@property (nonatomic) BOOL hasTaskAbandonCountForEntityInUsingApp28Days;
@property (nonatomic) BOOL hasTaskAbandonCountForEntityInUsingApp2Min;
@property (nonatomic) BOOL hasTaskAbandonCountForEntityInUsingApp6Hrs;
@property (nonatomic) BOOL hasTaskAbandonCountForEntityInUsingApp7Days;
@property (nonatomic) BOOL hasTaskAbandonCountForEntityInUsingAppInf;
@property (nonatomic) BOOL hasTimeSinceAppUsedForEntityFromSiriInSec;
@property (nonatomic) BOOL hasTimeSinceAppUsedForEntityInSec;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int recencyOrderOfAppUsageForEntityFromSiri; // ivar: _recencyOrderOfAppUsageForEntityFromSiri
@property (nonatomic) int recencyOrderOfAppUsedForEntity; // ivar: _recencyOrderOfAppUsedForEntity
@property (nonatomic) int taskAbandonCountForEntityInUsingApp10Min; // ivar: _taskAbandonCountForEntityInUsingApp10Min
@property (nonatomic) int taskAbandonCountForEntityInUsingApp14Days; // ivar: _taskAbandonCountForEntityInUsingApp14Days
@property (nonatomic) int taskAbandonCountForEntityInUsingApp1Day; // ivar: _taskAbandonCountForEntityInUsingApp1Day
@property (nonatomic) int taskAbandonCountForEntityInUsingApp1Hr; // ivar: _taskAbandonCountForEntityInUsingApp1Hr
@property (nonatomic) int taskAbandonCountForEntityInUsingApp28Days; // ivar: _taskAbandonCountForEntityInUsingApp28Days
@property (nonatomic) int taskAbandonCountForEntityInUsingApp2Min; // ivar: _taskAbandonCountForEntityInUsingApp2Min
@property (nonatomic) int taskAbandonCountForEntityInUsingApp6Hrs; // ivar: _taskAbandonCountForEntityInUsingApp6Hrs
@property (nonatomic) int taskAbandonCountForEntityInUsingApp7Days; // ivar: _taskAbandonCountForEntityInUsingApp7Days
@property (nonatomic) int taskAbandonCountForEntityInUsingAppInf; // ivar: _taskAbandonCountForEntityInUsingAppInf
@property (nonatomic) NSInteger timeSinceAppUsedForEntityFromSiriInSec; // ivar: _timeSinceAppUsedForEntityFromSiriInSec
@property (nonatomic) NSInteger timeSinceAppUsedForEntityInSec; // ivar: _timeSinceAppUsedForEntityInSec


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppUsageCountForEntity10Min;
-(void)deleteAppUsageCountForEntity14Days;
-(void)deleteAppUsageCountForEntity1Day;
-(void)deleteAppUsageCountForEntity1Hr;
-(void)deleteAppUsageCountForEntity28Days;
-(void)deleteAppUsageCountForEntity2Min;
-(void)deleteAppUsageCountForEntity6Hrs;
-(void)deleteAppUsageCountForEntity7Days;
-(void)deleteAppUsageCountForEntityFromSiri10Min;
-(void)deleteAppUsageCountForEntityFromSiri14Days;
-(void)deleteAppUsageCountForEntityFromSiri1Day;
-(void)deleteAppUsageCountForEntityFromSiri1Hr;
-(void)deleteAppUsageCountForEntityFromSiri28Days;
-(void)deleteAppUsageCountForEntityFromSiri2Min;
-(void)deleteAppUsageCountForEntityFromSiri6Hrs;
-(void)deleteAppUsageCountForEntityFromSiri7Days;
-(void)deleteAppUsageCountForEntityFromSiriInf;
-(void)deleteAppUsageCountForEntityInf;
-(void)deleteRecencyOrderOfAppUsageForEntityFromSiri;
-(void)deleteRecencyOrderOfAppUsedForEntity;
-(void)deleteTaskAbandonCountForEntityInUsingApp10Min;
-(void)deleteTaskAbandonCountForEntityInUsingApp14Days;
-(void)deleteTaskAbandonCountForEntityInUsingApp1Day;
-(void)deleteTaskAbandonCountForEntityInUsingApp1Hr;
-(void)deleteTaskAbandonCountForEntityInUsingApp28Days;
-(void)deleteTaskAbandonCountForEntityInUsingApp2Min;
-(void)deleteTaskAbandonCountForEntityInUsingApp6Hrs;
-(void)deleteTaskAbandonCountForEntityInUsingApp7Days;
-(void)deleteTaskAbandonCountForEntityInUsingAppInf;
-(void)deleteTimeSinceAppUsedForEntityFromSiriInSec;
-(void)deleteTimeSinceAppUsedForEntityInSec;
-(void)writeTo:(id)arg0 ;


@end


#endif