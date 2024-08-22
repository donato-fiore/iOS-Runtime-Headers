// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSETTIMERATTRIBUTEINTENT_H
#define INSETTIMERATTRIBUTEINTENT_H

@class NSString;
@protocol INSetTimerAttributeIntentExport;


#import "INIntent.h"
#import "INTimer.h"
#import "INSpeakableString.h"

@interface INSetTimerAttributeIntent : INIntent <INSetTimerAttributeIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INTimer *targetTimer;
@property (readonly, nonatomic) CGFloat toDuration;
@property (readonly, copy, nonatomic) INSpeakableString *toLabel;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTargetTimer:(id)arg0 toDuration:(CGFloat)arg1 toLabel:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif