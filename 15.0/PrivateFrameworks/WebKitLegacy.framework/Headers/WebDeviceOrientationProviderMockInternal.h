// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBDEVICEORIENTATIONPROVIDERMOCKINTERNAL_H
#define WEBDEVICEORIENTATIONPROVIDERMOCKINTERNAL_H


#import <Foundation/Foundation.h>


@interface WebDeviceOrientationProviderMockInternal : NSObject {
    unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> m_core;
}




-(id)init;
-(id)lastOrientation;
-(void)setController:(struct DeviceOrientationController *)arg0 ;
-(void)setOrientation:(id)arg0 ;
-(void)startUpdating;
-(void)stopUpdating;


@end


#endif