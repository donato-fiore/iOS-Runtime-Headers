// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKHOSTRESOURCESCONFIGURATION_H
#define CRKHOSTRESOURCESCONFIGURATION_H

@class NSArray;
@protocol NSCopying, CRKIPAddressProviding, CRKIdentity;

#import <Foundation/Foundation.h>


@interface CRKHostResourcesConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) NSObject<CRKIPAddressProviding> *IPAddressProvider; // ivar: _IPAddressProvider
@property (nonatomic) NSUInteger maximumAllowedDownloads; // ivar: _maximumAllowedDownloads
@property (nonatomic) unsigned short port; // ivar: _port
@property (readonly, copy, nonatomic) NSArray *resourceURLs; // ivar: _resourceURLs
@property (readonly, nonatomic) NSObject<CRKIdentity> *serverIdentity; // ivar: _serverIdentity
@property (readonly, copy, nonatomic) NSArray *trustedCertificates; // ivar: _trustedCertificates


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResourceURLs:(id)arg0 serverIdentity:(id)arg1 trustedAnchorCertificates:(id)arg2 ;
-(id)initWithResourceURLs:(id)arg0 serverIdentity:(id)arg1 trustedCertificates:(id)arg2 ;


@end


#endif