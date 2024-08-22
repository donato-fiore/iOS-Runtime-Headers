// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSPLATFORM_H
#define BSPLATFORM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BSPlatform : NSObject

@property (readonly, nonatomic, getter=isCarrierInstall) BOOL carrierInstall;
@property (readonly, nonatomic, getter=isDeveloperInstall) BOOL developerInstall;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) BOOL hasGasGauge;
@property (readonly, nonatomic) BOOL hasOrbCapability;
@property (readonly, nonatomic) NSInteger homeButtonType;
@property (readonly, nonatomic, getter=isInternalInstall) BOOL internalInstall;
@property (readonly, copy, nonatomic) NSString *localizedProductName;
@property (readonly, nonatomic, getter=isMultiCore) BOOL multiCore;
@property (readonly, copy, nonatomic) NSString *operatingSystemName;
@property (readonly, copy, nonatomic) NSString *productBuildVersion;
@property (readonly, copy, nonatomic) NSString *productClass;
@property (readonly, copy, nonatomic) NSString *productHardwareModel;
@property (readonly, copy, nonatomic) NSString *productHardwareModelName;
@property (readonly, copy, nonatomic) NSString *productType;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, copy, nonatomic) NSString *uniqueDeviceIdentifier;


+(id)sharedInstance;


@end


#endif