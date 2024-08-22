// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIGHTHOUSE_BITACORA_PROTOLIGHTHOUSELEDGERMLRUNTIMEDEVENT_H
#define LIGHTHOUSE_BITACORA_PROTOLIGHTHOUSELEDGERMLRUNTIMEDEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "LIGHTHOUSE_BITACORA_PROTOScheduleStatus.h"
#import "LIGHTHOUSE_BITACORA_PROTOTaskEvent.h"
#import "LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers.h"

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerMlruntimedEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOScheduleStatus *activityScheduleStatus; // ivar: _activityScheduleStatus
@property (retain, nonatomic) NSString *contextID; // ivar: _contextID
@property (readonly, nonatomic) BOOL hasActivityScheduleStatus;
@property (readonly, nonatomic) BOOL hasContextID;
@property (readonly, nonatomic) BOOL hasTaskCompleted;
@property (readonly, nonatomic) BOOL hasTaskFetched;
@property (readonly, nonatomic) BOOL hasTaskScheduled;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTrialIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskCompleted; // ivar: _taskCompleted
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskFetched; // ivar: _taskFetched
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskScheduled; // ivar: _taskScheduled
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers; // ivar: _trialIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif