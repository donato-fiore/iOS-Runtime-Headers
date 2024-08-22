// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVBONJOURSERVICECLIENT_H
#define AVBONJOURSERVICECLIENT_H

@class NSMutableSet, NSMutableDictionary, NSString, NSNetServiceBrowser;
@protocol NSNetServiceBrowserDelegate, NSNetServiceDelegate, AVBonjourServiceClientDelegate;

#import <Foundation/Foundation.h>


@interface AVBonjourServiceClient : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

 {
    BOOL _discovering;
    NSMutableSet *_resolvedServices;
    NSMutableSet *_resolvingServices;
    NSMutableSet *_monitoringServices;
    NSMutableDictionary *_netServiceIdentifierToChannel;
    id *_observeAirPlayVideoActiveDidChange;
    id *_observeMRDeviceInfoDidChange;
}


@property (nonatomic) *void airplayDeviceRef; // ivar: _airplayDeviceRef
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVBonjourServiceClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNetServiceBrowser *netServiceBrowser; // ivar: _netServiceBrowser
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(id)dictionaryFromTXTRecordData:(id)arg0 ;
-(BOOL)_isServiceForCurrentAirPlayDevice:(id)arg0 ;
-(id)airTransportSenderForNetService:(id)arg0 ;
-(id)identifierForNetService:(id)arg0 ;
-(id)initWithNetServiceType:(id)arg0 ;
-(void)_updatedAirPlayPairedDeviceAsync;
-(void)beginDiscovery;
-(void)dealloc;
-(void)endDiscovery;
-(void)netService:(id)arg0 didNotResolve:(id)arg1 ;
-(void)netService:(id)arg0 didUpdateTXTRecordData:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didNotSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg0 ;
-(void)netServiceDidStop:(id)arg0 ;
-(void)netServiceWillResolve:(id)arg0 ;


@end


#endif