// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSYSERVICESYNCSESSION_H
#define PSYSERVICESYNCSESSION_H

@class NRDevice, NSUUID;
@protocol OS_dispatch_queue, PSYServiceSyncSessionDelegate;

#import <Foundation/Foundation.h>

#import "PSYSyncCoordinator.h"

@interface PSYServiceSyncSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isComplete;
    BOOL _supportsMigrationSync;
}


@property (readonly, nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (weak, nonatomic) NSObject<PSYServiceSyncSessionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NRDevice *pairedDevice; // ivar: _pairedDevice
@property (retain, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) NSUInteger switchID; // ivar: _switchID
@property (weak, nonatomic) PSYSyncCoordinator *syncCoordinator; // ivar: _syncCoordinator
@property (nonatomic) NSUInteger syncSessionType; // ivar: _syncSessionType


-(id)initWithQueue:(id)arg0 supportsMigrationSync:(BOOL)arg1 ;
-(void)reportProgress:(CGFloat)arg0 ;
-(void)syncDidComplete;
-(void)syncDidCompleteSending;
-(void)syncDidFailWithError:(id)arg0 ;


@end


#endif