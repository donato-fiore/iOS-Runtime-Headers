// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDIAGNOSTICREPORTERLOGOBSERVER_H
#define HMDDIAGNOSTICREPORTERLOGOBSERVER_H

@class HMFObject, NSString, SDRDiagnosticReporter;
@protocol HMMLogEventObserver, HMFLogging, OS_dispatch_queue;



@interface HMDDiagnosticReporterLogObserver : HMFObject <HMMLogEventObserver, HMFLogging>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) SDRDiagnosticReporter *reporter; // ivar: _reporter
@property (readonly) Class superclass;


+(BOOL)isSupportedEvent:(id)arg0 ;
+(id)domainForEvent:(id)arg0 ;
+(id)logCategory;
+(id)sharedObserver;
+(id)subTypeForEvent:(id)arg0 ;
+(id)supportedEventClasses;
+(id)typeForEvent:(id)arg0 ;
-(BOOL)shouldSubmitEvent:(id)arg0 ;
-(id)init;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif