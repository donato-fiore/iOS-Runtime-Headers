// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSSCANMANAGER_H
#define DSSCANMANAGER_H

@class CBDiscovery;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DSScanManager : NSObject {
    NSUInteger _bleDiscoveryFlags;
    CBDiscovery *_bleDiscovery;
}


@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) NSUInteger dsScanFlags; // ivar: _dsScanFlags


-(BOOL)_shouldUpdateDiscovery;
-(void)_deviceFound:(id)arg0 ;
-(void)_deviceLost:(id)arg0 ;
-(void)_updateBLEDiscoveryFlags;
-(void)startScanning;
-(void)stopScanning;


@end


#endif