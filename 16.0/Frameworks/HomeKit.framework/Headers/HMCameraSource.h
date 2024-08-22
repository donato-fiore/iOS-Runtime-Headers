// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERASOURCE_H
#define HMCAMERASOURCE_H

@class NSString, NSUUID, NSNumber;
@protocol HMFMessageReceiver, HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMCameraView.h"
#import "_HMContext.h"

@interface HMCameraSource : NSObject <HMFMessageReceiver, HMFLogging>



@property (readonly) CGFloat aspectRatio; // ivar: _aspectRatio
@property (weak) HMCameraView *cameraView; // ivar: _cameraView
@property (retain) _HMContext *context; // ivar: _context
@property (readonly) CGFloat currentAspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *profileUniqueIdentifier; // ivar: _profileUniqueIdentifier
@property (readonly, copy) NSNumber *slotIdentifier; // ivar: _slotIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithProfileUniqueIdentifier:(id)arg0 slotIdentifier:(id)arg1 aspectRatio:(id)arg2 ;
-(id)logIdentifier;
-(void)fillSlotWithCompletionHandler:(id)arg0 ;


@end


#endif