// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUDOWNLOADOPTIONS_H
#define SUDOWNLOADOPTIONS_H

@protocol NSSecureCoding, NSCopying, OS_dispatch_queue, SUDownloadPolicy;


#import "SUOptionsBase.h"
#import "SUDescriptor.h"

@interface SUDownloadOptions : SUOptionsBase <NSSecureCoding, NSCopying>

 {
    int _activeDownloadPolicyType;
    NSObject<OS_dispatch_queue> *_stateQueue;
}


@property (retain, nonatomic) NSObject<SUDownloadPolicy> *activeDownloadPolicy;
@property (nonatomic) int activeDownloadPolicyType;
@property (nonatomic) BOOL allowUnrestrictedCellularDownload; // ivar: _allowUnrestrictedCellularDownload
@property (nonatomic, getter=isAutoDownload) BOOL autoDownload; // ivar: _autoDownload
@property (readonly, retain, nonatomic) SUDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) SUDescriptor *downloadDescriptor; // ivar: _downloadDescriptor
@property (nonatomic) int downloadFeeAgreementStatus; // ivar: _downloadFeeAgreementStatus
@property (nonatomic, getter=isDownloadOnly) BOOL downloadOnly; // ivar: _downloadOnly
@property (readonly, nonatomic, getter=isEnabledForCellular) BOOL enabledForCellular;
@property (readonly, nonatomic, getter=isEnabledForCellularRoaming) BOOL enabledForCellularRoaming;
@property (readonly, nonatomic, getter=isEnabledForExpensiveNetwork) BOOL enabledForExpensiveNetwork;
@property (readonly, nonatomic, getter=isEnabledForWifi) BOOL enabledForWifi;
@property (readonly, nonatomic, getter=isEnabledOnBatteryPower) BOOL enabledOnBatteryPower;
@property (nonatomic) int termsAndConditionsAgreementStatus; // ivar: _termsAndConditionsAgreementStatus


+(BOOL)supportsSecureCoding;
-(BOOL)allowCellular;
-(BOOL)allowExpensiveNetwork;
-(BOOL)allowsUnrestrictedCellularDownload;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 andDescriptor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif