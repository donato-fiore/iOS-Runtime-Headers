// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSOFTWAREUPDATEEVENTPROVIDER_H
#define HMDSOFTWAREUPDATEEVENTPROVIDER_H

@class HMFObject, HMSoftwareUpdateProgressEvent, NSString, HMFTimer, NSMutableArray;
@protocol HMFLogging, HMDSUControllerManagerDelegate, HMFTimerDelegate;


#import "HMDSoftwareUpdateEventProviderContext.h"

@interface HMDSoftwareUpdateEventProvider : HMFObject <HMFLogging, HMDSUControllerManagerDelegate, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) HMDSoftwareUpdateEventProviderContext *context; // ivar: _context
@property (retain) HMSoftwareUpdateProgressEvent *debouncedProgressEvent; // ivar: _debouncedProgressEvent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMFTimer *progressDebounceTimer; // ivar: _progressDebounceTimer
@property (retain) NSMutableArray *scanFutures; // ivar: _scanFutures
@property (copy) id *scanOptionsFactory; // ivar: _scanOptionsFactory
@property (readonly) Class superclass;


+(id)logCategory;
-(id)descriptorFromControllerStatus:(id)arg0 controllerDescriptor:(id)arg1 errorCode:(id)arg2 ;
// -(id)initWithContext:(id)arg0 scanOptionsFactory:(id)arg1 timerFactory:(unk)arg2  ;
-(id)scanWithOptions:(NSUInteger)arg0 ;
-(void)forwardDebouncedProgressEvent;
-(void)forwardDescriptorEventWithErrorCode:(id)arg0 ;
-(void)forwardProgressEventWithProgress:(id)arg0 ;
-(void)manager:(id)arg0 didChangeProgressOnDownload:(id)arg1 ;
-(void)manager:(id)arg0 didFailDownload:(id)arg1 withError:(id)arg2 ;
-(void)manager:(id)arg0 didFailInstallation:(id)arg1 withError:(id)arg2 ;
-(void)manager:(id)arg0 didFinishDownload:(id)arg1 ;
-(void)manager:(id)arg0 didFinishDownload:(id)arg1 willProceedWithInstallation:(BOOL)arg2 waitingForAdmissionControl:(BOOL)arg3 ;
-(void)manager:(id)arg0 didFinishDownload:(id)arg1 willProceedWithInstallation:(BOOL)arg2 waitingForAdmissionControl:(BOOL)arg3 denialReasons:(id)arg4 ;
-(void)manager:(id)arg0 didFinishInstallation:(id)arg1 ;
-(void)manager:(id)arg0 scanRequestDidLocateUpdate:(id)arg1 error:(id)arg2 ;
-(void)manager:(id)arg0 scanRequestPostponed:(id)arg1 error:(id)arg2 ;
-(void)respondToScanFuturesWithError:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif