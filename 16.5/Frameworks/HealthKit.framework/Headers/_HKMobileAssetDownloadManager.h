// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKMOBILEASSETDOWNLOADMANAGER_H
#define _HKMOBILEASSETDOWNLOADMANAGER_H

@class NSMutableArray, NSMutableSet, MADownloadOptions, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HKMobileAssetDownloadManager.h"

@interface _HKMobileAssetDownloadManager : NSObject {
    NSMutableArray *_pendingOperations;
    NSMutableSet *_downloadingQueryParams;
    NSObject<OS_dispatch_queue> *_queue;
    _HKMobileAssetDownloadManager *_retainedSelf;
}


@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (nonatomic) NSInteger maxNumberOfRetriesAllowed; // ivar: _maxNumberOfRetriesAllowed
@property (copy, nonatomic) id *mobileAssetDownloadCompletionHandler; // ivar: _mobileAssetDownloadCompletionHandler
@property (copy, nonatomic) MADownloadOptions *mobileAssetDownloadOptions; // ivar: _mobileAssetDownloadOptions
@property (nonatomic) NSInteger mobileAssetQueryReturnTypes; // ivar: _mobileAssetQueryReturnTypes
@property (readonly, copy, nonatomic) NSString *mobileAssetTypeName; // ivar: _mobileAssetTypeName
@property (nonatomic) BOOL shouldAutoDownloadRemoteAssets; // ivar: _shouldAutoDownloadRemoteAssets
@property (nonatomic) BOOL shouldQueryLocalAssetsFirst; // ivar: _shouldQueryLocalAssetsFirst


-(id)_errorWithDomain:(id)arg0 code:(NSInteger)arg1 ;
-(id)_generateAssetQueryFromQueryParams:(id)arg0 returnTypes:(NSInteger)arg1 ;
-(id)description;
-(id)initWithMobileAssetTypeName:(id)arg0 queue:(id)arg1 ;
-(id)unitTesting_queue;
-(void)_callDownloadCompletionHandlerWithAssets:(id)arg0 queryParams:(id)arg1 ;
-(void)_callErrorHandlerWithError:(id)arg0 ;
-(void)_queue_downloadAssets:(id)arg0 completion:(id)arg1 ;
-(void)_queue_fetchAssetsWithLocalInformation:(BOOL)arg0 shouldRequery:(BOOL)arg1 queryParams:(id)arg2 returnTypes:(NSInteger)arg3 ;
-(void)_queue_fetchAssetsWithQuery:(id)arg0 onlyLocal:(BOOL)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)downloadAssetsWithQueryParams:(id)arg0 ;
-(void)downloadMobileAssets:(id)arg0 completion:(id)arg1 ;
-(void)fetchAssetsWithQueryParams:(id)arg0 onlyLocal:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchAssetsWithQueryParams:(id)arg0 onlyLocal:(BOOL)arg1 returnTypes:(NSInteger)arg2 completion:(id)arg3 ;
-(void)removeMobileAssets:(id)arg0 completion:(id)arg1 ;


@end


#endif