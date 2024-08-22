// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERACLIPUPLOADER_H
#define HMDCAMERACLIPUPLOADER_H

@class HMFObject, NSUUID, NSString, NAFuture, HMCameraClipEncryptionManager, HMBLocalZone, NSMutableArray, NSDate;
@protocol HMFLogging, HMDCameraClipUploaderDelegate, HMDCameraClipUploaderFactory, OS_dispatch_queue;



@interface HMDCameraClipUploader : HMFObject <HMFLogging>



@property (readonly, copy) NSUUID *clipUUID; // ivar: _clipUUID
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraClipUploaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NAFuture *didCreateClipFuture; // ivar: _didCreateClipFuture
@property (readonly) HMCameraClipEncryptionManager *encryptionManager; // ivar: _encryptionManager
@property (readonly) NSObject<HMDCameraClipUploaderFactory> *factory; // ivar: _factory
@property (readonly) NSUInteger hash;
@property (readonly) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSMutableArray *operations; // ivar: _operations
@property (readonly) NSInteger quality; // ivar: _quality
@property (readonly, copy) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly) CGFloat targetFragmentDuration; // ivar: _targetFragmentDuration
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_isCancelledError:(id)arg0 ;
-(BOOL)hasAddedCreateClipOperation;
-(id)_addOperation:(id)arg0 finalizeClipOnError:(BOOL)arg1 ;
-(id)_createClip;
-(id)_createClipWithSignificantEvent:(id)arg0 homePresenceByPairingIdentity:(id)arg1 ;
-(id)addNotificationForSignificantEvent:(id)arg0 homePresenceByPairingIdentity:(id)arg1 ;
-(id)addVideoInitData:(id)arg0 ;
-(id)addVideoSegmentData:(id)arg0 duration:(CGFloat)arg1 timeOffsetWithinClip:(CGFloat)arg2 clipFinalizedBecauseMaxDurationExceeded:(BOOL)arg3 ;
-(id)attributeDescriptions;
-(id)createClip;
-(id)finish;
-(id)initWithClipUUID:(id)arg0 startDate:(id)arg1 targetFragmentDuration:(CGFloat)arg2 quality:(NSInteger)arg3 localZone:(id)arg4 workQueue:(id)arg5 logIdentifier:(id)arg6 ;
-(id)initWithClipUUID:(id)arg0 startDate:(id)arg1 targetFragmentDuration:(CGFloat)arg2 quality:(NSInteger)arg3 localZone:(id)arg4 workQueue:(id)arg5 logIdentifier:(id)arg6 encryptionManager:(id)arg7 factory:(id)arg8 ;
-(void)_handleFatalOperationFailure;
-(void)_operationCompleted:(id)arg0 finalizeOnError:(BOOL)arg1 future:(id)arg2 ;
-(void)_startNextOperation;


@end


#endif