// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITSETUPASSISTANT_H
#define PFCLOUDKITSETUPASSISTANT_H

@class CKContainer, CKDatabase, CKDatabaseSubscription, NSURL, CKRecordID;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "NSCloudKitMirroringDelegateOptions.h"
#import "PFCloudKitStoreMonitor.h"
#import "NSPersistentCloudKitContainerEvent.h"
#import "NSCloudKitMirroringDelegateSetupRequest.h"

@interface PFCloudKitSetupAssistant : NSObject {
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    CKContainer *_container;
    CKDatabase *_database;
    CKDatabaseSubscription *_databaseSubscription;
    NSURL *_largeBlobDirectoryURL;
    NSObject<OS_dispatch_semaphore> *_cloudKitSemaphore;
    PFCloudKitStoreMonitor *_storeMonitor;
    NSPersistentCloudKitContainerEvent *_setupEvent;
    NSCloudKitMirroringDelegateSetupRequest *_setupRequest;
    CKRecordID *_currentUserRecordID;
}




-(id)initWithSetupRequest:(id)arg0 mirroringOptions:(id)arg1 observedStore:(id)arg2 ;
-(void)dealloc;


@end


#endif