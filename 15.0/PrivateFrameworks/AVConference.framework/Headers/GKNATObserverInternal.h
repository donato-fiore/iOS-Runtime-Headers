// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKNATOBSERVERINTERNAL_H
#define GKNATOBSERVERINTERNAL_H

@class NSRecursiveLock, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;


#import "GKNATObserver.h"
#import "GKNATObserver_SCContext.h"

@interface GKNATObserverInternal : GKNATObserver {
    id *_delegate;
    *__SCDynamicStore _dynamicStore;
    NSRecursiveLock *_xNATCheck;
    int _lastReportedNATType;
    int _lastReportedCarrierNATType;
    int _lastReportedNonCarrierNATType;
    NSMutableDictionary *_interfaceInfoDictionary;
    BOOL _nonCarrierInterfacesOnly;
    BOOL _checkTCPAndSSL;
    BOOL _favorNonCarrier;
    BOOL _newCarrierType;
    BOOL _addInRangeFlag;
    BOOL _addCarrierFlag;
    BOOL _ignoreNatTypeCache;
    BOOL _ignoreCarrierBundle;
    int _NATCheckRetryCount;
    CGFloat _NATCheckRetryDelay;
    NSMutableDictionary *_currentNetworkNames;
    NSObject<OS_dispatch_queue> *_natCheckQueue;
    NSObject<OS_dispatch_queue> *_reportNATQueue;
    NSObject<OS_dispatch_group> *_natCheckGroup;
    NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;
    BOOL _fNATCheckQueued;
    BOOL _fNATCheckInProgress;
    GKNATObserver_SCContext *_sccontext;
    BOOL _hasNATCheckStarted;
    BOOL _hasNATCheckEnded;
}




-(BOOL)ensureNatCachePathExists;
-(id)copyNatTypeCache;
-(id)copyNatTypeCachePlistScheme;
-(id)copyNatTypeCache_OSXGamedScheme;
-(id)delegate;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)lookupCachedNATFlagsForNetwork:(id)arg0 ;
-(id)nameForNetworkWithIPPort:(struct tagIPPORT *)arg0 interfaceName:(id)arg1 ;
-(int)callHTTPTestFromIPPort:(struct tagIPPORT *)arg0 ipv6Prefix:(struct ? *)arg1 ToServer:(id)arg2 isSSL:(BOOL)arg3 ;
-(int)currentNATType;
-(int)natTypeForCommNATFlags:(unsigned int)arg0 isCarrier:(BOOL)arg1 ;
-(struct tagCommNATInfo *)callCommNATTestFromIPPort:(struct tagIPPORT *)arg0 ipv6Prefix:(struct ? *)arg1 ;
-(unsigned int)setCommNATFlags:(unsigned int)arg0 forInterface:(id)arg1 isCached:(BOOL)arg2 ;
-(unsigned int)setFlags:(unsigned int)arg0 forInterface:(id)arg1 isCached:(BOOL)arg2 isCachedKey:(id)arg3 mask:(unsigned int)arg4 ;
-(unsigned int)setSSLFlags:(unsigned int)arg0 forInterface:(id)arg1 isCached:(BOOL)arg2 ;
-(unsigned int)setTCPFlags:(unsigned int)arg0 forInterface:(id)arg1 isCached:(BOOL)arg2 ;
-(void)HTTPCheckWithIPPort:(struct tagIPPORT *)arg0 ipv6Prefix:(struct ? *)arg1 useCache:(BOOL)arg2 ;
-(void)HTTPSCheckWithIPPort:(struct tagIPPORT *)arg0 ipv6Prefix:(struct ? *)arg1 useCache:(BOOL)arg2 ;
-(void)NATCheckWithIPPort:(struct tagIPPORT *)arg0 ipv6Prefix:(struct ? *)arg1 useCache:(BOOL)arg2 ;
-(void)cacheNATFlags:(id)arg0 forNetwork:(id)arg1 ;
-(void)calculateSummmaryNATType:(*int)arg0 andCarrierNATType:(*int)arg1 andNonCarrierNATType:(*int)arg2 copyInterfaceInfoDictionary:(*id)arg3 ;
-(void)clearRetries;
-(void)dealloc;
-(void)registerForNetworkChanges;
-(void)release;
-(void)reportNATType;
-(void)setDelegate:(id)arg0 ;
-(void)shouldTryNATCheck;
-(void)tryNATCheckWithDelay:(CGFloat)arg0 ;
-(void)updateNatTypeCache:(id)arg0 ;
-(void)updateNatTypeCache_CachePlistScheme:(id)arg0 ;
-(void)updateNatTypeCache_OSXGamedScheme:(id)arg0 ;


@end


#endif