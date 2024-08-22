// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENREGIONSERVERAGENCYCONFIGURATION_H
#define ENREGIONSERVERAGENCYCONFIGURATION_H

@class NSArray, NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENRegionServerAgencyLocalizedConfiguration.h"
#import "ENRegion.h"

@interface ENRegionServerAgencyConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *agencyColor; // ivar: _agencyColor
@property (readonly, copy, nonatomic) NSString *agencyDisplayName;
@property (readonly, copy, nonatomic) NSURL *agencyFAQWebsiteURL; // ivar: _agencyFAQWebsiteURL
@property (nonatomic) NSUInteger agencyHeaderStyle; // ivar: _agencyHeaderStyle
@property (copy, nonatomic) NSArray *agencyHeaderTextColor; // ivar: _agencyHeaderTextColor
@property (copy, nonatomic) NSString *agencyImageURL; // ivar: _agencyImageURL
@property (readonly, copy, nonatomic) NSURL *agencyWebsiteURL; // ivar: _agencyWebsiteURL
@property (copy, nonatomic) NSString *legalConsentVersion; // ivar: _legalConsentVersion
@property (copy, nonatomic) ENRegionServerAgencyLocalizedConfiguration *localizedConfiguration; // ivar: _localizedConfiguration
@property (readonly, copy, nonatomic) ENRegion *region; // ivar: _region
@property (readonly, copy, nonatomic) NSURL *revokedClassificationURL; // ivar: _revokedClassificationURL
@property (readonly, copy, nonatomic) NSURL *verificationCodeLearnMoreURL; // ivar: _verificationCodeLearnMoreURL
@property (readonly, copy, nonatomic) NSURL *webReportURL; // ivar: _webReportURL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegion:(id)arg0 ;
-(id)initWithServerResponseDictionary:(id)arg0 locale:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif