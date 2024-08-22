// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSYNCCONSISTENCYREPORT_H
#define BRCSYNCCONSISTENCYREPORT_H

@class NSError, NSArray;

#import <Foundation/Foundation.h>


@interface BRCSyncConsistencyReport : NSObject

@property (readonly, nonatomic) NSError *lastError; // ivar: _lastError
@property (readonly, nonatomic) NSArray *telemetryErrorEvents; // ivar: _telemetryErrorEvents
@property (readonly, nonatomic) NSArray *telemetryWarningEvents; // ivar: _telemetryWarningEvents
@property (readonly, nonatomic) BOOL wasAbleToRun; // ivar: _wasAbleToRun


+(void)_finishReport:(id)arg0 session:(id)arg1 temporaryDBURL:(id)arg2 mountFD:(int)arg3 completionHandler:(id)arg4 ;
+(void)cleanupApfsSnapshotWithMountFD:(int)arg0 ;
+(void)cleanupApfsSnapshotWithMountPath:(id)arg0 ;
+(void)generateReportWithSession:(id)arg0 completion:(id)arg1 ;


@end


#endif