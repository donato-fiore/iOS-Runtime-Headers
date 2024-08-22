// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMPREMIUMINFO_H
#define EDAMPREMIUMINFO_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMPremiumInfo : FATObject

@property (retain, nonatomic) NSNumber *canPurchaseUploadAllowance; // ivar: _canPurchaseUploadAllowance
@property (retain, nonatomic) NSNumber *currentTime; // ivar: _currentTime
@property (retain, nonatomic) NSNumber *premium; // ivar: _premium
@property (retain, nonatomic) NSNumber *premiumCancellationPending; // ivar: _premiumCancellationPending
@property (retain, nonatomic) NSNumber *premiumExpirationDate; // ivar: _premiumExpirationDate
@property (retain, nonatomic) NSNumber *premiumExtendable; // ivar: _premiumExtendable
@property (retain, nonatomic) NSNumber *premiumPending; // ivar: _premiumPending
@property (retain, nonatomic) NSNumber *premiumRecurring; // ivar: _premiumRecurring
@property (retain, nonatomic) NSNumber *premiumUpgradable; // ivar: _premiumUpgradable
@property (retain, nonatomic) NSString *sponsoredGroupName; // ivar: _sponsoredGroupName
@property (retain, nonatomic) NSNumber *sponsoredGroupRole; // ivar: _sponsoredGroupRole


+(id)structFields;
+(id)structName;


@end


#endif