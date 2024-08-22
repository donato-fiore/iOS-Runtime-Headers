// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMPASSCODESCREENSAVERDECLARATION_H
#define CEMPASSCODESCREENSAVERDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMPasscodeScreensaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAskForPassword; // ivar: _payloadAskForPassword
@property (copy, nonatomic) NSNumber *payloadAskForPasswordDelay; // ivar: _payloadAskForPasswordDelay
@property (copy, nonatomic) NSNumber *payloadLoginWindowIdleTime; // ivar: _payloadLoginWindowIdleTime
@property (copy, nonatomic) NSString *payloadLoginWindowModulePath; // ivar: _payloadLoginWindowModulePath
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAskForPassword:(id)arg1 withAskForPasswordDelay:(id)arg2 withLoginWindowIdleTime:(id)arg3 withLoginWindowModulePath:(id)arg4 ;
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