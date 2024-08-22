// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSMANAGEDDEVICEINSTALLFLOW_H
#define TSMANAGEDDEVICEINSTALLFLOW_H

@class NSError, NSTimer, NSString;
@protocol TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate;


#import "TSSIMSetupFlow.h"

@interface TSManagedDeviceInstallFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>

 {
    BOOL _waitForService;
    BOOL _fallbackToActivationCode;
    BOOL _ignoreTransport;
    BOOL _startMonitoringConnection;
    NSError *_planInstallError;
    NSTimer *_provisioningWatchDogTimer;
    id *_firstViewCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)firstViewController;
-(id)initWith:(BOOL)arg0 fallbackToActivationCode:(BOOL)arg1 ignoreTransport:(BOOL)arg2 ;
-(void)firstViewController:(id)arg0 ;
-(void)handleProvisioningWatchdogExpiry;
-(void)hasCellularConnection:(id)arg0 ;
-(void)invokeCompletionWithPlanInstallResult:(NSUInteger)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)planItemsUpdated:(id)arg0 planListError:(id)arg1 ;


@end


#endif