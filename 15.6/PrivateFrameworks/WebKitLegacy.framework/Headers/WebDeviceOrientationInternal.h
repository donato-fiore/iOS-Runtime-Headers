// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBDEVICEORIENTATIONINTERNAL_H
#define WEBDEVICEORIENTATIONINTERNAL_H


#import <Foundation/Foundation.h>


@interface WebDeviceOrientationInternal : NSObject {
    RefPtr<WebCore::DeviceOrientationData, WTF::RawPtrTraits<WebCore::DeviceOrientationData>, WTF::DefaultRefDerefTraits<WebCore::DeviceOrientationData>> m_orientation;
}




-(id)initWithCoreDeviceOrientation:(*void)arg0 ;


@end


#endif