// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTOSLOGLOADERPREPARETICKET_H
#define DTOSLOGLOADERPREPARETICKET_H

@class NSArray, NSPredicate, NSDate, NSURL, NSDictionary;


#import "DTOSLogLoaderTicket.h"

@interface DTOSLogLoaderPrepareTicket : DTOSLogLoaderTicket

@property (nonatomic) NSUInteger columnInclusions; // ivar: _columnInclusions
@property (retain, nonatomic) NSArray *dynamicTracingEnabledSubsystems; // ivar: _dynamicTracingEnabledSubsystems
@property (nonatomic) NSUInteger exclusions; // ivar: _exclusions
@property (retain, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (retain, nonatomic) NSDate *importForcedEndDate; // ivar: _importForcedEndDate
@property (retain, nonatomic) NSDate *importForcedStartDate; // ivar: _importForcedStartDate
@property (retain, nonatomic) NSURL *importedFileURL; // ivar: _importedFileURL
@property (retain, nonatomic) NSDictionary *loggingSubsystemCategoryPairsToEnable; // ivar: _loggingSubsystemCategoryPairsToEnable
@property (nonatomic) NSUInteger machContinuousStart; // ivar: _machContinuousStart
@property (nonatomic) mach_timebase_info machTimebase; // ivar: _machTimebase
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) NSUInteger signpostConfig; // ivar: _signpostConfig
@property (retain, nonatomic) NSDictionary *signpostSubsystemCategoryPairsToEnable; // ivar: _signpostSubsystemCategoryPairsToEnable
@property (nonatomic) BOOL trackPidToExecNameMapping; // ivar: _trackPidToExecNameMapping


-(void)_setupLoaderForLoggedEventStore:(id)arg0 agent:(id)arg1 setDatesBasedOnSource:(BOOL)arg2 genericFailureReason:(id)arg3 ;
-(void)holdAgent:(id)arg0 loader:(id)arg1 ;


@end


#endif