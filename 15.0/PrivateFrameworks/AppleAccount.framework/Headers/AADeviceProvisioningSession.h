// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AADEVICEPROVISIONINGSESSION_H
#define AADEVICEPROVISIONINGSESSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AADeviceProvisioningSession : NSObject {
    NSString *_dsid;
    NSUInteger _dsidNumber;
    *OpaqueCFHTTPCookieStorage _cookieStorageRef;
}




-(id)deviceProvisioningInfo;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithDSID:(id)arg0 ;
-(int)eraseProvisioning;
-(int)provisionDeviceWithData:(id)arg0 ;
-(int)synchronizeProvisioningWithData:(id)arg0 ;
-(void)addProvisioningInfoToAARequest:(id)arg0 ;
-(void)addProvisioningInfoToAARequest:(id)arg0 withFallback:(BOOL)arg1 ;
-(void)addProvisioningInfoToURLRequest:(id)arg0 sendEmptyValues:(BOOL)arg1 ;
-(void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage *)arg0 ;


@end


#endif