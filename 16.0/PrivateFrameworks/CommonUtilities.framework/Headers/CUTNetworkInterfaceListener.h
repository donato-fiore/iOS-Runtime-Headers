// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUTNETWORKINTERFACELISTENER_H
#define CUTNETWORKINTERFACELISTENER_H

@class NSHashTable, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUTNetworkInterfaceListener : NSObject {
    *void _dynamicStore;
    NSHashTable *_delegateMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}


@property (readonly, nonatomic) NSSet *IPv4Addresses; // ivar: _IPv4Addresses
@property (readonly, nonatomic) NSSet *IPv6Addresses; // ivar: _IPv6Addresses
@property (readonly, nonatomic) int cellState; // ivar: _cellState
@property (readonly, nonatomic) int wifiState; // ivar: _wifiState


+(id)sharedInstance;
-(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_handleNetworkChange:(id)arg0 ;
-(void)_notifyDelegatesOfAddressChange:(id)arg0 isIPv6:(BOOL)arg1 ;
-(void)_notifyDelegatesOfCellChange:(int)arg0 ;
-(void)_notifyDelegatesOfWifiChange:(int)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg0 ;


@end


#endif