// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKASMUSERFACTORY_H
#define CRKASMUSERFACTORY_H


#import <Foundation/Foundation.h>

#import "CRKASMCertificateVendor.h"
#import "CRKASMRosterProviderConfiguration.h"

@interface CRKASMUserFactory : NSObject

@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor; // ivar: _certificateVendor
@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration; // ivar: _configuration


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUser:(id)arg0 suitableForPerson:(id)arg1 ;
-(NSUInteger)hash;
-(id)cachedTrustedUserForPerson:(id)arg0 ;
-(id)cachedUserForPerson:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 certificateVendor:(id)arg1 ;
-(id)makeTrustedUserForPerson:(id)arg0 ;
-(id)makeUserForPerson:(id)arg0 ;
-(id)trustedUserForPerson:(id)arg0 ;
-(id)userForPerson:(id)arg0 ;


@end


#endif