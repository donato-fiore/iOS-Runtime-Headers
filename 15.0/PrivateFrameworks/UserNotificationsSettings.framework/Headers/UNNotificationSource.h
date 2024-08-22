// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNNOTIFICATIONSOURCE_H
#define UNNOTIFICATIONSOURCE_H

@class NSString, UNNotificationIcon;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UNNotificationSourceSettings.h"

@interface UNNotificationSource : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) UNNotificationIcon *icon; // ivar: _icon
@property (readonly, nonatomic) BOOL isHiddenFromSettings; // ivar: _isHiddenFromSettings
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, copy, nonatomic) UNNotificationSourceSettings *sourceSettings; // ivar: _sourceSettings


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 isHidden:(BOOL)arg1 displayName:(id)arg2 icon:(id)arg3 settings:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif