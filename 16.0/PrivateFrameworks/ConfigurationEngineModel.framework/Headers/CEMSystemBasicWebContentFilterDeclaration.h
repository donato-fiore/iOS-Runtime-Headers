// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSYSTEMBASICWEBCONTENTFILTERDECLARATION_H
#define CEMSYSTEMBASICWEBCONTENTFILTERDECLARATION_H

@class NSString, NSArray, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemBasicWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *payloadFilterBlackList; // ivar: _payloadFilterBlackList
@property (copy, nonatomic) NSArray *payloadFilterWhiteList; // ivar: _payloadFilterWhiteList
@property (copy, nonatomic) NSNumber *payloadRestrictWeb; // ivar: _payloadRestrictWeb
@property (copy, nonatomic) NSArray *payloadSiteWhiteList; // ivar: _payloadSiteWhiteList
@property (copy, nonatomic) NSNumber *payloadUseContentFilter; // ivar: _payloadUseContentFilter
@property (copy, nonatomic) NSNumber *payloadWhiteListEnabled; // ivar: _payloadWhiteListEnabled
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withRestrictWeb:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withRestrictWeb:(id)arg1 withUseContentFilter:(id)arg2 withWhiteListEnabled:(id)arg3 withSiteWhiteList:(id)arg4 withFilterWhiteList:(id)arg5 withFilterBlackList:(id)arg6 ;
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
-(id)synthesizeProfileOutUUIDs:(id)arg0 withOldUUIDs:(id)arg1 assetProviders:(id)arg2 ;
-(int)activationLevel;


@end


#endif