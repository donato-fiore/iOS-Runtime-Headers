// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ININTENTRESPONSE_H
#define ININTENTRESPONSE_H

@class NSDictionary, NSString, PBCodable, NSUserActivity;
@protocol INImageProxyInjecting, INIntentSlotComposing, INCacheableContainer, INEnumerable, INKeyImageProducing, INIntentResponseExport, INGenericIntentResponse, INRuntimeObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INCodableDescription.h"
#import "INIntentResponseDescription.h"
#import "INIntentResponseCodableCode.h"
#import "INImage.h"
#import "_INPBIntentResponse.h"

@interface INIntentResponse : NSObject <INImageProxyInjecting, INIntentSlotComposing, INCacheableContainer, INEnumerable, INKeyImageProducing, INIntentResponseExport, INGenericIntentResponse, INRuntimeObject, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *_JSONDictionaryRepresentation;
@property (readonly, nonatomic) NSString *_className;
@property (readonly, nonatomic) INCodableDescription *_codableDescription; // ivar: _codableDescription
@property (nonatomic, setter=_setCode:) NSInteger _code;
@property (readonly, nonatomic) INIntentResponseDescription *_instanceDescription;
@property (readonly, nonatomic) INIntentResponseCodableCode *_intentResponseCodableCode;
@property (readonly, nonatomic) NSInteger _intentResponseCode;
@property (readonly) NSInteger _intents_toggleState;
@property (readonly) INImage *_keyImage;
@property (retain, nonatomic, setter=_setPayloadResponseTypeName:) NSString *_payloadResponseTypeName;
@property (nonatomic, setter=_setRequiresAuthentication:) BOOL _requiresAuthentication;
@property (nonatomic, setter=_setRequiresProtectedData:) BOOL _requiresProtectedData;
@property (retain, nonatomic, setter=_setResponseMessagePBRepresentation:) PBCodable *_responseMessagePBRepresentation; // ivar: _responseMessagePBRepresentation
@property (readonly, nonatomic) BOOL _shouldForwardIntentToApp;
@property (nonatomic, setter=_setStage:) NSInteger _stage; // ivar: __stage
@property (readonly, nonatomic, getter=_isSuccess) BOOL _success;
@property (readonly, nonatomic) NSInteger _type;
@property (readonly, nonatomic) BOOL _userConfirmationRequired; // ivar: __userConfirmationRequired
@property (readonly, copy, nonatomic) _INPBIntentResponse *backingStore; // ivar: _backingStore
@property (nonatomic) NSInteger code; // ivar: _code
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *propertiesByName;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


+(BOOL)_appLaunchRequestedFromCode:(NSInteger)arg0 ;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)_codeFromIntentResponseCode:(NSInteger)arg0 ;
+(NSInteger)_codeFromType:(int)arg0 errorCode:(int)arg1 appLaunchRequested:(BOOL)arg2 ;
+(NSInteger)_intentHandlingStatusFromCode:(NSInteger)arg0 ;
+(id)responseFailure;
+(id)responseSuccess;
+(int)_errorCodeFromCode:(NSInteger)arg0 ;
+(int)_typeFromCode:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)_commonInit;
-(BOOL)_enumerateWithValueProcessingBlock:(id)arg0 ;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg0 withBlock:(id)arg1 ;
-(BOOL)_isValidKey:(id)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(NSInteger)_codeWithName:(id)arg0 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(NSInteger)_intentHandlingStatus;
-(NSInteger)_stageWithName:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_inCodable;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)_intents_cacheableObjects;
-(id)_originatingBundleIdentifier;
-(id)_payloadResponseMessageData;
-(id)_propertiesByNameForLanguage:(id)arg0 ;
-(id)_propertiesByNameWithLocalizer:(id)arg0 ;
-(id)_querySchemaWithBlock:(id)arg0 ;
-(id)_redactedDictionaryRepresentation;
-(id)_renderedResponseForLanguage:(id)arg0 requiresSiriCompatibility:(BOOL)arg1 ;
-(id)_renderedResponseWithLocalizer:(id)arg0 requiresSiriCompatibility:(BOOL)arg1 ;
-(id)_responseTemplateForLanguage:(id)arg0 ;
-(id)_responseTemplateForLanguage:(id)arg0 requiresSiriCompatibility:(BOOL)arg1 ;
-(id)_responseTemplateWithLocalizer:(id)arg0 ;
-(id)_responseTemplateWithLocalizer:(id)arg0 requiresSiriCompatibility:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertiesByName:(id)arg0 ;
-(id)intentSlotDescriptions;
-(id)localizeValueOfSlotDescription:(id)arg0 withLocalizer:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)_intents_prepareResponse;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)_setPayloadResponseMessageData:(id)arg0 ;
-(void)_updateWithJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif