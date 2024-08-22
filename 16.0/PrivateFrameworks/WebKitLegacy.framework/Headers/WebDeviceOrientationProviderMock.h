// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBDEVICEORIENTATIONPROVIDERMOCK_H
#define WEBDEVICEORIENTATIONPROVIDERMOCK_H

@class NSString;
@protocol WebDeviceOrientationProviderMock, WebDeviceOrientationProvider;

#import <Foundation/Foundation.h>

#import "WebDeviceOrientationProviderMockInternal.h"

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProviderMock, WebDeviceOrientationProvider>

 {
    WebDeviceOrientationProviderMockInternal *m_internal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)shared;
-(id)init;
-(id)lastOrientation;
-(void)dealloc;
-(void)setController:(struct DeviceOrientationController *)arg0 ;
-(void)setOrientation:(id)arg0 ;
-(void)startUpdating;
-(void)stopUpdating;


@end


#endif