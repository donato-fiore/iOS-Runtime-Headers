// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RADIOMODEL_H
#define RADIOMODEL_H

@class NSOperationQueue, BKSProcessAssertion, NSManagedObjectContext, NSManagedObjectModel, NSFetchedResultsController, NSFetchRequest, NSMapTable, NSPersistentStoreCoordinator, NSArray, NSString;
@protocol NSFetchedResultsControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface RadioModel : NSObject <NSFetchedResultsControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSOperationQueue *_backgroundCleanupQueue;
    BKSProcessAssertion *_backgroundProcessAssertion;
    NSInteger _backgroundTaskCount;
    NSObject<OS_dispatch_source> *_backgroundTaskInvalidateTimerSource;
    NSManagedObjectContext *_context;
    BOOL _isBackgroundModel;
    NSManagedObjectModel *_model;
    int _modelChangedToken;
    BOOL _modelChangedTokenIsValid;
    int _modelDeletedToken;
    BOOL _modelDeletedTokenIsValid;
    NSFetchedResultsController *_stationFetchedResultsController;
    NSFetchRequest *_stationFetchRequest;
    NSMapTable *_stationToSkipControllerMapTable;
    NSPersistentStoreCoordinator *_storeCoordinator;
    NSInteger _transactionCount;
}


@property (readonly, nonatomic) NSArray *allStations;
@property (nonatomic) NSUInteger authenticatedAccountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *featuredStations;
@property (copy, nonatomic) NSString *globalHash;
@property (nonatomic) NSUInteger globalVersion;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *previewStations;
@property (readonly, copy, nonatomic) NSArray *reportProblemIssueTypes;
@property (copy, nonatomic) NSArray *stationSortOrdering;
@property (readonly, nonatomic) NSArray *stations;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *userStations;


+(id)_persistentStoreConfigurationOptions;
+(id)_radioDatabasePath;
+(id)_radioDirectoryPath;
+(id)backgroundModel;
+(id)sharedModel;
+(void)_postAccountDidDeauthenticateNotification;
+(void)deleteAllData;
-(NSInteger)databaseVersion;
-(NSUInteger)_numberOfSkipsUsedWithSkipTimestamps:(id)arg0 currentTimestamp:(CGFloat)arg1 skipInterval:(CGFloat)arg2 returningEarliestSkipTimestamp:(*CGFloat)arg3 ;
-(id)_arrayByReplacingManagedObjectsInArray:(id)arg0 ;
-(id)_databasePropertyValueForKey:(id)arg0 ;
-(id)_init;
-(id)_initBackgroundModelWithPersistentStoreCoordinator:(id)arg0 ;
-(id)_setByReplacingManagedObjectsInSet:(id)arg0 ;
-(id)context;
-(id)convertObject:(id)arg0 ;
-(id)convertObjects:(id)arg0 ;
-(id)convertObjectsInSet:(id)arg0 ;
-(id)init;
-(id)newFeaturedStationWithDictionary:(id)arg0 ;
-(id)newPreviewStationWithDictionary:(id)arg0 ;
-(id)newStationWithDictionary:(id)arg0 ;
-(id)stationWithHash:(id)arg0 ;
-(id)stationWithID:(NSInteger)arg0 ;
-(id)stationWithPersistentID:(NSInteger)arg0 ;
-(id)stationWithStationStringID:(id)arg0 ;
-(void)_beginBackgroundTaskAssertion;
-(void)_contextDidSaveNotification:(id)arg0 ;
-(void)_createRadioDirectoryAndDatabaseIfNecessary;
-(void)_defaultRadioModelInitialization;
-(void)_endBackgroundTaskAssertion;
-(void)_performTransactionAndSave:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)_postContextDidChangeNotification:(id)arg0 ;
-(void)_prepareModel;
-(void)_resetModel;
-(void)_setDatabasePropertyValue:(id)arg0 forKey:(id)arg1 ;
-(void)controller:(id)arg0 didChangeObject:(id)arg1 atIndexPath:(id)arg2 forChangeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllData;
-(void)deletePreviewStation:(id)arg0 ;
-(void)deleteStation:(id)arg0 ;
-(void)deleteStationWithID:(NSInteger)arg0 ;
-(void)performTransactionWithBlock:(id)arg0 ;
-(void)performWriteTransactionWithBlock:(id)arg0 ;
-(void)setDatabaseVersion:(NSInteger)arg0 ;
-(void)setTrackPlaybackDescriptorQueue:(id)arg0 forStation:(id)arg1 ;


@end


#endif