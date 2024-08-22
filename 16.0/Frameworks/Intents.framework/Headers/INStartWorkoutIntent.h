// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INSTARTWORKOUTINTENT_H
#define INSTARTWORKOUTINTENT_H

@class NSArray, NSString, NSNumber;
@protocol INStartWorkoutIntentExport;


#import "INIntent.h"
#import "INWorkoutCustomization.h"
#import "INSpeakableString.h"

@interface INStartWorkoutIntent : INIntent <INStartWorkoutIntentExport>



@property (copy, nonatomic) NSArray *associatedItems;
@property (copy, nonatomic) INWorkoutCustomization *customization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *goalValue;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *isBuiltInWorkoutType;
@property (readonly, copy, nonatomic) NSNumber *isOpenEnded;
@property (copy, nonatomic) NSNumber *isVoiceOnly;
@property (nonatomic) NSInteger sequenceLabel;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger workoutGoalUnitType;
@property (readonly, nonatomic) NSInteger workoutLocationType;
@property (readonly, copy, nonatomic) INSpeakableString *workoutName;


+(id)_ignoredParameters;
-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg0 context:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_metadata;
-(id)_titleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithWorkoutName:(id)arg0 goalValue:(id)arg1 workoutGoalUnitType:(NSInteger)arg2 workoutLocationType:(NSInteger)arg3 isOpenEnded:(id)arg4 ;
-(id)localizeValueOfSlotDescription:(id)arg0 withLocalizer:(id)arg1 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif