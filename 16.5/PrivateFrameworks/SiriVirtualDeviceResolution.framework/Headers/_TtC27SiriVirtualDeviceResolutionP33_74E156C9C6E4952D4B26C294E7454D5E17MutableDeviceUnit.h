// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC27SIRIVIRTUALDEVICERESOLUTIONP33_74E156C9C6E4952D4B26C294E7454D5E17MUTABLEDEVICEUNIT_H
#define _TTC27SIRIVIRTUALDEVICERESOLUTIONP33_74E156C9C6E4952D4B26C294E7454D5E17MUTABLEDEVICEUNIT_H

@class SwiftObject, NSString;
@protocol _TtP27SiriVirtualDeviceResolution18DeviceUnitMutating_;



@interface _TtC27SiriVirtualDeviceResolutionP33_74E156C9C6E4952D4B26C294E7454D5E17MutableDeviceUnit : SwiftObject <_TtP27SiriVirtualDeviceResolution18DeviceUnitMutating_>

 {
    ? name;
    ? roomName;
    ? mediaRouteIdentifier;
    ? homeKitAccessoryIdentifier;
}


@property (nonatomic, copy) NSString *homeKitAccessoryIdentifier;
@property (nonatomic) BOOL isCommunalDevice; // ivar: isCommunalDevice
@property (nonatomic, copy) NSString *mediaRouteIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) NSInteger proximity; // ivar: proximity
@property (nonatomic, copy) NSString *roomName;




@end


#endif