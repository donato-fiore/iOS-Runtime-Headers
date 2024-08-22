// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUSERNOTIFICATIONCONTEXT_H
#define STUSERNOTIFICATIONCONTEXT_H

@class NSNumber, NSString, NSArray, UNNotificationTrigger;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STUserNotificationContext : NSObject <NSSecureCoding>



@property (readonly) NSNumber *destinations;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *localizedUserNotificationBodyArguments; // ivar: _localizedUserNotificationBodyArguments
@property (readonly, copy) NSString *notificationBundleIdentifier;
@property (copy, nonatomic) UNNotificationTrigger *trigger; // ivar: _trigger


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)customizeNotificationContent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notificationContentWithCompletionBlock:(id)arg0 ;


@end


#endif