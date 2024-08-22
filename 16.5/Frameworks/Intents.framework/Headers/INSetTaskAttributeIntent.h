// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSETTASKATTRIBUTEINTENT_H
#define INSETTASKATTRIBUTEINTENT_H

@class NSString;
@protocol INSetTaskAttributeIntentExport;


#import "INIntent.h"
#import "INContactEventTrigger.h"
#import "INSpatialEventTrigger.h"
#import "INTask.h"
#import "INSpeakableString.h"
#import "INTemporalEventTrigger.h"

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>



@property (copy, nonatomic) INContactEventTrigger *contactEventTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger priority;
@property (readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INTask *targetTask;
@property (readonly, copy, nonatomic) INSpeakableString *taskTitle;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTargetTask:(id)arg0 status:(NSInteger)arg1 spatialEventTrigger:(id)arg2 temporalEventTrigger:(id)arg3 ;
-(id)initWithTargetTask:(id)arg0 taskTitle:(id)arg1 status:(NSInteger)arg2 priority:(NSInteger)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif