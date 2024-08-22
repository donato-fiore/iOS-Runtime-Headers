// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDUSERNOTIFICATIONNOTIFIER_H
#define DEDUSERNOTIFICATIONNOTIFIER_H

@class NSString, UNUserNotificationCenter;
@protocol DEDNotifier, DEDNotificationDelivering, DEDSecureArchiving, NSSecureCoding, OS_os_log;

#import <Foundation/Foundation.h>

#import "DEDNotifierConfiguration.h"

@interface DEDUserNotificationNotifier : NSObject <DEDNotifier, DEDNotificationDelivering, DEDSecureArchiving, NSSecureCoding>



@property (retain) NSString *bugSessionIdentifier; // ivar: _bugSessionIdentifier
@property (retain) UNUserNotificationCenter *center; // ivar: _center
@property (weak) DEDNotifierConfiguration *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
+(void)forceRemoveNotificationWithIdentifier:(id)arg0 hostIdentifier:(id)arg1 ;
-(id)createNotificationCenter;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 session:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)presentNotificationForSession:(id)arg0 ;
-(void)removeNotificationForSession:(id)arg0 ;


@end


#endif