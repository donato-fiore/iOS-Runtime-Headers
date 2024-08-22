// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSETSEATSETTINGSINCARINTENT_H
#define INSETSEATSETTINGSINCARINTENT_H

@class NSString, NSNumber;
@protocol INSetSeatSettingsInCarIntentExport;


#import "INIntent.h"
#import "INSpeakableString.h"

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>



@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *enableCooling;
@property (readonly, copy, nonatomic) NSNumber *enableHeating;
@property (readonly, copy, nonatomic) NSNumber *enableMassage;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *level;
@property (readonly, nonatomic) NSInteger relativeLevelSetting;
@property (readonly, nonatomic) NSInteger seat;
@property (readonly) Class superclass;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithEnableHeating:(id)arg0 enableCooling:(id)arg1 enableMassage:(id)arg2 seat:(NSInteger)arg3 level:(id)arg4 relativeLevelSetting:(NSInteger)arg5 ;
-(id)initWithEnableHeating:(id)arg0 enableCooling:(id)arg1 enableMassage:(id)arg2 seat:(NSInteger)arg3 level:(id)arg4 relativeLevelSetting:(NSInteger)arg5 carName:(id)arg6 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif