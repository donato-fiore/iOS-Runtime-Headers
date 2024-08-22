// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MULTIPLATFORMDONATIONRECENCYINFO_H
#define _MULTIPLATFORMDONATIONRECENCYINFO_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface _MultiplatformDonationRecencyInfo : NSObject

@property (copy, nonatomic) NSString *localBundleIdentifier; // ivar: _localBundleIdentifier
@property (retain, nonatomic) NSDate *localDonationCreationDate; // ivar: _localDonationCreationDate
@property (copy, nonatomic) NSString *remoteBundleIdentifier; // ivar: _remoteBundleIdentifier
@property (retain, nonatomic) NSDate *remoteDonationCreationDate; // ivar: _remoteDonationCreationDate


-(id)identifierForMostRecentData;


@end


#endif