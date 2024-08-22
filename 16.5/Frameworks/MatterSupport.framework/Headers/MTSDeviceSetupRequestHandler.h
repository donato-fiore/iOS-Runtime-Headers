// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPREQUESTHANDLER_H
#define MTSDEVICESETUPREQUESTHANDLER_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface MTSDeviceSetupRequestHandler : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)configureDeviceWithName:(id)arg0 room:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchRoomsInHome:(id)arg0 completionHandler:(id)arg1 ;
-(void)pairDeviceInHome:(id)arg0 onboardingPayload:(id)arg1 uuid:(id)arg2 completionHandler:(id)arg3 ;
-(void)selectThreadNetworkFromScanResults:(id)arg0 completionHandler:(id)arg1 ;
-(void)selectWiFiNetworkFromScanResults:(id)arg0 completionHandler:(id)arg1 ;
-(void)validateDeviceCredential:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif