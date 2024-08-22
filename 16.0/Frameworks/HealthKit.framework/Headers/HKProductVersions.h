// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPRODUCTVERSIONS_H
#define HKPRODUCTVERSIONS_H


#import <Foundation/Foundation.h>


@interface HKProductVersions : NSObject



+(id)_assembleUniqueDeviceIdentifierForDeviceType:(NSInteger)arg0 majorVersion:(id)arg1 deviceIdentifier:(id)arg2 ;
+(id)_deviceIdentifierForProductName:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)_infoDictionaryForProductWithName:(id)arg0 error:(*id)arg1 ;
+(id)_productBuildVersion;
+(id)activePairedDeviceSystemBuildVersion;
+(id)featureAttributesForProductWithName:(id)arg0 error:(*id)arg1 ;
+(id)majorVersionForProductWithName:(id)arg0 error:(*id)arg1 ;
+(id)phoneElectrocardiogramRecordingUniqueDeviceIdentifier;
+(id)productBuildVersionForDeviceType:(NSInteger)arg0 ;
+(id)uniqueDeviceIdentifierForProductWithName:(id)arg0 error:(*id)arg1 ;
+(id)updateVersionForMajorVersion:(id)arg0 productBuildVersion:(id)arg1 ;
+(id)versionForProductWithName:(id)arg0 deviceType:(NSInteger)arg1 error:(*id)arg2 ;
+(id)versionForProductWithName:(id)arg0 error:(*id)arg1 ;
+(id)watchElectrocardiogramRecordingUniqueDeviceIdentifier;
+(id)watchElectrocardiogramRecordingVersionTwoUniqueDeviceIdentifier;
+(id)yearOfReleaseForProductWithName:(id)arg0 error:(*id)arg1 ;
+(struct ? )semanticVersionForProductWithName:(id)arg0 error:(*id)arg1 ;


@end


#endif