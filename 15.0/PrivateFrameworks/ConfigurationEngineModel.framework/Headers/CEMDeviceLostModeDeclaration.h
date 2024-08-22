// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMDEVICELOSTMODEDECLARATION_H
#define CEMDEVICELOSTMODEDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMDeviceLostModeDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadEnable; // ivar: _payloadEnable
@property (copy, nonatomic) NSString *payloadFootnote; // ivar: _payloadFootnote
@property (copy, nonatomic) NSString *payloadMessage; // ivar: _payloadMessage
@property (copy, nonatomic) NSString *payloadPhoneNumber; // ivar: _payloadPhoneNumber
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withEnable:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withEnable:(id)arg1 withMessage:(id)arg2 withPhoneNumber:(id)arg3 withFootnote:(id)arg4 ;
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