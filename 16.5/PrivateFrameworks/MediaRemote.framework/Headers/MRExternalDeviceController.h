// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MREXTERNALDEVICECONTROLLER_H
#define MREXTERNALDEVICECONTROLLER_H

@class NSNetServiceBrowser, NSMutableSet, NSString;
@protocol NSNetServiceBrowserDelegate, NSNetServiceDelegate, OS_dispatch_queue, MRExternalDeviceControllerDelegate;

#import <Foundation/Foundation.h>


@interface MRExternalDeviceController : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableSet *_discoveredDevices;
    NSMutableSet *_resolvingServices;
    NSMutableSet *_monitoringServices;
}


@property (readonly, nonatomic) NSString *bonjourServiceType; // ivar: _bonjourServiceType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRExternalDeviceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDiscovering) BOOL discovering; // ivar: _discovering
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)externalDeviceClass;
-(BOOL)_isManagedConfigIDAllowed:(id)arg0 ;
-(id)initWithBonjourServiceType:(id)arg0 ;
-(void)beginDiscovery;
-(void)dealloc;
-(void)endDiscovery;
-(void)netService:(id)arg0 didUpdateTXTRecordData:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg0 ;


@end


#endif