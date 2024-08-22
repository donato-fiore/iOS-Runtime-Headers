// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INADDMEDIAINTENT_H
#define INADDMEDIAINTENT_H

@class NSString, NSArray;
@protocol INAddMediaIntentExport;


#import "INIntent.h"
#import "INMediaDestination.h"
#import "INMediaSearch.h"
#import "INPrivateAddMediaIntentData.h"

@interface INAddMediaIntent : INIntent <INAddMediaIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INMediaDestination *mediaDestination;
@property (readonly, copy, nonatomic) NSArray *mediaItems;
@property (readonly, copy, nonatomic) INMediaSearch *mediaSearch;
@property (copy, nonatomic) INPrivateAddMediaIntentData *privateAddMediaIntentData;
@property (readonly) Class superclass;


-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithMediaItems:(id)arg0 mediaSearch:(id)arg1 mediaDestination:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif