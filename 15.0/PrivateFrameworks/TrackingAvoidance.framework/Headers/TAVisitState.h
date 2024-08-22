// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAVISITSTATE_H
#define TAVISITSTATE_H

@class NSMutableDictionary, NSHashTable;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TACircularBuffer.h"
#import "TAInterVisitMetricsSnapshot.h"
#import "TAScanRequest.h"
#import "TAVisitStateSettings.h"

@interface TAVisitState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *importantLois; // ivar: _importantLois
@property (readonly, nonatomic) TACircularBuffer *interVisitMetricSnapshotBuffer; // ivar: _interVisitMetricSnapshotBuffer
@property (retain, nonatomic) TAInterVisitMetricsSnapshot *interVisitMetricsSnapshotBackup; // ivar: _interVisitMetricsSnapshotBackup
@property (readonly, nonatomic) BOOL isInSensitiveVisit;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) TAScanRequest *scanRequest; // ivar: _scanRequest
@property (retain, nonatomic) TAVisitStateSettings *settings; // ivar: _settings
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) TACircularBuffer *visitSnapshotBuffer; // ivar: _visitSnapshotBuffer


+(BOOL)supportsSecureCoding;
+(id)visitStateTypeToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)evaluateLatestVisitSnapshotAndRecoverIfNecessary;
-(NSUInteger)stateTransitionDecisionGivenTACLVisit:(id)arg0 ;
-(id)description;
-(id)getDisplayEventsWithFirstPrecedingInInterval:(id)arg0 store:(id)arg1 ;
-(id)getLastestValidVisitDepartureDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettings:(id)arg0 scanRequestSettings:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)closeLatestInterVisitSnapshotWithStore:(id)arg0 date:(id)arg1 ;
-(void)closeVisitSnapshotWithStore:(id)arg0 visit:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ingestTAEvent:(id)arg0 store:(id)arg1 appendOutgoingRequestsTo:(id)arg2 ;
-(void)issueInterVisitScanRequestIfNecessaryWithClosedSnapshot:(id)arg0 store:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
-(void)issueVisitEntryScanRequestIfNecessaryWithOpenSnapshot:(id)arg0 clock:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
-(void)labelLoiTypeForLastVisitSnapshot:(id)arg0 ;
-(void)mergeWithAnotherTAVisitState:(id)arg0 ;
-(void)notifyObserversOfMetricsHint:(NSUInteger)arg0 ;
-(void)notifyObserversOfStateChangeFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)openInterVisitBackupSnapshotWithArrivalVisit:(id)arg0 ;
-(void)openInterVisitSnapshotWithDepartureVisit:(id)arg0 ;
-(void)openVisitSnapshotWithStore:(id)arg0 visit:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
-(void)performStateTransitionDecision:(NSUInteger)arg0 store:(id)arg1 visit:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
-(void)purgeInterVisitSnapshotBufferWithCurrentDate:(id)arg0 ;
-(void)purgeVisitSnapshotBufferWithCurrentDate:(id)arg0 ;
-(void)purgeWithClock:(id)arg0 ;
-(void)recoverInterVisitSnapshotWithArrivalVisit:(id)arg0 store:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetInterVisitBackupSnapshot;
-(void)updateImportantLOIs:(id)arg0 currentDate:(id)arg1 ;
-(void)updateInterVisitBackupSnapshotWithStore:(id)arg0 ;
-(void)updateInterVisitSnapshot:(id)arg0 store:(id)arg1 ;
-(void)updateInterVisitSnapshotWithStore:(id)arg0 ;


@end


#endif