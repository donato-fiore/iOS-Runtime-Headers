// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ACCESSORYSERVERDISCOVERYBONJOURLEGACY_H
#define HAP2ACCESSORYSERVERDISCOVERYBONJOURLEGACY_H

@class CUBonjourBrowser, NSString;
@protocol HAP2AccessoryServerDiscovery, HAP2AccessoryServerDiscoveryDelegate, OS_dispatch_queue;


#import "HAP2LoggingObject.h"
#import "HAP2PropertyLock.h"

@interface HAP2AccessoryServerDiscoveryBonjourLegacy : HAP2LoggingObject <HAP2AccessoryServerDiscovery>



@property (readonly, nonatomic) CUBonjourBrowser *browser; // ivar: _browser
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerDiscoveryDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDiscovering) BOOL discovering; // ivar: _discovering
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock; // ivar: _propertyLock
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)new;
-(id)init;
-(id)initWithLocalDomainAndServiceType:(id)arg0 ;
-(id)initWithServiceType:(id)arg0 domain:(id)arg1 ;
-(void)_handleBrowserStopped:(id)arg0 ;
-(void)_handleDeviceFoundOrChanged:(id)arg0 ;
-(void)_handleDeviceLost:(id)arg0 ;
-(void)_reconfirmAccessory:(id)arg0 ;
-(void)_startBrowser;
-(void)_startDiscovering;
-(void)_stopBrowser;
-(void)_stopDiscovering;
-(void)dealloc;
-(void)reconfirmAccessory:(id)arg0 ;
-(void)startDiscovering;
-(void)stopDiscovering;


@end


#endif