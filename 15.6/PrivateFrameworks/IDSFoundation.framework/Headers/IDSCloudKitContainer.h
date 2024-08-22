// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSCLOUDKITCONTAINER_H
#define IDSCLOUDKITCONTAINER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSCKContainer.h"
#import "IDSCloudKitKeyElectionStore.h"
#import "IDSCloudKitKeyValueStore.h"
#import "IDSCloudKitGroupServer.h"
#import "IDSCloudKitTransportLog.h"

@interface IDSCloudKitContainer : NSObject

@property (retain, nonatomic) IDSCKContainer *container; // ivar: _container
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) IDSCloudKitKeyElectionStore *keyElectionStore; // ivar: _keyElectionStore
@property (readonly, nonatomic) IDSCloudKitKeyValueStore *keyValueStore; // ivar: _keyValueStore
@property (readonly, nonatomic) IDSCloudKitGroupServer *privateGroupServer; // ivar: _privateGroupServer
@property (readonly, nonatomic) IDSCloudKitGroupServer *publicGroupServer; // ivar: _publicGroupServer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) IDSCloudKitTransportLog *transportLog; // ivar: _transportLog


-(id)initWithIdentifier:(id)arg0 queue:(id)arg1 ;


@end


#endif