// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMREMOTELOGINANISETTEDATAPROVIDER_H
#define HMREMOTELOGINANISETTEDATAPROVIDER_H

@class NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, AKAnisetteServiceProtocol, NSSecureCoding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDelegateCaller.h"

@interface HMRemoteLoginAnisetteDataProvider : NSObject <HMFMessageReceiver, AKAnisetteServiceProtocol, NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDelegateCaller *delegateCaller; // ivar: _delegateCaller
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_configureClientQueue:(id)arg0 delegateCaller:(id)arg1 msgDispatcher:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)eraseAnisetteWithCompletion:(id)arg0 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)legacyAnisetteDataForDSID:(id)arg0 withCompletion:(id)arg1 ;
-(void)provisionAnisetteWithCompletion:(id)arg0 ;
-(void)syncAnisetteWithSIMData:(id)arg0 completion:(id)arg1 ;


@end


#endif