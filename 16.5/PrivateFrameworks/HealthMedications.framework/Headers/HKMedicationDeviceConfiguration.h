// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONDEVICECONFIGURATION_H
#define HKMEDICATIONDEVICECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface HKMedicationDeviceConfiguration : NSObject



+(BOOL)_isSupportedLocale:(id)arg0 ;
+(BOOL)_isSupportedRegion:(id)arg0 ;
+(BOOL)supportsOntologyBackedMedications;
-(id)init;


@end


#endif