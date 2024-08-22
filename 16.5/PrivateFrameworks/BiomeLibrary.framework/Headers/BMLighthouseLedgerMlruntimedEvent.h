// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMLIGHTHOUSELEDGERMLRUNTIMEDEVENT_H
#define BMLIGHTHOUSELEDGERMLRUNTIMEDEVENT_H

@class BMEventBase, NSString, NSDate;
@protocol BMStoreData;


#import "BMLighthouseLedgerMlruntimedEventScheduleStatus.h"
#import "BMLighthouseLedgerMlruntimedEventTaskEvent.h"
#import "BMLighthouseLedgerTrialIdentifiers.h"

@interface BMLighthouseLedgerMlruntimedEvent : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_timestamp;
    CGFloat _raw_timestamp;
}


@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventScheduleStatus *activityScheduleStatus; // ivar: _activityScheduleStatus
@property (readonly, nonatomic) NSString *contextID; // ivar: _contextID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventTaskEvent *taskCompleted; // ivar: _taskCompleted
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventTaskEvent *taskFetched; // ivar: _taskFetched
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventTaskEvent *taskScheduled; // ivar: _taskScheduled
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers; // ivar: _trialIdentifiers


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithTrialIdentifiers:(id)arg0 contextID:(id)arg1 timestamp:(id)arg2 activityScheduleStatus:(id)arg3 taskFetched:(id)arg4 taskScheduled:(id)arg5 taskCompleted:(id)arg6 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif