// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUDOWNLOADMETADATA_H
#define SUDOWNLOADMETADATA_H

@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SUDownloadMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>



@property (nonatomic) int activeDownloadPolicyType; // ivar: _activeDownloadPolicyType
@property (nonatomic, getter=isAutoDownload) BOOL autoDownload; // ivar: _autoDownload
@property (nonatomic) int downloadFeeAgreementStatus; // ivar: _downloadFeeAgreementStatus
@property (nonatomic, getter=isDownloadOnly) BOOL downloadOnly; // ivar: _downloadOnly
@property (nonatomic, getter=isEnabledFor2G) BOOL enabledFor2G; // ivar: _enabledFor2G
@property (nonatomic, getter=isEnabledFor3G) BOOL enabledFor3G; // ivar: _enabledFor3G
@property (nonatomic, getter=isEnabledFor4G) BOOL enabledFor4G; // ivar: _enabledFor4G
@property (nonatomic, getter=isEnabledForCellularRoaming) BOOL enabledForCellularRoaming; // ivar: _enabledForCellularRoaming
@property (nonatomic, getter=isEnabledForWifi) BOOL enabledForWifi; // ivar: _enabledForWifi
@property (nonatomic, getter=isEnabledOnBatteryPower) BOOL enabledOnBatteryPower; // ivar: _enabledOnBatteryPower
@property (nonatomic) BOOL enforceWifiOnlyOverride; // ivar: _enforceWifiOnlyOverride
@property (nonatomic) int termsAndConditionsAgreementStatus; // ivar: _termsAndConditionsAgreementStatus


+(BOOL)supportsSecureCoding;
-(BOOL)isEnabledForNetworkType:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDownloadPolicy:(id)arg0 ;
-(NSUInteger)hash;
-(id)_stringForBool:(BOOL)arg0 ;
-(id)activeDownloadPolicy:(id)arg0 ;
-(id)availableDownloadPolicyIfDifferentFromActive:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)applyDownloadPolicy:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif