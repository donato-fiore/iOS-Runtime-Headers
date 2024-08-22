// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMETRICSCOLLECTOR_H
#define IMMETRICSCOLLECTOR_H

@class SDRDiagnosticReporter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMMetricsCollector : NSObject {
    SDRDiagnosticReporter *_diagnosticReporter;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // ivar: _metricsQueue


+(id)sharedInstance;
-(*void)_ADClientAddValueForScalarKeyApiInit;
-(*void)_ADClientPushValueForDistributionKeyApiInit;
-(*void)_ADClientSetValueForScalarKeyApiInit;
-(BOOL)trackAction:(id)arg0 extensionBundleID:(id)arg1 isNotification:(BOOL)arg2 ;
-(BOOL)trackEvent:(id)arg0 ;
-(BOOL)trackEvent:(id)arg0 withCount:(id)arg1 ;
-(BOOL)trackEvent:(id)arg0 withDictionary:(id)arg1 ;
-(BOOL)trackEvent:(id)arg0 withStatistic:(id)arg1 ;
-(id)_stringForSpamType:(NSUInteger)arg0 ;
-(id)_stringForiMessageJunkType:(NSUInteger)arg0 ;
-(id)init;
-(void)_trackEvent:(id)arg0 ;
-(void)_trackEvent:(id)arg0 withCount:(id)arg1 ;
-(void)_trackEvent:(id)arg0 withDictionary:(id)arg1 ;
-(void)_trackEvent:(id)arg0 withStatistic:(id)arg1 ;
-(void)autoBugCaptureWithSubType:(id)arg0 errorPayload:(id)arg1 ;
-(void)dealloc;
-(void)forceAutoBugCaptureWithSubType:(id)arg0 errorPayload:(id)arg1 ;
-(void)metricAttachmentValidation:(BOOL)arg0 attachmentSize:(id)arg1 operationalErrorDomain:(id)arg2 operationalErrorCode:(id)arg3 validationErrorDomain:(id)arg4 validationErrorCode:(id)arg5 ;
-(void)trackSpamEvent:(NSUInteger)arg0 ;
-(void)trackSpamEvent:(NSUInteger)arg0 withDictionary:(id)arg1 ;
-(void)trackiMessageJunkEvent:(NSUInteger)arg0 ;
-(void)trackiMessageJunkEvent:(NSUInteger)arg0 withDictionary:(id)arg1 ;


@end


#endif