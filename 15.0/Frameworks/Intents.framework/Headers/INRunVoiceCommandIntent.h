// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INRUNVOICECOMMANDINTENT_H
#define INRUNVOICECOMMANDINTENT_H

@class NSString;
@protocol INEnumerable, INRunVoiceCommandIntentExport;


#import "INIntent.h"
#import "INIntentExecutionResult.h"
#import "INVoiceCommandDeviceInformation.h"
#import "INSpeakableString.h"

@interface INRunVoiceCommandIntent : INIntent <INEnumerable, INRunVoiceCommandIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INIntentExecutionResult *executionResult;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INVoiceCommandDeviceInformation *originDevice;
@property (readonly, copy, nonatomic) NSString *previousIntentIdentifier;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INSpeakableString *voiceCommand;


-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg0 withBlock:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithVoiceCommand:(id)arg0 originDevice:(id)arg1 ;
-(id)initWithVoiceCommand:(id)arg0 originDevice:(id)arg1 executionResult:(id)arg2 ;
-(id)initWithVoiceCommand:(id)arg0 originDevice:(id)arg1 executionResult:(id)arg2 previousIntentIdentifier:(id)arg3 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif