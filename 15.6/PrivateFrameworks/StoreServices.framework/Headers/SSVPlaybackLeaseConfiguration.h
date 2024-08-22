// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVPLAYBACKLEASECONFIGURATION_H
#define SSVPLAYBACKLEASECONFIGURATION_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSVPlaybackLeaseConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSURL *beginLeaseURL; // ivar: _beginLeaseURL
@property (copy, nonatomic) NSURL *certificateURL; // ivar: _certificateURL
@property (copy, nonatomic) NSURL *getAssetURL; // ivar: _getAssetURL
@property (readonly, nonatomic) NSInteger leaseType; // ivar: _leaseType
@property (copy, nonatomic) NSURL *pastisCertificateURL; // ivar: _pastisCertificateURL
@property (copy, nonatomic) NSURL *pastisKeyServerURL; // ivar: _pastisKeyServerURL
@property (copy, nonatomic) NSURL *provisionMachineURL; // ivar: _provisionMachineURL
@property (copy, nonatomic) NSURL *refreshLeaseURL; // ivar: _refreshLeaseURL
@property (copy, nonatomic) NSString *storeFrontSuffix; // ivar: _storeFrontSuffix
@property (copy, nonatomic) NSURL *syncMachineURL; // ivar: _syncMachineURL


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCertificateURL:(id)arg0 leaseType:(NSInteger)arg1 leaseURL:(id)arg2 pastisKeyServerURL:(id)arg3 provisionMachineURL:(id)arg4 storeFrontSuffix:(id)arg5 syncMachineURL:(id)arg6 ;
-(id)initWithCertificateURL:(id)arg0 leaseURL:(id)arg1 pastisKeyServerURL:(id)arg2 provisionMachineURL:(id)arg3 storeFrontSuffix:(id)arg4 syncMachineURL:(id)arg5 ;
-(id)initWithURLBagDictionary:(id)arg0 ;
-(id)initWithURLBagDictionary:(id)arg0 leaseType:(NSInteger)arg1 ;


@end


#endif