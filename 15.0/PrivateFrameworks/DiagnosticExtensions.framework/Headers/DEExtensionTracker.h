// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEEXTENSIONTRACKER_H
#define DEEXTENSIONTRACKER_H


#import <Foundation/Foundation.h>


@interface DEExtensionTracker : NSObject



+(BOOL)hasInactiveLoggingSession:(id)arg0 ;
+(BOOL)shouldSetupWithIdentifier:(id)arg0 session:(id)arg1 expirationDate:(id)arg2 ;
+(BOOL)shouldTeardownWithIdentifier:(id)arg0 session:(id)arg1 ;
+(CGFloat)xpcActivityTimeinterval;
+(id)criteria:(id)arg0 ;
+(id)currentLoggingExtensions;
+(id)sharedSerialQueue;
+(id)userDefaults;
+(void)_updateExtensionExpirationDateWithIdentifier:(id)arg0 expirationDate:(id)arg1 ;
+(void)_updateXPCActivityDate;
+(void)checkIn;
+(void)decreaseRetainCountWithIdentifier:(id)arg0 session:(id)arg1 ;
+(void)extensionTrackerCleanup;
+(void)increaseRetainCountWithIdentifier:(id)arg0 session:(id)arg1 ;
+(void)saveCurrentLoggingExtensionsWithDictionary:(id)arg0 ;
+(void)scheduleXPCActivity;
+(void)updateExpirationDateWithIdentifier:(id)arg0 expirationDate:(id)arg1 ;
+(void)updateRetainCountWithIdentifier:(id)arg0 session:(id)arg1 offsetBy:(int)arg2 ;


@end


#endif