// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERACLIPAPPENDSTREAMINGASSETOPERATION_H
#define HMDCAMERACLIPAPPENDSTREAMINGASSETOPERATION_H

@class NSData, NSString, HMCameraClipEncryptionManager, HMFTimer;
@protocol HMFTimerDelegate;


#import "HMDCameraClipOperation.h"
#import "HMDCameraClipSegmentMetadata.h"

@interface HMDCameraClipAppendStreamingAssetOperation : HMDCameraClipOperation <HMFTimerDelegate>



@property (readonly) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager; // ivar: _encryptionManager
@property (readonly) NSUInteger hash;
@property (readonly) HMDCameraClipSegmentMetadata *metadata; // ivar: _metadata
@property (retain) HMFTimer *retryTimer; // ivar: _retryTimer
@property (readonly) Class superclass;


+(BOOL)shouldRetry;
+(id)logCategory;
+(id)streamingAssetPropertyName;
-(id)_retryDelayForError:(id)arg0 ;
-(id)_updateClipModel:(id)arg0 usingStreamingAsset:(id)arg1 ;
-(id)attributeDescriptions;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 data:(id)arg2 metadata:(id)arg3 encryptionManager:(id)arg4 ;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 data:(id)arg2 metadata:(id)arg3 encryptionManager:(id)arg4 dataSource:(id)arg5 ;
-(void)cancelWithError:(id)arg0 ;
-(void)finish;
-(void)main;
-(void)timerDidFire:(id)arg0 ;


@end


#endif