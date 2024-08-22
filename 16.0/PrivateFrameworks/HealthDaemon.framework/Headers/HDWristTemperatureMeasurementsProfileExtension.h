// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWRISTTEMPERATUREMEASUREMENTSPROFILEEXTENSION_H
#define HDWRISTTEMPERATUREMEASUREMENTSPROFILEEXTENSION_H

@class NSString;
@protocol HDFeatureAvailabilityExtensionProvider;

#import <Foundation/Foundation.h>

#import "HDFeatureAvailabilityManager.h"
#import "HDBackgroundFeatureDeliveryManager.h"
#import "HDWristTemperatureIdentifierManager.h"

@interface HDWristTemperatureMeasurementsProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider>

 {
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_featureDeliveryManager;
    HDWristTemperatureIdentifierManager *_wristTemperatureIdentifierManager;
    NSString *_featureIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 isBackgroundDeliveryEnabled:(BOOL)arg2 loggingCategory:(id)arg3 pairedDeviceCapabilityProvider:(id)arg4 ;


@end


#endif