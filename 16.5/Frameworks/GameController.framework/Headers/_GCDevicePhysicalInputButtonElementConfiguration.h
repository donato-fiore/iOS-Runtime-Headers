// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEPHYSICALINPUTBUTTONELEMENTCONFIGURATION_H
#define _GCDEVICEPHYSICALINPUTBUTTONELEMENTCONFIGURATION_H

@class GCDevicePhysicalInputElementConfiguration;



@interface _GCDevicePhysicalInputButtonElementConfiguration : GCDevicePhysicalInputElementConfiguration {
    BOOL _analog;
    float _pressedThreshold;
    NSInteger _gamepadEventPressedValueField;
}




-(id)init;


@end


#endif