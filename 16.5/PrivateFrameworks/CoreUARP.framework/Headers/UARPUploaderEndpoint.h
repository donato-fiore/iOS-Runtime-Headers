// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPUPLOADERENDPOINT_H
#define UARPUPLOADERENDPOINT_H

@class NSMutableArray, NSArray;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "UARPAccessory.h"

@interface UARPUploaderEndpoint : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_layer2WatchdogTimer;
    NSObject<OS_dispatch_source> *_txWatchdogInfoTimer;
    NSObject<OS_dispatch_source> *_transportActiveTimer;
    ? _uarpEndpoint;
    uarpPlatformOptionsObj _uarpOptions;
    NSMutableArray *_txAssets;
    NSMutableArray *_rxAssets;
    NSMutableArray *_infoQuery;
}


@property (readonly) UARPAccessory *accessory; // ivar: _accessory
@property BOOL pendingApplyStagedAssets; // ivar: _pendingApplyStagedAssets
@property BOOL pendingRescindStagedAssets; // ivar: _pendingRescindStagedAssets
@property NSUInteger queriedProperty; // ivar: _queriedProperty
@property (readonly) NSArray *rxAssets;
@property (readonly) NSArray *txAssets;
@property (readonly) *uarpPlatformRemoteEndpoint uarpEndpoint;
@property (readonly) *uarpPlatformOptionsObj uarpOptions;
@property NSUInteger uarpVersion; // ivar: _uarpVersion


-(BOOL)firstQueryInfoProperty:(*NSUInteger)arg0 ;
-(id)findMatch:(id)arg0 ;
-(id)initWithUARPAccessory:(id)arg0 ;
-(void)addRxAsset:(id)arg0 ;
-(void)addTxAsset:(id)arg0 ;
-(void)cancelActiveTransportWatchdogTimer;
-(void)cancelLayer2WatchdogTimer;
-(void)cancelTxWatchdogInfoTimer;
-(void)dealloc;
-(void)handleActiveTransportWatchdogTimer:(id)arg0 ;
-(void)handleLayer2WatchdogTimer:(id)arg0 ;
-(void)handleTxWatchdogInfoTimer:(id)arg0 ;
-(void)qCancelActiveTransportWatchdogTimer;
-(void)qCancelTxWatchdogInfoTimer;
-(void)qcancelLayer2WatchdogTimer;
-(void)queueQueryInfoProperty:(NSUInteger)arg0 ;
-(void)rmvRxAsset:(id)arg0 ;
-(void)rmvTxAsset:(id)arg0 ;
-(void)setActiveTransportWatchdogTimer:(id)arg0 timeoutMS:(NSUInteger)arg1 ;
-(void)setLayer2WatchdogTimer:(id)arg0 timeoutMS:(NSUInteger)arg1 ;
-(void)setTxWatchdogInfoTimer:(id)arg0 timeoutMS:(NSUInteger)arg1 ;


@end


#endif