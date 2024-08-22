// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDIAGNOSTICREPORTERLOGOBSERVER_H
#define HMDDIAGNOSTICREPORTERLOGOBSERVER_H

@class HMFObject, NSString, SDRDiagnosticReporter;
@protocol HMMLogEventObserver, HMFLogging, OS_dispatch_queue, HMMLogEventDispatching;



@interface HMDDiagnosticReporterLogObserver : HMFObject <HMMLogEventObserver, HMFLogging>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HMMLogEventDispatching> *logEventDispatcher; // ivar: _logEventDispatcher
@property (readonly) NSUInteger memoryExceptionThreshold; // ivar: _memoryExceptionThreshold
@property (readonly) SDRDiagnosticReporter *reporter; // ivar: _reporter
@property (readonly) Class superclass;


+(BOOL)isSupportedEvent:(id)arg0 ;
+(id)domainForEvent:(id)arg0 ;
+(id)logCategory;
+(id)subTypeForEvent:(id)arg0 ;
+(id)supportedEventClasses;
+(id)typeForEvent:(id)arg0 ;
-(BOOL)shouldSubmitEvent:(id)arg0 ;
-(id)initWithLogEventDispatcher:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif