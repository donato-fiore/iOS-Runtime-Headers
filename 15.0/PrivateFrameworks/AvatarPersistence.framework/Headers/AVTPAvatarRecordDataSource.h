// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTPAVATARRECORDDATASOURCE_H
#define AVTPAVATARRECORDDATASOURCE_H

@class NSString, NSNotificationCenter, NSPointerArray, NSMutableArray;
@protocol AVTAvatarStoreDelegate, AVTAvatarRecordDataSourceInternal, AVTAvatarRecordDataSource, OS_dispatch_queue, AVTUILogger, NSObject;

#import <Foundation/Foundation.h>

#import "AVTObservableAvatarStore.h"
#import "AVTAvatarFetchRequest.h"
#import "AVTPAvatarStore.h"

@interface AVTPAvatarRecordDataSource : NSObject <AVTAvatarStoreDelegate, AVTAvatarRecordDataSourceInternal, AVTAvatarRecordDataSource>



@property (readonly, nonatomic) AVTObservableAvatarStore *backingStore; // ivar: _backingStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTAvatarFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) NSObject<NSObject> *nts_changeNotificationObserver; // ivar: _nts_changeNotificationObserver
@property (readonly, nonatomic) NSPointerArray *nts_observers; // ivar: _nts_observers
@property (retain, nonatomic) NSMutableArray *nts_recordStorage; // ivar: _nts_recordStorage
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVTPAvatarStore *underlyingStore; // ivar: _underlyingStore


+(NSUInteger)indexForInsertingDuplicateRecord:(id)arg0 original:(id)arg1 inRecords:(id)arg2 ;
+(NSUInteger)indexForInsertingRecord:(id)arg0 inRecords:(id)arg1 ;
+(id)defaultUIDataSourceWithDomainIdentifier:(id)arg0 ;
+(id)loadRecordsWithStore:(id)arg0 request:(id)arg1 logger:(id)arg2 ;
+(id)sortedRecordsEditableFirstReverseOrder:(id)arg0 ;
-(BOOL)areRecordsLoaded;
-(NSUInteger)indexOfRecordPassingTest:(id)arg0 ;
-(NSUInteger)numberOfRecords;
-(id)indexSetForEditableRecords;
-(id)indexesOfRecordsPassingTest:(id)arg0 ;
-(id)initWithRecordStore:(id)arg0 fetchRequest:(id)arg1 ;
-(id)initWithRecordStore:(id)arg0 fetchRequest:(id)arg1 callbackQueue:(id)arg2 environment:(id)arg3 ;
-(id)initWithRecordStore:(id)arg0 fetchRequest:(id)arg1 callbackQueue:(id)arg2 logger:(id)arg3 notificationCenter:(id)arg4 ;
-(id)initWithRecordStore:(id)arg0 fetchRequest:(id)arg1 environment:(id)arg2 ;
-(id)internalRecordStore;
-(id)recordAtIndex:(NSUInteger)arg0 ;
-(id)recordStore;
-(void)addObserver:(id)arg0 ;
-(void)addPriorityObserver:(id)arg0 ;
-(void)avatarStoreDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didRecieveAvatarChangeDistributedNotification:(id)arg0 ;
-(void)enumerateObserversRespondingToSelector:(SEL)arg0 withBlock:(id)arg1 ;
-(void)flushRecordsForEnteringBackground;
-(void)performObserversWork:(id)arg0 ;
-(void)performSyncWorkWithRecords:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)store:(id)arg0 didCreateDuplicateAvatar:(id)arg1 forOriginal:(id)arg2 postCompletionHandler:(id)arg3 ;
-(void)store:(id)arg0 didDeleteAvatarWithIdentifier:(id)arg1 postCompletionHandler:(id)arg2 ;
-(void)store:(id)arg0 didSaveAvatar:(id)arg1 postCompletionHandler:(id)arg2 ;


@end


#endif