// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIUSERNOTIFICATIONSETTINGS_H
#define UIUSERNOTIFICATIONSETTINGS_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *categories; // ivar: _categories
@property (readonly, nonatomic) NSUInteger types; // ivar: _types


+(BOOL)supportsSecureCoding;
+(id)settingsForRegisteredSettings:(id)arg0 requestedSettings:(id)arg1 ;
+(id)settingsForTypes:(NSUInteger)arg0 categories:(id)arg1 ;
+(id)settingsForUserNotificationTypes:(NSUInteger)arg0 userNotificationActionSettings:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mayPresentUserNotificationOfType:(NSUInteger)arg0 ;
-(NSUInteger)allowedUserNotificationTypes;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypes:(NSUInteger)arg0 categories:(id)arg1 ;
-(id)initWithUserNotificationTypes:(NSUInteger)arg0 userNotificationActionSettings:(id)arg1 ;
-(id)userNotificationActionSettings;
-(id)validatedSettings;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif