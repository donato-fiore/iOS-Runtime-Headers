// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDAPPLIBRARY_H
#define ASDAPPLIBRARY_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"
#import "ASDNotificationCenter.h"

@interface ASDAppLibrary : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
    ASDNotificationCenter *_notificationCenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)launchApp:(id)arg0 ;
+(NSInteger)launchApp:(id)arg0 onPairedDevice:(id)arg1 ;
+(NSInteger)launchMessagesExtensionForApp:(id)arg0 ;
+(id)interface;
+(id)sharedInstance;
+(unsigned char)openableStatusForExecutableAtPath:(id)arg0 ;
+(void)launchApp:(id)arg0 onPairedDevice:(id)arg1 withResultHandler:(id)arg2 ;
+(void)launchApp:(id)arg0 withResultHandler:(id)arg1 ;
+(void)launchMessagesExtensionForApp:(id)arg0 withResultHandler:(id)arg1 ;
+(void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)arg0 withResultHandler:(id)arg1 ;
+(void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg0 withResultHandler:(id)arg1 ;
+(void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)arg0 withResultHandler:(id)arg1 ;
+(void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg0 withResultHandler:(id)arg1 ;
+(void)uninstallApp:(id)arg0 requestUserConfirmation:(BOOL)arg1 withResultHandler:(id)arg2 ;
+(void)uninstallApp:(id)arg0 withResultHandler:(id)arg1 ;
-(id)_initWithServiceBroker:(id)arg0 notificationCenter:(id)arg1 ;
-(id)init;


@end


#endif