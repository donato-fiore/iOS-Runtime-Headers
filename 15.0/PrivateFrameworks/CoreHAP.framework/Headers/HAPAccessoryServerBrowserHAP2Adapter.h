// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPACCESSORYSERVERBROWSERHAP2ADAPTER_H
#define HAPACCESSORYSERVERBROWSERHAP2ADAPTER_H

@class NSMutableDictionary, NSString;
@protocol HAP2AccessoryServerBrowserDelegate, HAPAccessoryServerBrowserDelegate, OS_dispatch_queue, HAP2AccessoryServerBrowserPrivate;


#import "HAPAccessoryServerBrowser.h"
#import "HAP2PropertyLock.h"

@interface HAPAccessoryServerBrowserHAP2Adapter : HAPAccessoryServerBrowser <HAP2AccessoryServerBrowserDelegate>

 {
    id<HAPAccessoryServerBrowserDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_discoveredServers;
    id<HAP2AccessoryServerBrowserPrivate> *_browser;
    HAP2PropertyLock *_propertyLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isPaired:(id)arg0 ;
-(NSInteger)linkType;
-(id)initWithHAP2Browser:(id)arg0 queue:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 storage:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg0 didDiscoverPairedAccessoryServer:(id)arg1 withCompletion:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 didDiscoverUnpairedAccessoryServer:(id)arg1 withCompletion:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 didLosePairedAccessoryServer:(id)arg1 error:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 didLoseUnpairedAccessoryServer:(id)arg1 error:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 didStartDiscoveringWithError:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg0 didStopDiscoveringWithError:(id)arg1 ;
-(void)deRegisterAccessoryWithIdentifier:(id)arg0 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)matchAccessoryServerWithSetupID:(id)arg0 serverIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)registerPairedAccessoryWithIdentifier:(id)arg0 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)startConfirmingPairedAccessoryReachability;
-(void)startDiscoveringAccessoryServers;
-(void)stopConfirmingPairedAccessoryReachability;
-(void)stopDiscoveringAccessoryServers;


@end


#endif