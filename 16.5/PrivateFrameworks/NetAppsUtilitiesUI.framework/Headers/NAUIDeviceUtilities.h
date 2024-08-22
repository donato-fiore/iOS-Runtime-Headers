// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NAUIDEVICEUTILITIES_H
#define NAUIDEVICEUTILITIES_H


#import <Foundation/Foundation.h>


@interface NAUIDeviceUtilities : NSObject



+(BOOL)hasOrbCapability;
+(BOOL)naui_isPad;
+(BOOL)naui_isUsingLandscapeOrientation;
+(BOOL)naui_shouldUseLargeiPadLayout;
+(BOOL)naui_shouldUseLargeiPadLayoutForSize:(struct CGSize )arg0 ;
+(CGFloat)mainScreenScale;
+(id)localizedProductName;
+(id)operatingSystemName;
+(id)productBuildVersion;
+(id)productClass;
+(id)productHardwareModel;
+(id)productHardwareModelName;
+(id)productType;
+(id)productVersion;
+(id)uniqueDeviceIdentifier;
+(int)deviceClass;
-(id)init;


@end


#endif