// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDFMFHANDLER_H
#define HMDFMFHANDLER_H

@class HMFObject, NSString, NSMutableArray;
@protocol FMFSessionDelegate, HMFTimerDelegate, HMFLogging, OS_dispatch_queue;


#import "HMDFMFRequest.h"
#import "HMDFMF.h"

@interface HMDFMFHandler : HMFObject <FMFSessionDelegate, HMFTimerDelegate, HMFLogging>



@property (retain, nonatomic) HMDFMFRequest *currentFMFRequest; // ivar: _currentFMFRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDFMF *fmfStatus; // ivar: _fmfStatus
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *queries; // ivar: _queries
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)sharedHandler;
-(BOOL)isThisDesignatedFMFDevice;
-(NSUInteger)_computeFMFStatus:(id)arg0 ;
-(id)init;
-(void)_initiateFMFRequest;
-(void)_processDevices:(id)arg0 error:(id)arg1 ;
-(void)_respondToPendingRequests:(id)arg0 ;
-(void)fmfDevicesChanged;
-(void)homeDataLoaded:(id)arg0 ;
-(void)meDeviceChanged;
-(void)queryFMFStatusWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)sendNotification;
-(void)timerDidFire:(id)arg0 ;


@end


#endif