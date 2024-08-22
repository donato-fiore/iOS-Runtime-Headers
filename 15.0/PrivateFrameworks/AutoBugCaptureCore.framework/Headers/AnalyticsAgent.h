// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANALYTICSAGENT_H
#define ANALYTICSAGENT_H

@class NSSet, AWDServerConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AnalyticsAgent : NSObject

@property (retain, nonatomic) NSSet *awdSymptomsConfiguredMetricIds; // ivar: _awdSymptomsConfiguredMetricIds
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) AWDServerConnection *symptomsAWDConnection; // ivar: _symptomsAWDConnection


+(id)_awdSignificantOperationalEventMetricForSignificantEvent:(int)arg0 orEventName:(id)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4 ;
+(id)_awdSymptomsDiagnosticIncidentReportMetricForDiagnosticCase:(id)arg0 ;
+(id)_awdSymptomsDiagnosticNotificationTokenMetricForTokenString:(id)arg0 ;
+(id)sharedInstance;
+(int)awdDampeningType:(short)arg0 ;
+(int)awdHandledResult:(short)arg0 ;
+(void)updateAWDReport:(id)arg0 withEvents:(id)arg1 ;
-(id)initWithSymptomsAWDConnection:(id)arg0 queue:(id)arg1 ;
-(void)_handleQuery:(unsigned int)arg0 ;
-(void)_postMetric:(id)arg0 metricIdentifier:(unsigned int)arg1 ;
-(void)_registerAWDQueriableMetric:(unsigned int)arg0 ;
-(void)apnsPostAPNSNotEnabled;
-(void)apnsPostNotificationToken:(id)arg0 ;
-(void)apnsPostTokenConversionError;
-(void)apnsPostTokenEmpty;
-(void)apnsPostTokenNotSet;
-(void)postDiagnosticIncidentReportForCase:(id)arg0 ;
-(void)postMetric:(id)arg0 metricIdentifier:(unsigned int)arg1 ;
-(void)postMetricForSignificantEvent:(int)arg0 errorContext:(int)arg1 error:(id)arg2 status:(int)arg3 ;
-(void)postMetricForSignificantEventWithName:(id)arg0 errorContext:(int)arg1 error:(id)arg2 status:(int)arg3 ;


@end


#endif