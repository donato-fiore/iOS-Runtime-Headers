// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INSTARTAUDIOCALLINTENT_H
#define INSTARTAUDIOCALLINTENT_H

@class NSArray, NSString;
@protocol INStartAudioCallIntentExport;


#import "INIntent.h"

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>



@property (nonatomic) NSInteger audioRoute;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destinationType;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger preferredCallProvider;
@property (nonatomic) NSInteger recordTypeForRedialing;
@property (readonly) Class superclass;
@property (nonatomic, setter=setTTYType:) NSInteger ttyType;
@property (readonly, nonatomic) BOOL useSpeaker;


+(id)_ignoredParameters;
-(BOOL)configureAttributeSet:(id)arg0 includingData:(BOOL)arg1 ;
-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_currentParameterCombination;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_spotlightContentType;
-(id)_subtitleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_typedBackingStore;
-(id)_validParameterCombinationsWithSchema:(id)arg0 ;
-(id)domain;
-(id)initWithContacts:(id)arg0 ;
-(id)initWithDestinationType:(NSInteger)arg0 contacts:(id)arg1 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif