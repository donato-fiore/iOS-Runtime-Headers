// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDINSTALLATTRIBUTIONPARAMSCONFIG_H
#define ASDINSTALLATTRIBUTIONPARAMSCONFIG_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDInstallAttributionParamsConfig : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *adNetworkId; // ivar: _adNetworkId
@property (retain, nonatomic) NSNumber *appAdamId; // ivar: _appAdamId
@property (retain, nonatomic) NSString *attributionSignature; // ivar: _attributionSignature
@property (retain, nonatomic) NSNumber *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *impressionId; // ivar: _impressionId
@property (nonatomic) BOOL overrideCampaignLimit; // ivar: _overrideCampaignLimit
@property (retain, nonatomic) NSNumber *sourceAppAdamId; // ivar: _sourceAppAdamId
@property (retain, nonatomic) NSString *sourceAppBundleId; // ivar: _sourceAppBundleId
@property (retain, nonatomic) NSNumber *sourceIdentifier; // ivar: _sourceIdentifier
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)paramsFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif