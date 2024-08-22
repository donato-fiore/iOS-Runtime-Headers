// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERDISCOVERYBONJOUR_H
#define HAP2ACCESSORYSERVERDISCOVERYBONJOUR_H

@class NSMutableArray, NSString;
@protocol HAP2AccessoryServerDiscovery, OS_nw_browser, HAP2AccessoryServerDiscoveryDelegate, OS_dispatch_queue;


#import "HAP2LoggingObject.h"
#import "HAP2PropertyLock.h"

@interface HAP2AccessoryServerDiscoveryBonjour : HAP2LoggingObject <HAP2AccessoryServerDiscovery>



@property (retain, nonatomic) NSMutableArray *browseResults; // ivar: _browseResults
@property (retain, nonatomic) NSObject<OS_nw_browser> *browser; // ivar: _browser
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerDiscoveryDelegate> *delegate; // ivar: _delegate
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
-(void)_handleBrowseResults:(id)arg0 ;
-(void)_handleBrowseResultsChange:(id)arg0 curent:(id)arg1 batchComplete:(BOOL)arg2 ;
-(void)_handleStateChange:(int)arg0 error:(id)arg1 ;
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