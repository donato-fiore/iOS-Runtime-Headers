// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFCLOUDSYNCMETADATA_H
#define MKFCLOUDSYNCMETADATA_H

@class NSPersistentHistoryToken;


#import "HMDManagedObject.h"

@interface MKFCloudSyncMetadata : HMDManagedObject

@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForWorkingStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForWorkingStore;
@property (nonatomic) BOOL unique;


+(id)fetchRequest;
-(void)willSave;


@end


#endif