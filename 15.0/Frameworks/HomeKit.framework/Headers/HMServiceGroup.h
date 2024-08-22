// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSERVICEGROUP_H
#define HMSERVICEGROUP_H

@class HMFUnfairLock, NSUUID, NSString, NSArray;
@protocol HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMApplicationData.h"
#import "_HMContext.h"
#import "HMMutableArray.h"
#import "HMHome.h"

@interface HMServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData>

 {
    HMFUnfairLock *_lock;
}


@property (retain, nonatomic) HMApplicationData *applicationData; // ivar: _applicationData
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (retain, nonatomic) HMMutableArray *currentServices; // ivar: _currentServices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(id)_findService:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 ;
-(id)logIdentifier;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_addService:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleServiceAddedNotification:(id)arg0 ;
-(void)_handleServiceGroupRenamedNotification:(id)arg0 ;
-(void)_handleServiceRemovedNotification:(id)arg0 ;
-(void)_recomputeAssistantIdentifier;
-(void)_registerNotificationHandlers;
-(void)_removeService:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeServices:(id)arg0 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)addService:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recomputeAssistantIdentifier;
-(void)removeService:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif