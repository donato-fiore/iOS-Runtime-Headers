// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCANCELWORKOUTINTENT_H
#define INCANCELWORKOUTINTENT_H

@class NSString;
@protocol INCancelWorkoutIntentExport;


#import "INIntent.h"
#import "INSpeakableString.h"

@interface INCancelWorkoutIntent : INIntent <INCancelWorkoutIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INSpeakableString *workoutName;


-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithWorkoutName:(id)arg0 ;
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