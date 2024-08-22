// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMUTABLETELEPHONYCARRIERBUNDLEINFO_H
#define STMUTABLETELEPHONYCARRIERBUNDLEINFO_H

@class NSString, NSArray;


#import "STTelephonyCarrierBundleInfo.h"

@interface STMutableTelephonyCarrierBundleInfo : STTelephonyCarrierBundleInfo

@property (nonatomic) BOOL LTEConnectionShows4G;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *customerServicePhoneNumber;
@property (copy, nonatomic) NSArray *disabledApplicationIDs;
@property (copy, nonatomic) NSString *homeCountryCode;
@property (nonatomic, getter=isReinitiatingActivationDisabled) BOOL reinitiatingActivationDisabled;
@property (nonatomic) BOOL suppressSOSOnlyWithLimitedService;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif