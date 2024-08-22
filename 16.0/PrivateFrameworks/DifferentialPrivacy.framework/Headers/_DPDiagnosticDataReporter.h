// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPDIAGNOSTICDATAREPORTER_H
#define _DPDIAGNOSTICDATAREPORTER_H


#import <Foundation/Foundation.h>


@interface _DPDiagnosticDataReporter : NSObject



+(id)IOTrackingPrefix;
+(id)blacklistFileCreationKey;
+(id)blacklistFileRemovalKey;
+(id)budgetUpdateKey;
+(id)daReportSubmissionKey;
+(id)diagnosticReportKeyFor:(id)arg0 scalerKeyPrefix:(id)arg1 ;
+(id)parsecReportSubmissionKey;
+(id)staleRecordRemovalKey;
+(id)staleReportFileRemovalKey;
+(id)submittedRecordRemovalKey;
+(void)addValue:(NSInteger)arg0 forDPKey:(id)arg1 scalarKeyPrefix:(id)arg2 ;
+(void)addValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;
+(void)clearDPKey:(id)arg0 scalarKeyPrefix:(id)arg1 ;
+(void)clearScalarKey:(id)arg0 ;
+(void)setValue:(NSInteger)arg0 forDPKey:(id)arg1 scalarKeyPrefix:(id)arg2 ;
+(void)setValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;


@end


#endif