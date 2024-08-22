// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKARGONCLOUDKITCLIENT_H
#define NTKARGONCLOUDKITCLIENT_H

@class CKDatabase, NSString, NSError, CKRecordZoneID, NSURL;
@protocol NTKArgonFetcherProviding, NTKArgonPublisherProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKArgonCloudKitClient : NSObject <NTKArgonFetcherProviding, NTKArgonPublisherProviding>



@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSError *recordZoneError; // ivar: _recordZoneError
@property (retain, nonatomic) CKRecordZoneID *recordZoneID; // ivar: _recordZoneID
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *temporaryStorageURL; // ivar: _temporaryStorageURL
@property (readonly, copy, nonatomic) NSString *zoneName; // ivar: _zoneName


+(id)sharedClientQueue;
-(id)initWithCloudKitDatabase:(id)arg0 temporaryStorageURL:(id)arg1 zoneName:(id)arg2 ;
-(id)initWithCloudKitDatabase:(id)arg0 zoneName:(id)arg1 ;
-(void)_fetchNewRecordsSinceChangeToken:(id)arg0 forReason:(NSInteger)arg1 attemptNumber:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_publishRecord:(id)arg0 completion:(id)arg1 ;
-(void)_unpublishRecordsOfType:(id)arg0 matchingPredicate:(id)arg1 completion:(id)arg2 ;
-(void)_unpublishRecordsWithPartialQueryOperation:(id)arg0 accumulatedRecords:(id)arg1 completion:(id)arg2 ;
-(void)fetchNewRecordsSinceChangeToken:(id)arg0 forReason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)publishKeyDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)requestIdentifierTokenForCurrentUserWithCompletion:(id)arg0 ;
-(void)unpublishKeyDescriptor:(id)arg0 completion:(id)arg1 ;


@end


#endif