// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDFOLLOWUPNOTIFIER_H
#define DEDFOLLOWUPNOTIFIER_H

@class NSString, FLFollowUpController;
@protocol DEDNotifier, DEDSecureArchiving, NSSecureCoding, OS_os_log;

#import <Foundation/Foundation.h>

#import "DEDNotifierConfiguration.h"

@interface DEDFollowUpNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding>



@property (retain) NSString *bugSessionIdentifier; // ivar: _bugSessionIdentifier
@property (weak) DEDNotifierConfiguration *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) FLFollowUpController *followUpController; // ivar: _followUpController
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 session:(id)arg1 ;
-(void)cancelNotification;
-(void)encodeWithCoder:(id)arg0 ;
-(void)scheduleNotification;


@end


#endif