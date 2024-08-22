// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDISTRIBUTEDNOTIFICATIONHANDLER_H
#define PLDISTRIBUTEDNOTIFICATIONHANDLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundleController.h"

@interface PLDistributedNotificationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}




-(id)initWithLibraryBundleController:(id)arg0 ;
-(void)_handleCloudPhotoNotification;
-(void)_handleNotification:(id)arg0 ;
-(void)_openSystemPhotoLibrary;
-(void)registerForNotifications;


@end


#endif