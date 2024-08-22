// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPITEMID_H
#define FPITEMID_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FPItemID : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isDiskIdentifier) BOOL diskIdentifier;
@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) NSString *providerID; // ivar: _providerID
@property (readonly, nonatomic) NSString *providerIdentifier;


+(BOOL)supportsSecureCoding;
+(id)coreSpotlightEncodedDomainIdentifier:(id)arg0 ;
+(id)csIdentifierFromFPIdentifier:(id)arg0 domainIdentifier:(id)arg1 ;
+(id)fpIdentifierFromCoreSpotlightIdentifier:(id)arg0 domainIdentifier:(id)arg1 ;
+(id)rootItemIDWithProviderDomainID:(id)arg0 ;
+(id)rootItemIDWithProviderIdentifier:(id)arg0 domainIdentifier:(id)arg1 ;
+(id)stringByRemovingPrefix:(id)arg0 fromIdentifier:(id)arg1 ;
+(void)getDomainIdentifier:(*id)arg0 andIdentifier:(*id)arg1 fromCoreSpotlightIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemID:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)coreSpotlightIdentifier;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProviderDomainID:(id)arg0 itemIdentifier:(id)arg1 ;
-(id)initWithProviderID:(id)arg0 domainIdentifier:(id)arg1 coreSpotlightIdentifier:(id)arg2 ;
-(id)initWithProviderID:(id)arg0 domainIdentifier:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)initWithSearchableItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif