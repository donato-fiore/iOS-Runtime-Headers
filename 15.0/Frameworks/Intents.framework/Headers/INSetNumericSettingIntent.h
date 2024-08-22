// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSETNUMERICSETTINGINTENT_H
#define INSETNUMERICSETTINGINTENT_H

@class NSString;
@protocol INSetNumericSettingIntentExport;


#import "INIntent.h"
#import "INNumericSettingValue.h"
#import "INSettingMetadata.h"
#import "INTemporalEventTrigger.h"

@interface INSetNumericSettingIntent : INIntent <INSetNumericSettingIntentExport>



@property (readonly, nonatomic) NSInteger action;
@property (readonly, nonatomic) NSInteger boundedValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INNumericSettingValue *numericValue;
@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithSettingMetadata:(id)arg0 numericValue:(id)arg1 boundedValue:(NSInteger)arg2 action:(NSInteger)arg3 temporalEventTrigger:(id)arg4 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif