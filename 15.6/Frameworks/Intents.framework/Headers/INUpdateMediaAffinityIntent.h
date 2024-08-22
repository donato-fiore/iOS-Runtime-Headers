// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUPDATEMEDIAAFFINITYINTENT_H
#define INUPDATEMEDIAAFFINITYINTENT_H

@class NSString, NSArray;
@protocol INUpdateMediaAffinityIntentExport;


#import "INIntent.h"
#import "INMediaSearch.h"
#import "INPrivateUpdateMediaAffinityIntentData.h"

@interface INUpdateMediaAffinityIntent : INIntent <INUpdateMediaAffinityIntentExport>



@property (readonly, nonatomic) NSInteger affinityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *mediaItems;
@property (readonly, copy, nonatomic) INMediaSearch *mediaSearch;
@property (copy, nonatomic) INPrivateUpdateMediaAffinityIntentData *privateUpdateMediaAffinityIntentData;
@property (readonly) Class superclass;


-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithMediaItems:(id)arg0 mediaSearch:(id)arg1 affinityType:(NSInteger)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif