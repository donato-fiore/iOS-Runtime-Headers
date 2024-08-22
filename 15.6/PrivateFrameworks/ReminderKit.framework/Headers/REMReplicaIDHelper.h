// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMREPLICAIDHELPER_H
#define REMREPLICAIDHELPER_H

@class NSUUID, NSString;
@protocol REMReplicaManagerClient, REMReplicaManagerProviding, REMReplicaIDHelperOwner, REMReplicaClockProviding;

#import <Foundation/Foundation.h>

#import "REMReplicaIDSource.h"
#import "REMReplicaManager.h"

@interface REMReplicaIDHelper : NSObject <REMReplicaManagerClient>



@property (retain, nonatomic) NSUUID *acquiredReplicaUUID; // ivar: _acquiredReplicaUUID
@property (readonly, nonatomic) NSString *crdtID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<REMReplicaManagerProviding> *lazilyCachedReplicaManagerProvider; // ivar: _lazilyCachedReplicaManagerProvider
@property (weak, nonatomic) NSObject<REMReplicaIDHelperOwner> *owner; // ivar: _owner
@property (retain, nonatomic) NSObject<REMReplicaClockProviding> *replicaClockProvider; // ivar: _replicaClockProvider
@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource; // ivar: _replicaIDSource
@property (readonly, nonatomic) REMReplicaManager *replicaManager;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (readonly) Class superclass;


+(id)nonEditingReplicaUUID;
-(id)clockElementListForReplicaUUID:(id)arg0 ;
-(id)initWithReplicaIDSource:(id)arg0 owner:(id)arg1 replicaClockProvider:(id)arg2 ;
-(void)dealloc;
-(void)didCopy;
-(void)didSerialize;
-(void)willEdit;


@end


#endif