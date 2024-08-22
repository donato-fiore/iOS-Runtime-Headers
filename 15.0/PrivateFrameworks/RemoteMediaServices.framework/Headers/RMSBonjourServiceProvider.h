// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSBONJOURSERVICEPROVIDER_H
#define RMSBONJOURSERVICEPROVIDER_H

@class NSMutableDictionary, NSString, NSNetServiceBrowser;
@protocol RMSServiceProvider, NSNetServiceBrowserDelegate, NSNetServiceDelegate, RMSServiceProviderDelegate;

#import <Foundation/Foundation.h>


@interface RMSBonjourServiceProvider : NSObject <RMSServiceProvider, NSNetServiceBrowserDelegate, NSNetServiceDelegate>

 {
    NSMutableDictionary *_services;
    NSMutableDictionary *_cache;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RMSServiceProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNetServiceBrowser *netServiceBrowser; // ivar: _netServiceBrowser
@property (readonly, nonatomic) NSString *searchDomain;
@property (readonly, nonatomic) NSString *searchScope;
@property (readonly, nonatomic) NSString *searchType;
@property (readonly, nonatomic) NSInteger serviceDiscoverySource;
@property (readonly) Class superclass;


-(NSInteger)serviceFlagsFromTXTDictionary:(id)arg0 ;
-(NSInteger)serviceTypeFromTXTDictionary:(id)arg0 ;
-(id)_identifierForNetService:(id)arg0 ;
-(id)_searchString;
-(id)_valueForTXTRecordKey:(id)arg0 inTXTDictionary:(id)arg1 ;
-(id)init;
-(void)_updateCacheWithService:(id)arg0 identifier:(id)arg1 ;
-(void)_updateService:(id)arg0 withNetService:(id)arg1 txtData:(id)arg2 ;
-(void)beginDiscovery;
-(void)dealloc;
-(void)endDiscovery;
-(void)netService:(id)arg0 didNotResolve:(id)arg1 ;
-(void)netService:(id)arg0 didUpdateTXTRecordData:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg0 ;


@end


#endif