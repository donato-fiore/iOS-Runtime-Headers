// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDMUTABLEIAPINFO_H
#define ASDMUTABLEIAPINFO_H

@class NSNumber, NSDate, NSString;


#import "ASDIAPInfo.h"

@interface ASDMutableIAPInfo : ASDIAPInfo

@property (retain, nonatomic) NSNumber *adamId;
@property (retain, nonatomic) NSNumber *appAdamId;
@property (nonatomic) BOOL autoRenewStatus;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSNumber *expirationTimestamp;
@property (nonatomic) BOOL hasUsedFreeOffer;
@property (nonatomic) BOOL hasUsedIntroPricingOffer;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSNumber *lastModifiedTimestamp;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (retain, nonatomic) NSNumber *purchaseTimestamp;
@property (retain, nonatomic) NSString *subscriptionFamilyId;
@property (nonatomic) unsigned char type;




@end


#endif