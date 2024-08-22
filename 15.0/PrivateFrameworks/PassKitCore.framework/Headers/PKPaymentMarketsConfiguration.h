// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTMARKETSCONFIGURATION_H
#define PKPAYMENTMARKETSCONFIGURATION_H

@class NSSet, NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentMarketsConfiguration : NSObject <NSSecureCoding>



@property (readonly, copy) NSSet *markets; // ivar: _markets
@property (readonly, copy) NSURL *url; // ivar: _url
@property (readonly, copy) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(void)paymentMarketsConfigurationWithURL:(id)arg0 forDeviceClass:(id)arg1 version:(id)arg2 completion:(id)arg3 ;
-(id)closestMarketForLocation:(id)arg0 ;
-(id)expressCredentialTypesForLocation:(id)arg0 ;
-(id)expressTransitNetworksForLocation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 url:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3 ;
-(id)marketsForLocation:(id)arg0 ;
-(id)marketsForLocation:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)marketsForRegions:(id)arg0 ;
-(id)supportedCredentialTypesForLocation:(id)arg0 ;
-(id)supportedTransitNetworksForLocation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif