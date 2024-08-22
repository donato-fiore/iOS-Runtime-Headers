// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBULLETINBOARDNOTIFICATIONSERVICEGROUP_H
#define HMBULLETINBOARDNOTIFICATIONSERVICEGROUP_H

@class NSSet, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMBulletinBoardNotification.h"
#import "_HMContext.h"

@interface HMBulletinBoardNotificationServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSSet *associatedServiceUUIDs; // ivar: _associatedServiceUUIDs
@property (retain, nonatomic) NSArray *associatedServices; // ivar: _associatedServices
@property (readonly, weak, nonatomic) HMBulletinBoardNotification *bulletinBoardNotification; // ivar: _bulletinBoardNotification
@property (retain, nonatomic) NSSet *cameraProfileUUIDs; // ivar: _cameraProfileUUIDs
@property (retain, nonatomic) NSArray *cameraProfiles; // ivar: _cameraProfiles
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *logID; // ivar: _logID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *targetUUID; // ivar: _targetUUID
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(void)__configureWithContext:(id)arg0 ;
-(void)_callServiceGroupUpdate;
-(void)_findObjects;
-(void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_requestServiceGroup;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleConfigureNotification:(id)arg0 ;


@end


#endif