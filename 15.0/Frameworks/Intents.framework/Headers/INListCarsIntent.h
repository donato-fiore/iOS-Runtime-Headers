// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INLISTCARSINTENT_H
#define INLISTCARSINTENT_H

@class NSString;
@protocol INListCarsIntentExport;


#import "INIntent.h"

@interface INListCarsIntent : INIntent <INListCarsIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg0 context:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)init;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif