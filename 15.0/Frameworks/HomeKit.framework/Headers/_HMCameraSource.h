// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMCAMERASOURCE_H
#define _HMCAMERASOURCE_H

@class HMFUnfairLock, NSNumber, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMCameraView.h"
#import "_HMContext.h"

@interface _HMCameraSource : NSObject <HMFMessageReceiver>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, copy, nonatomic) NSNumber *aspectRatio; // ivar: _aspectRatio
@property (weak, nonatomic) HMCameraView *cameraView; // ivar: _cameraView
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // ivar: _profileUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly, copy, nonatomic) NSNumber *slotIdentifier; // ivar: _slotIdentifier
@property (readonly) Class superclass;


-(id)initWithSessionID:(id)arg0 slotIdentifier:(id)arg1 context:(id)arg2 profileUniqueIdentifier:(id)arg3 aspectRatio:(id)arg4 ;


@end


#endif