// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRIRREGULARRHYTHMNOTIFICATIONSSETTINGMIGRATOR_H
#define HDHRIRREGULARRHYTHMNOTIFICATIONSSETTINGMIGRATOR_H

@class NSString;
@protocol HDFeatureAvailabilityExtensionObserver, OS_dispatch_queue, HDFeatureAvailabilityExtension;

#import <Foundation/Foundation.h>


@interface HDHRIrregularRhythmNotificationsSettingMigrator : NSObject <HDFeatureAvailabilityExtensionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDFeatureAvailabilityExtension> *v1FeatureAvailabilityManager; // ivar: _v1FeatureAvailabilityManager
@property (readonly, nonatomic) NSObject<HDFeatureAvailabilityExtension> *v2FeatureAvailabilityManager; // ivar: _v2FeatureAvailabilityManager


-(id)initWithV1FeatureAvailabilityManager:(id)arg0 v2FeatureAvailabilityManager:(id)arg1 ;
-(void)_startObservingSettingChanges;
-(void)_syncSettingIfPossibleFromManager:(id)arg0 toManager:(id)arg1 ;
-(void)_syncSettingIfPossibleFromSource:(id)arg0 ;
-(void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg0 ;
-(void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateSettings:(id)arg0 ;


@end


#endif