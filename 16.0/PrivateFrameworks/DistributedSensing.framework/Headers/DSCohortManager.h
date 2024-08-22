// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSCOHORTMANAGER_H
#define DSCOHORTMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DSConsensusDataManager.h"
#import "DSXPCServer.h"

@interface DSCohortManager : NSObject {
    DSConsensusDataManager *_dataManager;
}


@property (retain, nonatomic) NSMutableDictionary *devices; // ivar: _devices
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) DSXPCServer *xpcDaemonServer; // ivar: _xpcDaemonServer


-(void)_deviceFound:(id)arg0 ;
-(void)_deviceLost:(id)arg0 ;
-(void)deviceFound:(id)arg0 ;
-(void)deviceLost:(id)arg0 ;
-(void)printConsensusData;
-(void)printConsensusDataFromWindowStart:(CGFloat)arg0 ToWindowEnd:(CGFloat)arg1 ;


@end


#endif