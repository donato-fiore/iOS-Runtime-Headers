// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPEERINTERNAL_H
#define GKPEERINTERNAL_H

@class NSString;
@protocol GKTableCleanupWhenRemoved;

#import <Foundation/Foundation.h>

#import "GKSessionInternal.h"

@interface GKPeerInternal : NSObject <GKTableCleanupWhenRemoved>

 {
    *id _addrList;
    *unsigned int _interfaceList;
    ? _lookupServiceList;
    int _lookupServiceCount;
    int _lookupServiceSize;
}


@property (getter=isBusy) BOOL busy; // ivar: _isBusy
@property CGFloat connectTimeout; // ivar: _connectTimeout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property BOOL moreResolvesComing; // ivar: _moreResolvesComing
@property BOOL needsToTimeout; // ivar: _needsToTimeout
@property (readonly) unsigned int pid; // ivar: _pid
@property *_DNSServiceRef_t resolveService; // ivar: _resolveService
@property int serviceCount; // ivar: _serviceCount
@property (readonly) NSString *serviceName; // ivar: _serviceName
@property unsigned int servicePort; // ivar: _servicePort
@property (retain, nonatomic) GKSessionInternal *session; // ivar: _session
@property (readonly) Class superclass;
@property *_DNSServiceRef_t txtRecordService; // ivar: _txtRecordService


+(?)freeLookupList:(?)arg0 andAddrList:(?)arg1 andInterfaceListcount;
-(?)copyLookupListcount;
-(?)removeAndReturnLookupList:(?)arg0 andAddrList:(?)arg1 andInterfaceListcount;
-(BOOL)containsLookupService:(struct _DNSServiceRef_t *)arg0 ;
-(BOOL)tryDetruncateDisplayName:(id)arg0 ;
-(id)initWithPID:(unsigned int)arg0 displayName:(id)arg1 serviceName:(id)arg2 ;
-(int)usableAddrs;
-(void)addLookup:(struct _DNSServiceRef_t *)arg0 ;
-(void)cleanupForGKTable:(id)arg0 ;
-(void)clearResolving;
-(void)dealloc;
-(void)setAddr:(struct sockaddr_in *)arg0 interface:(unsigned int)arg1 forLookupService:(struct _DNSServiceRef_t *)arg2 ;
-(void)stopResolving;
-(void)stopTXTRecordMonitoring;


@end


#endif