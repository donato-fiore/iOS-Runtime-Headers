// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPLATFORMCONTROLLER_H
#define SBPLATFORMCONTROLLER_H

@class NSDictionary, NSOrderedSet, NSString;

#import <Foundation/Foundation.h>


@interface SBPlatformController : NSObject {
    NSDictionary *_defaultIconState;
    NSOrderedSet *_defaultIconStateDisplayIdentifiers;
    NSString *_localizedDeviceName;
    BOOL _internalInstall;
    BOOL _carrierInstall;
    NSInteger _medusaCapabilities;
}




+(id)sharedInstance;
-(BOOL)isCarrierInstall;
-(BOOL)isDeveloperDevice;
-(BOOL)isHomeGestureEnabled;
-(BOOL)isInternalInstall;
-(BOOL)isRoundCornerPad;
-(BOOL)isRoundCornerPhone;
-(BOOL)isiPadMini;
-(BOOL)prefersAlwaysOnOrientation;
-(NSInteger)medusaCapabilities;
-(id)defaultIconState;
-(id)defaultIconStateDisplayIdentifiers;
-(id)deviceClass;
-(id)hardwareModel;
-(id)init;
-(id)localizedPlatformName;
-(id)productType;
-(id)systemBuildVersion;
-(id)uniqueDeviceIdentifier;
-(void)_loadDefaultIconInfo;


@end


#endif