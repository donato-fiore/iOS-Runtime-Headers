// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSNOTIFICATIONTOPICRECORD_H
#define UNSNOTIFICATIONTOPICRECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UNSNotificationTopicRecord : NSObject

@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *displayNameLocalizationKey; // ivar: _displayNameLocalizationKey
@property (nonatomic) BOOL enablesAlerts; // ivar: _enablesAlerts
@property (nonatomic) BOOL enablesBadges; // ivar: _enablesBadges
@property (nonatomic) BOOL enablesCarPlay; // ivar: _enablesCarPlay
@property (nonatomic) BOOL enablesCriticalAlerts; // ivar: _enablesCriticalAlerts
@property (nonatomic) BOOL enablesLockScreen; // ivar: _enablesLockScreen
@property (nonatomic) BOOL enablesNotificationCenter; // ivar: _enablesNotificationCenter
@property (nonatomic) BOOL enablesSounds; // ivar: _enablesSounds
@property (nonatomic) BOOL enablesSpoken; // ivar: _enablesSpoken
@property (nonatomic) BOOL enablesTimeSensitive; // ivar: _enablesTimeSensitive
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL modalAlertStyle; // ivar: _modalAlertStyle
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (copy, nonatomic) NSString *sortIdentifier; // ivar: _sortIdentifier
@property (nonatomic) BOOL supportsAlerts; // ivar: _supportsAlerts
@property (nonatomic) BOOL supportsBadges; // ivar: _supportsBadges
@property (nonatomic) BOOL supportsCarPlay; // ivar: _supportsCarPlay
@property (nonatomic) BOOL supportsCriticalAlerts; // ivar: _supportsCriticalAlerts
@property (nonatomic) BOOL supportsLockScreen; // ivar: _supportsLockScreen
@property (nonatomic) BOOL supportsNotificationCenter; // ivar: _supportsNotificationCenter
@property (nonatomic) BOOL supportsSounds; // ivar: _supportsSounds
@property (nonatomic) BOOL supportsSpoken; // ivar: _supportsSpoken
@property (nonatomic) BOOL supportsTimeSensitive; // ivar: _supportsTimeSensitive


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif