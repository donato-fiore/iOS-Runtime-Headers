// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMXSANVOLUMEPREFERENCESDECLARATION_H
#define CEMSYSTEMXSANVOLUMEPREFERENCESDECLARATION_H

@class NSString, NSArray, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemXsanVolumePreferencesDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *payloadDenyDLC; // ivar: _payloadDenyDLC
@property (copy, nonatomic) NSArray *payloadDenyMount; // ivar: _payloadDenyMount
@property (copy, nonatomic) NSArray *payloadOnlyMount; // ivar: _payloadOnlyMount
@property (copy, nonatomic) NSArray *payloadPreferDLC; // ivar: _payloadPreferDLC
@property (copy, nonatomic) NSNumber *payloadUseDLC; // ivar: _payloadUseDLC
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withOnlyMount:(id)arg1 withDenyMount:(id)arg2 withDenyDLC:(id)arg3 withPreferDLC:(id)arg4 withUseDLC:(id)arg5 ;
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