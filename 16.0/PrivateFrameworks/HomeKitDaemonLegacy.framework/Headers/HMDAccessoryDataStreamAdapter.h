// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYDATASTREAMADAPTER_H
#define HMDACCESSORYDATASTREAMADAPTER_H

@class HMFObject, NSString, NSDictionary;
@protocol HMFLogging, HMDDataStreamBulkSendListener, HMDDataStreamBulkSendSession, HMDAccessoryDataStreamAdapterDelegate, OS_dispatch_queue;


#import "HMDHAPAccessory.h"

@interface HMDAccessoryDataStreamAdapter : HMFObject <HMFLogging, HMDDataStreamBulkSendListener>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, getter=isBulkSendActive) BOOL bulkSendActive;
@property (retain) NSObject<HMDDataStreamBulkSendSession> *currentBulkSendSession; // ivar: _currentBulkSendSession
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDAccessoryDataStreamAdapterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL didBulkSendComplete; // ivar: _didBulkSendComplete
@property BOOL didBulkSendFail; // ivar: _didBulkSendFail
@property (readonly, copy) NSString *fileType; // ivar: _fileType
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *metadata; // ivar: _metadata
@property (copy) id *pendingOpenSessionCallback; // ivar: _pendingOpenSessionCallback
@property (readonly) NSString *reason; // ivar: _reason
@property (readonly, getter=isSessionOpenInProgress) BOOL sessionOpenInProgress;
@property (readonly) Class superclass;
@property BOOL transportReady; // ivar: _transportReady
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_handleFrame:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 fileType:(id)arg2 metadata:(id)arg3 reason:(id)arg4 ;
-(id)logIdentifier;
-(void)_bulkSendDidComplete;
-(void)_bulkSendDidFail;
-(void)_callPendingOpenSessionCallbackWithResult:(id)arg0 error:(id)arg1 ;
-(void)_handleAccessoryDidClose;
-(void)_openSession;
-(void)_setUpTransport;
-(void)accessory:(id)arg0 didReceiveBulkSessionCandidate:(id)arg1 ;
-(void)accessoryDidCloseDataStream:(id)arg0 ;
-(void)accessoryDidStartListening:(id)arg0 ;
-(void)callPendingOpenSessionCallbackWithResult:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)readData;
-(void)setUpWithCallback:(id)arg0 ;
-(void)shutDown;


@end


#endif