// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKNOTIFICATION_H
#define CKNOTIFICATION_H

@class NSString, NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKContainerID.h"
#import "CKNotificationID.h"
#import "CKRecordID.h"

@interface CKNotification : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *alertActionLocalizationKey; // ivar: _alertActionLocalizationKey
@property (copy, nonatomic) NSString *alertBody; // ivar: _alertBody
@property (copy, nonatomic) NSString *alertLaunchImage; // ivar: _alertLaunchImage
@property (copy, nonatomic) NSArray *alertLocalizationArgs; // ivar: _alertLocalizationArgs
@property (copy, nonatomic) NSString *alertLocalizationKey; // ivar: _alertLocalizationKey
@property (copy, nonatomic) NSNumber *badge; // ivar: _badge
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (nonatomic) BOOL isPruned; // ivar: _isPruned
@property (copy, nonatomic) CKNotificationID *notificationID; // ivar: _notificationID
@property (nonatomic) NSInteger notificationType; // ivar: _notificationType
@property (copy, nonatomic) NSString *soundName; // ivar: _soundName
@property (readonly, copy, nonatomic) NSString *subscriptionID; // ivar: _subscriptionID
@property (copy, nonatomic) CKRecordID *subscriptionOwnerUserRecordID; // ivar: _subscriptionOwnerUserRecordID
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSArray *subtitleLocalizationArgs; // ivar: _subtitleLocalizationArgs
@property (copy, nonatomic) NSString *subtitleLocalizationKey; // ivar: _subtitleLocalizationKey
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *titleLocalizationArgs; // ivar: _titleLocalizationArgs
@property (copy, nonatomic) NSString *titleLocalizationKey; // ivar: _titleLocalizationKey


+(BOOL)supportsSecureCoding;
+(id)_realNotificationFromRemoteNotificationDictionary:(id)arg0 ;
+(id)notificationFromRemoteNotificationDictionary:(id)arg0 ;
-(BOOL)isRead;
-(id)CKPropertiesDescription;
-(id)_initBare;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRemoteNotificationDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif