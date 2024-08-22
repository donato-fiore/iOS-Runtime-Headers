// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLSCHOOLMODECOORDINATORCONFIGURATION_H
#define SCLSCHOOLMODECOORDINATORCONFIGURATION_H

@class NRDevice, NSURL, IDSDevice;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SCLUnlockHistoryPersistentStore.h"
#import "SCLSchoolModeServer.h"
#import "SCLTransportController.h"

@interface SCLSchoolModeCoordinatorConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) NRDevice *NRDevice; // ivar: _NRDevice
@property (retain, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (retain, nonatomic) SCLUnlockHistoryPersistentStore *historyStore; // ivar: _historyStore
@property (retain, nonatomic) IDSDevice *idsDevice; // ivar: _idsDevice
@property (nonatomic, getter=isManuallyManagedOnly) BOOL manuallyManagedOnly; // ivar: _manuallyManagedOnly
@property (nonatomic) BOOL sendsRemoteHistoryItems; // ivar: _sendsRemoteHistoryItems
@property (nonatomic) BOOL sendsRemoteScheduleSettings; // ivar: _sendsRemoteScheduleSettings
@property (retain, nonatomic) SCLSchoolModeServer *server; // ivar: _server
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (retain, nonatomic) SCLTransportController *transportController; // ivar: _transportController


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif