// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQCLOUDSTORAGESUMMARY_H
#define ICQCLOUDSTORAGESUMMARY_H

@class NSNumber, NSString, NSURL, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQBackupInfo.h"
#import "ICQSubscriptionInfo.h"

@interface ICQCloudStorageSummary : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) ICQBackupInfo *backupInfo; // ivar: _backupInfo
@property (retain, nonatomic) NSNumber *commerceStorage; // ivar: _commerceStorage
@property (copy, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (retain, nonatomic) NSNumber *freeStorage; // ivar: _freeStorage
@property (copy, nonatomic) NSString *manageStorageTitle; // ivar: _manageStorageTitle
@property (retain, nonatomic) NSURL *manageStorageURL; // ivar: _manageStorageURL
@property (retain, nonatomic) NSArray *mediaStorage; // ivar: _mediaStorage
@property (retain, nonatomic) ICQSubscriptionInfo *subscriptionInfo; // ivar: _subscriptionInfo
@property (retain, nonatomic) NSArray *tips; // ivar: _tips
@property (retain, nonatomic) NSNumber *totalStorage; // ivar: _totalStorage
@property (retain, nonatomic) NSNumber *usedStorage; // ivar: _usedStorage


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif