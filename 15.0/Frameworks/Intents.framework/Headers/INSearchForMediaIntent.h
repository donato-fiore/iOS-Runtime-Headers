// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSEARCHFORMEDIAINTENT_H
#define INSEARCHFORMEDIAINTENT_H

@class NSString, NSArray;
@protocol INSearchForMediaIntentExport;


#import "INIntent.h"
#import "INMediaSearch.h"
#import "INPrivateSearchForMediaIntentData.h"

@interface INSearchForMediaIntent : INIntent <INSearchForMediaIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *mediaItems;
@property (readonly, copy, nonatomic) INMediaSearch *mediaSearch;
@property (copy, nonatomic) INPrivateSearchForMediaIntentData *privateSearchForMediaIntentData;
@property (readonly) Class superclass;


-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithMediaItems:(id)arg0 mediaSearch:(id)arg1 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif