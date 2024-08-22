// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INGETSETTINGINTENT_H
#define INGETSETTINGINTENT_H

@class NSString;
@protocol INGetSettingIntentExport;


#import "INIntent.h"
#import "INSettingMetadata.h"

@interface INGetSettingIntent : INIntent <INGetSettingIntentExport>



@property (readonly, nonatomic) NSInteger confirmationValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithSettingMetadata:(id)arg0 ;
-(id)initWithSettingMetadata:(id)arg0 confirmationValue:(NSInteger)arg1 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif