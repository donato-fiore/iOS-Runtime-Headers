// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEPHYSICALINPUTSWITCHELEMENTCONFIGURATION_H
#define _GCDEVICEPHYSICALINPUTSWITCHELEMENTCONFIGURATION_H

@class GCDevicePhysicalInputElementConfiguration;



@interface _GCDevicePhysicalInputSwitchElementConfiguration : GCDevicePhysicalInputElementConfiguration {
    BOOL _sequential;
    BOOL _canWrap;
    NSInteger _gamepadEventPositionField;
    _NSRange _positionRange;
}




-(id)init;


@end


#endif