// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSMUTABLEHIDKEYBOARDDEVICEPROPERTIES_H
#define BKSMUTABLEHIDKEYBOARDDEVICEPROPERTIES_H

@class NSString;


#import "BKSHIDKeyboardDeviceProperties.h"

@interface BKSMutableHIDKeyboardDeviceProperties : BKSHIDKeyboardDeviceProperties

@property (nonatomic) BOOL capsLockKeyHasLanguageSwitchLabel;
@property (nonatomic) unsigned char countryCode;
@property (nonatomic) BOOL globeKeyLabelHasGlobeSymbol;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *layout;
@property (nonatomic) unsigned int standardType;
@property (nonatomic) NSInteger subinterfaceID;
@property (copy, nonatomic) NSString *transport;




@end


#endif