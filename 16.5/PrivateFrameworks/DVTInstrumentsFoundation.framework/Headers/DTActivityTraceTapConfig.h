// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTACTIVITYTRACETAPCONFIG_H
#define DTACTIVITYTRACETAPCONFIG_H

@class NSArray, NSDate, NSURL, NSDictionary, NSString;


#import "DTTapConfig.h"

@interface DTActivityTraceTapConfig : DTTapConfig

@property (retain, nonatomic) NSArray *dynamicTracingEnabledSubsystems;
@property (nonatomic) BOOL enableHTTPArchiveLogging;
@property (nonatomic) BOOL excludeDebug;
@property (nonatomic) BOOL excludeInfo;
@property (retain, nonatomic) NSDate *importForcedEndDate; // ivar: _importForcedEndDate
@property (retain, nonatomic) NSDate *importForcedStartDate; // ivar: _importForcedStartDate
@property (retain, nonatomic) NSURL *importedFileURL; // ivar: _importedFileURL
@property (nonatomic) BOOL includeSenderInfo;
@property (retain, nonatomic) NSDictionary *loggingSubsystemCategoryPairsToEnable;
@property (nonatomic) NSUInteger machContinuousStart;
@property (nonatomic) mach_timebase_info machTimebase;
@property (copy, nonatomic) id *memoHandler; // ivar: _memoHandler
@property (nonatomic) NSUInteger mode;
@property (nonatomic) BOOL onlySignposts;
@property (copy, nonatomic) NSString *predicateString;
@property (copy, nonatomic) id *processDetectionCallback; // ivar: _processDetectionCallback
@property (retain, nonatomic) NSDictionary *signpostSubsystemCategoryPairsToEnable;
@property (nonatomic) BOOL signpostsAndLogs;
@property (nonatomic) int targetPID;
@property (nonatomic) BOOL trackExpiredPIDs;
@property (nonatomic) BOOL trackPIDToExecNameMapping;


-(BOOL)isTargetAllProcesses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif