// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERAUSERNOTIFICATIONSETTINGS_H
#define HMCAMERAUSERNOTIFICATIONSETTINGS_H

@class NSArray, NSString, NSPredicate;
@protocol HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCameraUserNotificationSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled; // ivar: _accessModeChangeNotificationEnabled
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled; // ivar: _reachabilityEventNotificationEnabled
@property (readonly, copy) NSString *shortDescription;
@property (copy) NSPredicate *smartBulletinBoardNotificationCondition; // ivar: _smartBulletinBoardNotificationCondition
@property (getter=isSmartBulletinBoardNotificationEnabled) BOOL smartBulletinBoardNotificationEnabled; // ivar: _smartBulletinBoardNotificationEnabled
@property (readonly) Class superclass;
@property NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif