// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INANSWERCALLINTENT_H
#define INANSWERCALLINTENT_H

@class NSString;
@protocol INAnswerCallIntentExport;


#import "INIntent.h"

@interface INAnswerCallIntent : INIntent <INAnswerCallIntentExport>



@property (readonly, nonatomic) NSInteger audioRoute;
@property (readonly, copy, nonatomic) NSString *callIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithAudioRoute:(NSInteger)arg0 ;
-(id)initWithAudioRoute:(NSInteger)arg0 callIdentifier:(id)arg1 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif