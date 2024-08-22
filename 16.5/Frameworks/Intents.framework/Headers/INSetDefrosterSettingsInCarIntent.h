// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSETDEFROSTERSETTINGSINCARINTENT_H
#define INSETDEFROSTERSETTINGSINCARINTENT_H

@class NSString, NSNumber;
@protocol INSetDefrosterSettingsInCarIntentExport;


#import "INIntent.h"
#import "INSpeakableString.h"

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>



@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defroster;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *enable;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithEnable:(id)arg0 defroster:(NSInteger)arg1 ;
-(id)initWithEnable:(id)arg0 defroster:(NSInteger)arg1 carName:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif