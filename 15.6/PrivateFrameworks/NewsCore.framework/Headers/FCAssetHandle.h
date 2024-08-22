// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCASSETHANDLE_H
#define FCASSETHANDLE_H

@class NSError, NSURL, NSHashTable, NSDate, NFUnfairLock, NSString, NTPBAsset;
@protocol FCContentArchivable, OS_dispatch_group, FCAssetHandleDelegate, FCAssetDataProvider;

#import <Foundation/Foundation.h>

#import "FCOperation.h"
#import "FCInterestToken.h"
#import "FCContentArchive.h"

@interface FCAssetHandle : NSObject <FCContentArchivable>

 {
    NSError *_downloadError;
    NSURL *_remoteURL;
    FCOperation *_fetchOperation;
    NSHashTable *_downloadRequests;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSUInteger _countOfPenalizedDownloadAttempts;
    NSDate *_dateOfLastDownloadAttempt;
    NFUnfairLock *_stateLock;
    id<FCAssetHandleDelegate> *_delegate;
    FCInterestToken *_holdToken;
    NSString *_assetKey;
    NSInteger _lifetimeHint;
    NSString *_rawFilePath;
    NTPBAsset *_assetMetadata;
}


@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (retain) NSObject<FCAssetDataProvider> *dataProvider; // ivar: _dataProvider
@property (readonly) NSError *downloadError;
@property (readonly, copy) NSString *filePath;
@property (readonly, nonatomic) NSURL *remoteURL;
@property (readonly, copy, nonatomic) NSString *uniqueKey;


-(id)downloadIfNeededWithCompletion:(id)arg0 ;
-(id)downloadIfNeededWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(id)downloadIfNeededWithGroup:(id)arg0 ;
-(id)downloadIfNeededWithPriority:(NSInteger)arg0 completion:(id)arg1 ;
-(id)fetchDataProviderWithCompletion:(id)arg0 ;
-(id)fetchDataProviderWithPriority:(NSInteger)arg0 completion:(id)arg1 ;
-(void)dealloc;


@end


#endif