// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMCAMERACONTROL_H
#define _HMCAMERACONTROL_H

@class HMFUnfairLock, NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMCameraProfile.h"
#import "_HMContext.h"
#import "HMHome.h"
#import "HMService.h"

@interface _HMCameraControl : NSObject <HMFLogging, HMFMessageReceiver>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, weak, nonatomic) _HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // ivar: _profileUniqueIdentifier
@property (readonly, nonatomic) HMService *service; // ivar: _service
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithCameraProfile:(id)arg0 service:(id)arg1 profileUniqueIdentifier:(id)arg2 ;
-(id)logIdentifier;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_registerNotificationHandlers;


@end


#endif