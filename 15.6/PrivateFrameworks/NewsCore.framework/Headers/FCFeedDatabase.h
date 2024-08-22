// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFEEDDATABASE_H
#define FCFEEDDATABASE_H

@class NSManagedObjectContext, NSPersistentStore, NSEntityDescription, NSMutableDictionary, NSMutableSet, NSString, NSURL;
@protocol FCOperationThrottlerDelegate, FCFeedDatabaseProtocol, OS_dispatch_queue, FCOperationThrottler;

#import <Foundation/Foundation.h>


@interface FCFeedDatabase : NSObject <FCOperationThrottlerDelegate, FCFeedDatabaseProtocol>

 {
    unsigned short _version;
    int _nextFeedLookupID;
    NSInteger _usage;
    NSObject<OS_dispatch_queue> *_initQueue;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStore *_persistentStore;
    NSEntityDescription *_feedEntity;
    NSEntityDescription *_feedSegmentEntity;
    NSEntityDescription *_feedItemIndexEntity;
    NSEntityDescription *_feedItemEntity;
    NSMutableDictionary *_cachedFeedsByID;
    NSMutableSet *_modifiedFeedIDs;
    id<FCOperationThrottler> *_saveThrottler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *parentDirectoryURL; // ivar: _parentDirectoryURL
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger usage;


+(id)temporaryFeedDatabaseWithEndpoint:(NSInteger)arg0 ;
+(unsigned short)currentFeedDatabaseVersion;
+(void)initialize;
-(id)initWithParentDirectoryURL:(id)arg0 usage:(NSInteger)arg1 endpoint:(NSInteger)arg2 ;
-(id)t_lookupFeedID:(id)arg0 range:(id)arg1 maxCount:(NSUInteger)arg2 ;
-(void)operationThrottlerPerformOperation:(id)arg0 ;
-(void)prewarm;
-(void)saveWithCompletionHandler:(id)arg0 ;
-(void)t_insertSegmentForFeedID:(id)arg0 range:(id)arg1 items:(id)arg2 ;
-(void)teardown;


@end


#endif