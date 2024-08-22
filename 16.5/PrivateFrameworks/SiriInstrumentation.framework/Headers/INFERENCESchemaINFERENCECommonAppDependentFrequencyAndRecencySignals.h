// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMONAPPDEPENDENTFREQUENCYANDRECENCYSIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMONAPPDEPENDENTFREQUENCYANDRECENCYSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int appUsageCount10Min; // ivar: _appUsageCount10Min
@property (nonatomic) int appUsageCount14Days; // ivar: _appUsageCount14Days
@property (nonatomic) int appUsageCount1Day; // ivar: _appUsageCount1Day
@property (nonatomic) int appUsageCount1Hr; // ivar: _appUsageCount1Hr
@property (nonatomic) int appUsageCount28Days; // ivar: _appUsageCount28Days
@property (nonatomic) int appUsageCount2Min; // ivar: _appUsageCount2Min
@property (nonatomic) int appUsageCount6Hrs; // ivar: _appUsageCount6Hrs
@property (nonatomic) int appUsageCount7Days; // ivar: _appUsageCount7Days
@property (nonatomic) int appUsageCountFromSiri10Min; // ivar: _appUsageCountFromSiri10Min
@property (nonatomic) int appUsageCountFromSiri14Days; // ivar: _appUsageCountFromSiri14Days
@property (nonatomic) int appUsageCountFromSiri1Day; // ivar: _appUsageCountFromSiri1Day
@property (nonatomic) int appUsageCountFromSiri1Hr; // ivar: _appUsageCountFromSiri1Hr
@property (nonatomic) int appUsageCountFromSiri28Days; // ivar: _appUsageCountFromSiri28Days
@property (nonatomic) int appUsageCountFromSiri2Min; // ivar: _appUsageCountFromSiri2Min
@property (nonatomic) int appUsageCountFromSiri6Hrs; // ivar: _appUsageCountFromSiri6Hrs
@property (nonatomic) int appUsageCountFromSiri7Days; // ivar: _appUsageCountFromSiri7Days
@property (nonatomic) int appUsageCountFromSiriInf; // ivar: _appUsageCountFromSiriInf
@property (nonatomic) int appUsageCountInf; // ivar: _appUsageCountInf
@property (nonatomic) BOOL hasAppUsageCount10Min;
@property (nonatomic) BOOL hasAppUsageCount14Days;
@property (nonatomic) BOOL hasAppUsageCount1Day;
@property (nonatomic) BOOL hasAppUsageCount1Hr;
@property (nonatomic) BOOL hasAppUsageCount28Days;
@property (nonatomic) BOOL hasAppUsageCount2Min;
@property (nonatomic) BOOL hasAppUsageCount6Hrs;
@property (nonatomic) BOOL hasAppUsageCount7Days;
@property (nonatomic) BOOL hasAppUsageCountFromSiri10Min;
@property (nonatomic) BOOL hasAppUsageCountFromSiri14Days;
@property (nonatomic) BOOL hasAppUsageCountFromSiri1Day;
@property (nonatomic) BOOL hasAppUsageCountFromSiri1Hr;
@property (nonatomic) BOOL hasAppUsageCountFromSiri28Days;
@property (nonatomic) BOOL hasAppUsageCountFromSiri2Min;
@property (nonatomic) BOOL hasAppUsageCountFromSiri6Hrs;
@property (nonatomic) BOOL hasAppUsageCountFromSiri7Days;
@property (nonatomic) BOOL hasAppUsageCountFromSiriInf;
@property (nonatomic) BOOL hasAppUsageCountInf;
@property (nonatomic) BOOL hasRecencyOrderOfAppUsageFromSiri;
@property (nonatomic) BOOL hasRecencyOrderOfAppUsed;
@property (nonatomic) BOOL hasTaskAbandonCountInUsingApp10Min;
@property (nonatomic) BOOL hasTaskAbandonCountInUsingApp14Days;
@property (nonatomic) BOOL hasTaskAbandonCountInUsingApp1Day;
@property (nonatomic) BOOL hasTaskAbandonCountInUsingApp1Hr;
@property (nonatomic) BOOL hasTaskAbandonCountInUsingApp28Days;
@property (nonatomic) BOOL hasTaskAbandonCountInUsingApp2Min;
@property (nonatomic) BOOL hasTaskAbandonCountInUsingApp6Hrs;
@property (nonatomic) BOOL hasTaskAbandonCountInUsingApp7Days;
@property (nonatomic) BOOL hasTaskAbandonCountInUsingAppInf;
@property (nonatomic) BOOL hasTimeSinceAppUsedFromSiriInSec;
@property (nonatomic) BOOL hasTimeSinceAppUsedInSec;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int recencyOrderOfAppUsageFromSiri; // ivar: _recencyOrderOfAppUsageFromSiri
@property (nonatomic) int recencyOrderOfAppUsed; // ivar: _recencyOrderOfAppUsed
@property (nonatomic) int taskAbandonCountInUsingApp10Min; // ivar: _taskAbandonCountInUsingApp10Min
@property (nonatomic) int taskAbandonCountInUsingApp14Days; // ivar: _taskAbandonCountInUsingApp14Days
@property (nonatomic) int taskAbandonCountInUsingApp1Day; // ivar: _taskAbandonCountInUsingApp1Day
@property (nonatomic) int taskAbandonCountInUsingApp1Hr; // ivar: _taskAbandonCountInUsingApp1Hr
@property (nonatomic) int taskAbandonCountInUsingApp28Days; // ivar: _taskAbandonCountInUsingApp28Days
@property (nonatomic) int taskAbandonCountInUsingApp2Min; // ivar: _taskAbandonCountInUsingApp2Min
@property (nonatomic) int taskAbandonCountInUsingApp6Hrs; // ivar: _taskAbandonCountInUsingApp6Hrs
@property (nonatomic) int taskAbandonCountInUsingApp7Days; // ivar: _taskAbandonCountInUsingApp7Days
@property (nonatomic) int taskAbandonCountInUsingAppInf; // ivar: _taskAbandonCountInUsingAppInf
@property (nonatomic) NSInteger timeSinceAppUsedFromSiriInSec; // ivar: _timeSinceAppUsedFromSiriInSec
@property (nonatomic) NSInteger timeSinceAppUsedInSec; // ivar: _timeSinceAppUsedInSec


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppUsageCount10Min;
-(void)deleteAppUsageCount14Days;
-(void)deleteAppUsageCount1Day;
-(void)deleteAppUsageCount1Hr;
-(void)deleteAppUsageCount28Days;
-(void)deleteAppUsageCount2Min;
-(void)deleteAppUsageCount6Hrs;
-(void)deleteAppUsageCount7Days;
-(void)deleteAppUsageCountFromSiri10Min;
-(void)deleteAppUsageCountFromSiri14Days;
-(void)deleteAppUsageCountFromSiri1Day;
-(void)deleteAppUsageCountFromSiri1Hr;
-(void)deleteAppUsageCountFromSiri28Days;
-(void)deleteAppUsageCountFromSiri2Min;
-(void)deleteAppUsageCountFromSiri6Hrs;
-(void)deleteAppUsageCountFromSiri7Days;
-(void)deleteAppUsageCountFromSiriInf;
-(void)deleteAppUsageCountInf;
-(void)deleteRecencyOrderOfAppUsageFromSiri;
-(void)deleteRecencyOrderOfAppUsed;
-(void)deleteTaskAbandonCountInUsingApp10Min;
-(void)deleteTaskAbandonCountInUsingApp14Days;
-(void)deleteTaskAbandonCountInUsingApp1Day;
-(void)deleteTaskAbandonCountInUsingApp1Hr;
-(void)deleteTaskAbandonCountInUsingApp28Days;
-(void)deleteTaskAbandonCountInUsingApp2Min;
-(void)deleteTaskAbandonCountInUsingApp6Hrs;
-(void)deleteTaskAbandonCountInUsingApp7Days;
-(void)deleteTaskAbandonCountInUsingAppInf;
-(void)deleteTimeSinceAppUsedFromSiriInSec;
-(void)deleteTimeSinceAppUsedInSec;
-(void)writeTo:(id)arg0 ;


@end


#endif