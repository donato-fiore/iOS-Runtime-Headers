// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTPINGSUBSCRIBERMANAGER_H
#define BLTPINGSUBSCRIBERMANAGER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, BLTBulletinDistributorSubscriberDeviceDelegate;

#import <Foundation/Foundation.h>

#import "BLTBulletinDistributorSubscriberList.h"

@interface BLTPingSubscriberManager : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<BLTBulletinDistributorSubscriberDeviceDelegate> *deviceDelegate; // ivar: _deviceDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) BLTBulletinDistributorSubscriberList *subscribers; // ivar: _subscribers
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithDeviceDelegate:(id)arg0 ;
-(void)_loadPingSubscriberBundles:(id)arg0 ;


@end


#endif