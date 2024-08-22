// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSETPROFILEINCARINTENT_H
#define INSETPROFILEINCARINTENT_H

@class NSString, NSNumber;
@protocol INSetProfileInCarIntentExport;


#import "INIntent.h"
#import "INSpeakableString.h"

@interface INSetProfileInCarIntent : INIntent <INSetProfileInCarIntentExport>



@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSNumber *defaultProfile;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *profileLabel;
@property (readonly, copy, nonatomic) NSString *profileName;
@property (readonly, copy, nonatomic) NSNumber *profileNumber;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithProfileNumber:(id)arg0 profileLabel:(id)arg1 defaultProfile:(id)arg2 ;
-(id)initWithProfileNumber:(id)arg0 profileName:(id)arg1 defaultProfile:(id)arg2 ;
-(id)initWithProfileNumber:(id)arg0 profileName:(id)arg1 defaultProfile:(id)arg2 carName:(id)arg3 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif