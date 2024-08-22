// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLFOLLOWUPITEM_H
#define FLFOLLOWUPITEM_H

@class NSData, NSString, NSArray, NSDate, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FLFollowUpNotification.h"

@interface FLFollowUpItem : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *_userInfoData;
@property (copy) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSString *bundleIconName; // ivar: _bundleIconName
@property (copy) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) NSString *collectionIdentifier; // ivar: _collectionIdentifier
@property (copy, nonatomic) NSString *delegateMachServiceName; // ivar: _delegateMachServiceName
@property NSUInteger displayStyle; // ivar: _displayStyle
@property (copy) NSDate *expirationDate; // ivar: _expirationDate
@property (copy) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (copy, nonatomic) NSString *informativeFooterText; // ivar: _informativeFooterText
@property (copy, nonatomic) NSString *informativeText; // ivar: _informativeText
@property (readonly) BOOL isExpired;
@property (retain, nonatomic) FLFollowUpNotification *notification; // ivar: _notification
@property (copy, nonatomic) NSString *representingBundlePath; // ivar: _representingBundlePath
@property BOOL shouldPersistWhenActivated; // ivar: _shouldPersistWhenActivated
@property BOOL shouldPersistWhenDismissed; // ivar: _shouldPersistWhenDismissed
@property (nonatomic) BOOL showInSettings; // ivar: _showInSettings
@property (nonatomic) NSUInteger sqlID; // ivar: _sqlID
@property (copy, nonatomic) NSString *targetBundleIdentifier; // ivar: _targetBundleIdentifier
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (copy) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(NSInteger)_daysRemaining:(id)arg0 ceiling:(BOOL)arg1 ;
-(BOOL)_shouldAdjustInstanceToMidnight;
-(BOOL)displayExpirationDate;
-(BOOL)isHSA2LoginItem;
-(BOOL)isHSA2PasswordResetItem;
-(id)_informativeNotificationTextOrDate;
-(id)_midnightAdjustedDate;
-(id)description;
-(id)formattedExpirationDate;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithoutDefaults;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif