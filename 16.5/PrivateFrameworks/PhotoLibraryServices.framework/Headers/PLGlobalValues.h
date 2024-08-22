// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLGLOBALVALUES_H
#define PLGLOBALVALUES_H

@class NSManagedObjectContext, NSNumber, NSDictionary, NSDate, NSPersistentHistoryToken, NSString;

#import <Foundation/Foundation.h>


@interface PLGlobalValues : NSObject {
    NSManagedObjectContext *_moc;
}


@property (nonatomic) BOOL didImportFileSystemAssets;
@property (retain, nonatomic) NSNumber *greenTeaContactsAuthorization;
@property (retain, nonatomic) NSDictionary *greenValues;
@property (retain, nonatomic) NSDate *inProgressFullIndexSyndicationSyncDate;
@property (readonly, nonatomic) BOOL isInitialDuplicateDetectorProcessingCompleted;
@property (readonly, nonatomic) BOOL isRebuildComplete;
@property (nonatomic, getter=isJournalRebuildRequired) BOOL journalRebuildRequired;
@property (retain, nonatomic) NSDate *lastAttachmentSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastChatSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastDeleteSyndicationSyncDate;
@property (retain, nonatomic) NSPersistentHistoryToken *lastDuplicateDetectorProcessingToken;
@property (retain, nonatomic) NSDate *lastFullIndexSyndicationSyncDate;
@property (copy, nonatomic) NSString *lastGuestAssetSyncTargetLibraryPath;
@property (retain, nonatomic) NSPersistentHistoryToken *lastGuestAssetSyncToken;
@property (retain, nonatomic) NSPersistentHistoryToken *lastInitialDuplicateDetectorProcessingCompletedToken;
@property (copy, nonatomic) NSString *lastPersonSyncSourceLibraryPath;
@property (retain, nonatomic) NSPersistentHistoryToken *lastPersonSyncToken;
@property (retain, nonatomic) NSPersistentHistoryToken *lastSharedAssetContainerProcessingToken;
@property (readonly, nonatomic) NSUInteger libraryCreateOptions;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSString *lockedResourceTransitionAssetUUID;
@property (retain, nonatomic) NSNumber *orphanedSceneClassificationsCount;
@property (retain, nonatomic) NSDate *syndicationPrefetchDownloadThrottlingDate;
@property (retain, nonatomic) NSDate *syndicationStartDate;


-(BOOL)shouldPrefetchWidgetResources;
-(id)_getValueUsingPerformBlockAndWait:(id)arg0 ;
-(id)initWithManagedObjectContext:(id)arg0 ;
-(void)_setRebuildComplete;
// -(void)_setValueUsingPerformBlockAndWait:(id)arg0 responsibleCaller:(unk)arg1  ;
-(void)dontImportFileSystemDataIntoDatabase;
-(void)setRebuildComplete;
-(void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize )arg0 ;


@end


#endif