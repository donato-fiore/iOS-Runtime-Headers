// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYCONFIGURATION_H
#define NSPPRIVACYPROXYCONFIGURATION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NSPPrivacyProxyAuthenticationInfo.h"
#import "NSPPrivacyProxyResolverInfo.h"

@interface NSPPrivacyProxyConfiguration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSPPrivacyProxyAuthenticationInfo *authInfo; // ivar: _authInfo
@property (retain, nonatomic) NSPPrivacyProxyResolverInfo *bootstrapResolver; // ivar: _bootstrapResolver
@property (nonatomic) NSUInteger disableUntil; // ivar: _disableUntil
@property (retain, nonatomic) NSString *dnsProbe; // ivar: _dnsProbe
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSMutableArray *fallbackPathWeights; // ivar: _fallbackPathWeights
@property (readonly, nonatomic) BOOL hasBootstrapResolver;
@property (nonatomic) BOOL hasDisableUntil;
@property (readonly, nonatomic) BOOL hasDnsProbe;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) BOOL hasRegionId;
@property (nonatomic) unsigned int maxTokenNum; // ivar: _maxTokenNum
@property (retain, nonatomic) NSMutableArray *pathWeights; // ivar: _pathWeights
@property (retain, nonatomic) NSMutableArray *policyTierMaps; // ivar: _policyTierMaps
@property (retain, nonatomic) NSMutableArray *proxies; // ivar: _proxies
@property (retain, nonatomic) NSString *regionId; // ivar: _regionId
@property (retain, nonatomic) NSMutableArray *resolvers; // ivar: _resolvers
@property (nonatomic) unsigned int version; // ivar: _version


+(Class)policyTierMapType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fallbackPathWeightsAtIndex:(NSUInteger)arg0 ;
-(id)pathWeightsAtIndex:(NSUInteger)arg0 ;
-(id)policyTierMapAtIndex:(NSUInteger)arg0 ;
-(id)proxiesAtIndex:(NSUInteger)arg0 ;
-(id)resolversAtIndex:(NSUInteger)arg0 ;
-(void)addFallbackPathWeights:(id)arg0 ;
-(void)addPathWeights:(id)arg0 ;
-(void)addPolicyTierMap:(id)arg0 ;
-(void)addProxies:(id)arg0 ;
-(void)addResolvers:(id)arg0 ;
-(void)clearFallbackPathWeights;
-(void)clearPathWeights;
-(void)clearPolicyTierMaps;
-(void)clearProxies;
-(void)clearResolvers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif