// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDNOTIFIERCONFIGURATION_H
#define DEDNOTIFIERCONFIGURATION_H

@class NSString, NSURL, NSDictionary;
@protocol DEDSecureArchiving, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DEDNotifierConfiguration : NSObject <DEDSecureArchiving, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *followupExtensionIdentifier; // ivar: _followupExtensionIdentifier
@property CGFloat followupFrequency; // ivar: _followupFrequency
@property (retain) NSString *followupLocalizedInformativeText; // ivar: _followupLocalizedInformativeText
@property (retain) NSString *followupLocalizedTitle; // ivar: _followupLocalizedTitle
@property (retain) NSString *followupNotificationActionTitle; // ivar: _followupNotificationActionTitle
@property (retain) NSURL *followupNotificationActionURL; // ivar: _followupNotificationActionURL
@property (retain) NSURL *followupReviewActionURL; // ivar: _followupReviewActionURL
@property (retain) NSDictionary *followupReviewActionUserInfo; // ivar: _followupReviewActionUserInfo
@property (retain) NSURL *followupSendActionURL; // ivar: _followupSendActionURL
@property (retain) NSDictionary *followupSendActionUserInfo; // ivar: _followupSendActionUserInfo
@property (retain) NSString *followupUniqueIdentifier; // ivar: _followupUniqueIdentifier
@property BOOL followupUseSpringboardNotification; // ivar: _followupUseSpringboardNotification
@property (readonly) NSUInteger hash;
@property (retain) NSString *hostAppIdentifier; // ivar: _hostAppIdentifier
@property (retain) NSString *localizedNotificationBody; // ivar: _localizedNotificationBody
@property (retain) NSString *localizedNotificationTitle; // ivar: _localizedNotificationTitle
@property (retain) NSString *reviewActionLabel; // ivar: _reviewActionLabel
@property (retain) NSString *sendActionLabel; // ivar: _sendActionLabel
@property (readonly) Class superclass;
@property BOOL userNotificationShouldPlaySound; // ivar: _userNotificationShouldPlaySound


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHostAppIdentifier:(id)arg0 localizedNotificationTitle:(id)arg1 localizedNotificationBody:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif