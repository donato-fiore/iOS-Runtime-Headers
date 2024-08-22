// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RADIOSTOREBAG_H
#define RADIOSTOREBAG_H

@class NSArray, NSDictionary, SSVPlatformContext, NSNumber, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface RadioStoreBag : NSObject {
    NSArray *_amdDomains;
    NSDictionary *_mescalRequestAllowList;
    NSDictionary *_mescalResponseAllowList;
    SSVPlatformContext *_platformContext;
    NSNumber *_shouldSendKBSyncDataValue;
}


@property (readonly, copy, nonatomic) NSDictionary *URLBagDictionary;
@property (readonly, nonatomic, getter=isAdFreeRadioEnabled) BOOL adFreeRadioEnabled;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSString *leaseCertificateURLString; // ivar: _leaseCertificateURLString
@property (readonly, nonatomic) NSString *mescalCertificateURLString; // ivar: _mescalSetupCertURLString
@property (readonly, nonatomic) NSString *mescalSetupURLString; // ivar: _mescalSetupURLString
@property (readonly, nonatomic) NSString *platformLookupURLString;
@property (readonly, nonatomic) NSDictionary *radioConfigurationDictionary; // ivar: _tiltDictionary
@property (readonly, nonatomic) BOOL shouldSendKBSyncData;
@property (readonly, nonatomic) NSString *storeFrontSuffix; // ivar: _storeFrontSuffix
@property (readonly, nonatomic) NSString *streamingDownloadURLString; // ivar: _srdnldURLString


-(BOOL)shouldMescalSignRequestWithURL:(id)arg0 ;
-(BOOL)shouldMescalVerifyResponseFromURL:(id)arg0 ;
-(id)_cacheRepresentation;
-(id)_initWithCacheRepresentation:(id)arg0 ;
-(id)_initWithURLBag:(id)arg0 ;
-(id)_platformContext;


@end


#endif