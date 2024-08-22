// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTACTIVITYTRACETAPLOCALSHUTTLE_H
#define DTACTIVITYTRACETAPLOCALSHUTTLE_H

@class XRMobileAgent, NSArray, NSError, NSDate, NSURL, NSData, XRMobileAgentDock, NSPredicate;
@protocol DTOSLogLoaderVisitor;


#import "DTOSLogLoader.h"

@interface DTActivityTraceTapLocalShuttle : XRMobileAgent <DTOSLogLoaderVisitor>

 {
    id *_commonFetchTicket;
}


@property (nonatomic) NSUInteger columnInclusions; // ivar: _columnInclusions
@property (nonatomic) BOOL didPrepare; // ivar: _didPrepare
@property (nonatomic) BOOL didStart; // ivar: _didStart
@property (nonatomic) BOOL didStop; // ivar: _didStop
@property (retain, nonatomic) NSArray *dynamicTracingEnabledSubsystems; // ivar: _dynamicTracingEnabledSubsystems
@property (nonatomic) NSUInteger exclusions; // ivar: _exclusions
@property (retain, nonatomic) NSError *failureReason; // ivar: failureReason
@property (nonatomic, getter=isFetchComplete) BOOL fetchComplete; // ivar: fetchComplete
@property (nonatomic) CGFloat fetchWindow; // ivar: _fetchWindow
@property (retain, nonatomic) NSDate *importForcedEndDate; // ivar: _importForcedEndDate
@property (retain, nonatomic) NSDate *importForcedStartDate; // ivar: _importForcedStartDate
@property (retain, nonatomic) NSURL *importedFileURL; // ivar: _importedFileURL
@property (nonatomic) NSUInteger lastMachContinuousTime; // ivar: lastMachContinuousTime
@property (retain, nonatomic) DTOSLogLoader *loaderStop; // ivar: _loaderStop
@property (nonatomic) NSUInteger logLoaderMode; // ivar: _logLoaderMode
@property (nonatomic) unsigned int lostEventsSinceLastVisit; // ivar: lostEventsSinceLastVisit
@property (nonatomic) mach_timebase_info machTimebase; // ivar: _machTimebase
@property (retain, nonatomic) NSData *nextOutputBytes; // ivar: nextOutputBytes
@property (retain, nonatomic) XRMobileAgentDock *ownersDock; // ivar: _ownersDock
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (copy, nonatomic) id *processDetectionCallback; // ivar: _processDetectionCallback
@property (nonatomic) BOOL shouldFetch; // ivar: _shouldFetch
@property (nonatomic) BOOL shouldStart; // ivar: _shouldStart
@property (nonatomic) BOOL shouldStop; // ivar: _shouldStop
@property (nonatomic) NSUInteger signpostConfig; // ivar: _signpostConfig


-(void)addPidToExecEntriesFromMapping:(id)arg0 ;
-(void)executeStopOnItinerary:(id)arg0 ;


@end


#endif