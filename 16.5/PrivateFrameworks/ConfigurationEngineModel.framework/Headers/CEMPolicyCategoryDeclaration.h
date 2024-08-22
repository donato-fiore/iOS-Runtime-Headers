// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMPOLICYCATEGORYDECLARATION_H
#define CEMPOLICYCATEGORYDECLARATION_H

@class NSString, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMPolicyCategoryDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *payloadCategories; // ivar: _payloadCategories
@property (copy, nonatomic) NSArray *payloadCategoriesVersion2; // ivar: _payloadCategoriesVersion2
@property (copy, nonatomic) NSString *payloadMode; // ivar: _payloadMode
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withMode:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withMode:(id)arg1 withCategories:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withMode:(id)arg1 withCategories:(id)arg2 withCategoriesVersion2:(id)arg3 ;
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