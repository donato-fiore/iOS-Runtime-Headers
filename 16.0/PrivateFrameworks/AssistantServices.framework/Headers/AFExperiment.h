// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFEXPERIMENT_H
#define AFEXPERIMENT_H

@class NSString, NSDictionary;
@protocol AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, AFInvocationFeedbackExperiment, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFExperiment : NSObject <AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, AFInvocationFeedbackExperiment, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *configurationIdentifier; // ivar: _configurationIdentifier
@property (readonly, copy, nonatomic) NSString *configurationVersion; // ivar: _configurationVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *deploymentGroupIdentifier; // ivar: _deploymentGroupIdentifier
@property (readonly, copy, nonatomic) NSDictionary *deploymentGroupProperties; // ivar: _deploymentGroupProperties
@property (readonly, nonatomic) NSInteger deploymentReason; // ivar: _deploymentReason
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger featureGroups;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL playsSessionInactiveSoundForSiriVOXSounds;
@property (readonly, nonatomic) BOOL playsSound;
@property (readonly, nonatomic) BOOL playsTwoShotSoundForSiriVOXSounds;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFeatureGroupFourEnabled;
-(BOOL)isFeatureGroupOneEnabled;
-(BOOL)isFeatureGroupThreeEnabled;
-(BOOL)isFeatureGroupTwoEnabled;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigurationIdentifier:(id)arg0 configurationVersion:(id)arg1 deploymentGroupIdentifier:(id)arg2 deploymentGroupProperties:(id)arg3 deploymentReason:(NSInteger)arg4 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logExperimentExposureForInvocationFeedbacks;
-(void)logExperimentExposureForSiriVOXSounds;
-(void)logExperimentExposureForTapToSiriBehavior;


@end


#endif