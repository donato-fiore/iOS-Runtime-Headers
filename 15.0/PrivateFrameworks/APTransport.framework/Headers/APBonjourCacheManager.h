// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APBONJOURCACHEMANAGER_H
#define APBONJOURCACHEMANAGER_H

@class NSMutableDictionary, NSMutableSet, NSString, CUCoalescer, CUSystemMonitor;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APBonjourCacheManager : NSObject {
    BOOL _cacheChanged;
    NSMutableDictionary *_cachedItems;
    NSMutableSet *_removedItems;
    NSMutableDictionary *_deviceMap;
    int _pairedPeersChangedToken;
    BOOL _pairedPeersGetting;
    NSMutableDictionary *_pairedPeersMap;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_networkSignature;
    CGFloat _networkSignatureWasValidAt;
    CUCoalescer *_writeCoaleser;
    CUSystemMonitor *_systemMonitor;
    *LogCategory _ucat;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *reportDeviceFoundHandler; // ivar: _reportDeviceFoundHandler
@property (copy, nonatomic) id *reportDeviceLostHandler; // ivar: _reportDeviceLostHandler
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(BOOL)_writeCachedItems:(id)arg0 ;
-(BOOL)deviceLost:(id)arg0 ;
-(id)_readCachedItems;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_addDeviceToCache:(id)arg0 pairedPeerInfo:(id)arg1 event:(NSInteger)arg2 ;
-(void)_cancelRetryGetPairedPeers;
-(void)_deviceFound:(id)arg0 altPairedInfo:(id)arg1 recheck:(BOOL)arg2 event:(NSInteger)arg3 ;
-(void)_flushCachedItems;
-(void)_invalidate;
-(void)_invalidated;
-(void)_networkSignatureChanged;
-(void)_pairedPeersChanged;
-(void)_recheckDevices:(NSInteger)arg0 ;
-(void)_refreshCachedItems;
-(void)_refreshOrRemoveCachedItem:(id)arg0 ;
-(void)_removeDuplicateCachedItemsIfFound:(NSUInteger)arg0 identifier:(id)arg1 serialNumber:(id)arg2 manufacturer:(id)arg3 ;
-(void)_replaceIfnameFromDNSString:(id)arg0 ;
-(void)_reportCachedItemLost:(id)arg0 event:(NSInteger)arg1 ;
-(void)_reportCachedItemsFound:(NSInteger)arg0 ;
-(void)_reportCachedItemsLost:(NSInteger)arg0 ;
-(void)_sanitizeDNSStrings:(id)arg0 ;
-(void)_startRetryGetPairedPeersTimer;
-(void)_updateCachedDeviceInfoWhenRealDeviceIsFound:(id)arg0 event:(NSInteger)arg1 ;
-(void)_updateLastSeenTimestamp:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)cacheHKPeerIfNeeded:(id)arg0 pairedPeerInfo:(id)arg1 ;
-(void)dealloc;
-(void)deviceFound:(id)arg0 ;
-(void)forceReportCachedDevices;
-(void)invalidate;


@end


#endif