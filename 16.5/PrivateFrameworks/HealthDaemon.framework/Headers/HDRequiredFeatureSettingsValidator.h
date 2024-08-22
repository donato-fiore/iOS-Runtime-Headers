// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDREQUIREDFEATURESETTINGSVALIDATOR_H
#define HDREQUIREDFEATURESETTINGSVALIDATOR_H

@class NSArray;
@protocol HDFeatureSettingsValidating;

#import <Foundation/Foundation.h>


@interface HDRequiredFeatureSettingsValidator : NSObject <HDFeatureSettingsValidating>

 {
    NSArray *_requiredSettingsKeys;
}




-(id)featureSettingsGivenBaseSettings:(id)arg0 onboardingCompletion:(id)arg1 error:(*id)arg2 ;
-(id)initWithRequiredSettingsKeys:(id)arg0 ;


@end


#endif