// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKCONTENTCACHINGDECLARATION_H
#define CEMNETWORKCONTENTCACHINGDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMNetworkContentCachingDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowPersonalCaching; // ivar: _payloadAllowPersonalCaching
@property (copy, nonatomic) NSNumber *payloadAllowSharedCaching; // ivar: _payloadAllowSharedCaching
@property (copy, nonatomic) NSNumber *payloadAutoActivation; // ivar: _payloadAutoActivation
@property (copy, nonatomic) NSNumber *payloadCacheLimit; // ivar: _payloadCacheLimit
@property (copy, nonatomic) NSString *payloadDataPath; // ivar: _payloadDataPath
@property (copy, nonatomic) NSNumber *payloadDenyActivation; // ivar: _payloadDenyActivation
@property (copy, nonatomic) NSNumber *payloadDenyTetheredCaching; // ivar: _payloadDenyTetheredCaching
@property (copy, nonatomic) NSArray *payloadListenRanges; // ivar: _payloadListenRanges
@property (copy, nonatomic) NSNumber *payloadListenRangesOnly; // ivar: _payloadListenRangesOnly
@property (copy, nonatomic) NSNumber *payloadListenWithPeersAndParents; // ivar: _payloadListenWithPeersAndParents
@property (copy, nonatomic) NSNumber *payloadLocalSubnetsOnly; // ivar: _payloadLocalSubnetsOnly
@property (copy, nonatomic) NSNumber *payloadLogClientIdentity; // ivar: _payloadLogClientIdentity
@property (copy, nonatomic) NSString *payloadParentSelectionPolicy; // ivar: _payloadParentSelectionPolicy
@property (copy, nonatomic) NSArray *payloadParents; // ivar: _payloadParents
@property (copy, nonatomic) NSArray *payloadPeerFilterRanges; // ivar: _payloadPeerFilterRanges
@property (copy, nonatomic) NSArray *payloadPeerListenRanges; // ivar: _payloadPeerListenRanges
@property (copy, nonatomic) NSNumber *payloadPeerLocalSubnetsOnly; // ivar: _payloadPeerLocalSubnetsOnly
@property (copy, nonatomic) NSNumber *payloadPort; // ivar: _payloadPort
@property (copy, nonatomic) NSArray *payloadPublicRanges; // ivar: _payloadPublicRanges
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowPersonalCaching:(id)arg1 withAllowSharedCaching:(id)arg2 withAutoActivation:(id)arg3 withCacheLimit:(id)arg4 withDataPath:(id)arg5 withDenyActivation:(id)arg6 withDenyTetheredCaching:(id)arg7 withListenRanges:(id)arg8 withListenRangesOnly:(id)arg9 withListenWithPeersAndParents:(id)arg10 withLocalSubnetsOnly:(id)arg11 withLogClientIdentity:(id)arg12 withParents:(id)arg13 withParentSelectionPolicy:(id)arg14 withPeerFilterRanges:(id)arg15 withPeerListenRanges:(id)arg16 withPeerLocalSubnetsOnly:(id)arg17 withPort:(id)arg18 withPublicRanges:(id)arg19 ;
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