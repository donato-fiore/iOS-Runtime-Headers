// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCCOREANALYTICSREPORTER_H
#define BRCCOREANALYTICSREPORTER_H


#import <Foundation/Foundation.h>


@interface BRCCoreAnalyticsReporter : NSObject



+(BOOL)uploadLoadErrorsAsIndividualEvents:(id)arg0 syncType:(id)arg1 totalItemsCount:(NSUInteger)arg2 zoneCountsOnly:(BOOL)arg3 isFolderSharingEnabled:(BOOL)arg4 dsid:(id)arg5 rampNumber:(id)arg6 ;
+(BOOL)uploadSyncErrorsAsIndividualEvents:(id)arg0 syncType:(id)arg1 totalItemsCount:(NSUInteger)arg2 zoneType:(id)arg3 zoneCountsOnly:(BOOL)arg4 isFolderSharingEnabled:(BOOL)arg5 dsid:(id)arg6 rampNumber:(id)arg7 ;
+(id)dictionaryForErrorsByZone:(id)arg0 wantPrivateZone:(BOOL)arg1 ;
+(id)telemetryDictionaryToUploadForError:(id)arg0 errorMessage:(id)arg1 count:(id)arg2 syncType:(id)arg3 totalItemsCount:(id)arg4 zoneType:(id)arg5 zoneCountsOnly:(BOOL)arg6 isFolderSharingEnabled:(BOOL)arg7 dsid:(id)arg8 rampNumber:(id)arg9 lastFailureDate:(id)arg10 pcsState:(id)arg11 ;
+(void)newAppTelemetryMetricEvent:(id)arg0 ;
+(void)sendTelemetryEvent:(id)arg0 withReport:(id)arg1 ;
+(void)uploadMetricsReport:(id)arg0 ;


@end


#endif