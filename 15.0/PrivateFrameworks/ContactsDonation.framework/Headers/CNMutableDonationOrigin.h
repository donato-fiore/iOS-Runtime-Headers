// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMUTABLEDONATIONORIGIN_H
#define CNMUTABLEDONATIONORIGIN_H

@class NSString, NSDate;


#import "CNDonationOrigin.h"

@interface CNMutableDonationOrigin : CNDonationOrigin

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *clusterIdentifier;
@property (copy, nonatomic) NSDate *donationDate;
@property (copy, nonatomic) NSString *donationIdentifier;
@property (copy, nonatomic) NSDate *expirationDate;


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif