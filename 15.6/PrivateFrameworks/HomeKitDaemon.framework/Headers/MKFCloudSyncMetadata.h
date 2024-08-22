// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCLOUDSYNCMETADATA_H
#define MKFCLOUDSYNCMETADATA_H

@class NSManagedObject, NSString, NSPersistentHistoryToken;
@protocol HMFLogging;



@interface MKFCloudSyncMetadata : NSManagedObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForWorkingStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForWorkingStore;
@property (retain, nonatomic) NSPersistentHistoryToken *primitiveHistoryTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *primitiveHistoryTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *primitiveHistoryTokenForWorkingStore;
@property (readonly) Class superclass;
@property (nonatomic) BOOL unique;


+(id)fetchRequest;
+(id)logCategory;
-(void)willSave;


@end


#endif