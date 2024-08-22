// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDRESPIRATORYRATEMEASUREMENTSPROFILEEXTENSION_H
#define HDRESPIRATORYRATEMEASUREMENTSPROFILEEXTENSION_H

@class NSString;
@protocol HDFeatureAvailabilityExtensionProvider;

#import <Foundation/Foundation.h>

#import "HDFeatureAvailabilityManager.h"
#import "HDBackgroundFeatureDeliveryManager.h"

@interface HDRespiratoryRateMeasurementsProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider>

 {
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_featureDeliveryManager;
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