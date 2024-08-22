// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONMESSENGER_H
#define MTSDEVICESETUPEXTENSIONMESSENGER_H

@class NSURL, NSString, NSMutableSet;
@protocol HMFLogging, MTSDeviceSetupExtension;

#import <Foundation/Foundation.h>


@interface MTSDeviceSetupExtensionMessenger : NSObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSURL *containingAppBundleURL; // ivar: _containingAppBundleURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<MTSDeviceSetupExtension> *extension; // ivar: _extension
@property (copy) id *extensionFetchHandler; // ivar: _extensionFetchHandler
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableSet *pendingRequests; // ivar: _pendingRequests
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)startWithError:(*id)arg0 ;
-(id)dequeuePendingRequestWithIdentifier:(id)arg0 ;
-(id)initWithContainingAppBundleURL:(id)arg0 ;
-(void)_failRequestWithIdentifier:(id)arg0 withError:(id)arg1 ;
-(void)_finishRequestWithIdentifier:(id)arg0 withExtensionItem:(id)arg1 ;
-(void)addPendingRequest:(id)arg0 ;
-(void)configureDeviceWithName:(id)arg0 room:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchRoomsInHome:(id)arg0 completionHandler:(id)arg1 ;
-(void)pairDeviceInHome:(id)arg0 onboardingPayload:(id)arg1 uuid:(id)arg2 completionHandler:(id)arg3 ;
-(void)selectThreadNetworkFromScanResults:(id)arg0 completionHandler:(id)arg1 ;
-(void)selectWiFiNetworkFromScanResults:(id)arg0 completionHandler:(id)arg1 ;
-(void)validateDeviceCredential:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif