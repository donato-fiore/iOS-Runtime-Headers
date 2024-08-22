// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INSETTEMPORALSETTINGINTENT_H
#define INSETTEMPORALSETTINGINTENT_H

@class NSString;
@protocol INSetTemporalSettingIntentExport;


#import "INIntent.h"
#import "INSettingMetadata.h"
#import "INTemporalEventTrigger.h"
#import "INDateComponentsRange.h"

@interface INSetTemporalSettingIntent : INIntent <INSetTemporalSettingIntentExport>



@property (readonly, nonatomic) NSInteger action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly, copy, nonatomic) INDateComponentsRange *timeValue;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithSettingMetadata:(id)arg0 timeValue:(id)arg1 temporalEventTrigger:(id)arg2 action:(NSInteger)arg3 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif