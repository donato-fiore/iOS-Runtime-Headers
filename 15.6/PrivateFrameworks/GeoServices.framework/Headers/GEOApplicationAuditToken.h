// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOAPPLICATIONAUDITTOKEN_H
#define GEOAPPLICATIONAUDITTOKEN_H

@class NSData, NSString, geo_isolater;
@protocol NSSecureCoding, GEOXPCSerializable;

#import <Foundation/Foundation.h>


@interface GEOApplicationAuditToken : NSObject <NSSecureCoding, GEOXPCSerializable>

 {
    NSData *_tokenData;
    NSString *_resolvedBundleId;
    NSString *_resolvedNetworkAttributionBundleId;
    geo_isolater *_isolater;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *proxiedBundleId; // ivar: _proxiedBundleId
@property (readonly, nonatomic, getter=isProxiedExternalBundleId) BOOL proxiedExternalBundleId; // ivar: _proxiedExternalBundleId
@property (readonly, copy, nonatomic, getter=_secondaryIdentifier) NSString *secondaryIdentifier; // ivar: _secondaryIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)currentProcessAuditToken;
-(BOOL)isEqual:(id)arg0 ;
-(id)_bundleIdForAuditToken;
-(id)backingTokenData;
-(id)bundleId;
-(id)bundleIdForNetworkAttribution;
-(id)init;
-(id)initWithAuditTokenData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNSXPCConnection:(id)arg0 ;
-(id)initWithProxiedApplicationBundleId:(id)arg0 ;
-(id)initWithProxiedExternalApplicationBundleId:(id)arg0 ;
-(id)initWithSecondaryIdentifier:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(id)publicLogDescription;
-(void)encodeToXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif