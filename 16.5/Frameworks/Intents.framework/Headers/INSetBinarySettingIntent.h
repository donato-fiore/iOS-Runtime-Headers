// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSETBINARYSETTINGINTENT_H
#define INSETBINARYSETTINGINTENT_H

@class NSString;
@protocol INSetBinarySettingIntentExport;


#import "INIntent.h"
#import "INSettingMetadata.h"
#import "INTemporalEventTrigger.h"

@interface INSetBinarySettingIntent : INIntent <INSetBinarySettingIntentExport>



@property (readonly, nonatomic) NSInteger binaryValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithSettingMetadata:(id)arg0 binaryValue:(NSInteger)arg1 temporalEventTrigger:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif