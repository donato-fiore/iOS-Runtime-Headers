// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENREGIONSERVERNKDCONFIGURATION_H
#define ENREGIONSERVERNKDCONFIGURATION_H

@class NSArray, NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENRegion.h"

@interface ENRegionServerNKDConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *acceptedReportTypes; // ivar: _acceptedReportTypes
@property (readonly, copy, nonatomic) NSString *healthAuthorityID; // ivar: _healthAuthorityID
@property (readonly, copy, nonatomic) ENRegion *region; // ivar: _region
@property (readonly, copy, nonatomic) NSURL *tekLocalDownloadBaseURL; // ivar: _tekLocalDownloadBaseURL
@property (readonly, copy, nonatomic) NSURL *tekLocalDownloadIndexURL; // ivar: _tekLocalDownloadIndexURL
@property (readonly, nonatomic) CGFloat tekPublishInterval; // ivar: _tekPublishInterval
@property (readonly, copy, nonatomic) NSURL *tekUploadURL; // ivar: _tekUploadURL
@property (readonly, copy, nonatomic) NSString *testVerificationAPIKey; // ivar: _testVerificationAPIKey
@property (readonly, copy, nonatomic) NSURL *testVerificationCertificateURL; // ivar: _testVerificationCertificateURL
@property (readonly, copy, nonatomic) NSURL *testVerificationURL; // ivar: _testVerificationURL
@property (readonly, copy, nonatomic) NSArray *travelerDownloadConfigurations; // ivar: _travelerDownloadConfigurations


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerResponseDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif