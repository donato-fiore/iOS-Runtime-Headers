// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMACCOUNTWEBCLIPDECLARATION_H
#define CEMACCOUNTWEBCLIPDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMAccountWebClipDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadFullScreen; // ivar: _payloadFullScreen
@property (copy, nonatomic) NSString *payloadIcon; // ivar: _payloadIcon
@property (copy, nonatomic) NSNumber *payloadIsRemovable; // ivar: _payloadIsRemovable
@property (copy, nonatomic) NSString *payloadLabel; // ivar: _payloadLabel
@property (copy, nonatomic) NSNumber *payloadPrecomposed; // ivar: _payloadPrecomposed
@property (copy, nonatomic) NSString *payloadURL; // ivar: _payloadURL
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withURL:(id)arg1 withLabel:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withPrecomposed:(id)arg1 withFullScreen:(id)arg2 withURL:(id)arg3 withIsRemovable:(id)arg4 withLabel:(id)arg5 withIcon:(id)arg6 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif