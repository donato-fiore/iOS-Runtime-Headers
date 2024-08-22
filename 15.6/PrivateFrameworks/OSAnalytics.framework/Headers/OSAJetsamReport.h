// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSAJETSAMREPORT_H
#define OSAJETSAMREPORT_H

@class NSString, NSMutableArray, NSSet;
@protocol OSAConcreteReport;


#import "OSAReport.h"

@interface OSAJetsamReport : OSAReport <OSAConcreteReport>

 {
    NSString *_largestProcess;
    NSString *_largestActiveApp;
    NSMutableArray *_killedActiveApps;
    NSUInteger _wiredBytes;
    unsigned int _killed_or_suspended_count;
    BOOL _isSuspendedOnlyJetsam;
    *jetsam_snapshot _snapshot;
    NSString *_event_reason;
    NSUInteger _event_code;
    BOOL _aleFlag;
    NSSet *_visibilityEndowmentState;
    NSSet *_audioAssertionState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)_daysSince1970;
+(int)instrumentEventsWithAudioAssertionState:(id)arg0 visibliltyEndowmentState:(id)arg1 ;
+(struct jetsam_snapshot *)fetchSnapshotWithFlags:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)alreadyDumpedSuspendedJetsamLogToday;
-(BOOL)isActionable;
-(BOOL)saveWithOptions:(id)arg0 ;
-(id)additionalIPSMetadata;
-(id)appleCareDetails;
-(id)initWithIncidentID:(id)arg0 visibilityEndowmentState:(id)arg1 audioAssertionState:(id)arg2 ;
-(id)problemType;
-(id)reportNamePrefix;
-(void)_getSnapshotWithFlags:(unsigned int)arg0 ;
-(void)_setDumpedSuspendedJetsamLog;
-(void)acquireJetsamData;
-(void)acquireJetsamDataWithFlags:(unsigned int)arg0 ;
-(void)dealloc;
-(void)generateLogAtLevel:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)instrumentEvents:(BOOL)arg0 ;


@end


#endif