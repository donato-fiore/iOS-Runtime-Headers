// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDMMCS_H
#define CKDMMCS_H

@class NSMutableSet, NSURL;

#import <Foundation/Foundation.h>

#import "CKDMMCSEngineContext.h"
#import "CKDAssetCache.h"

@interface CKDMMCS : NSObject {
    NSMutableSet *_trackedItemIDs;
}


@property (retain, nonatomic) CKDMMCSEngineContext *MMCSEngineContext; // ivar: _MMCSEngineContext
@property (retain, nonatomic) CKDAssetCache *assetCache; // ivar: _assetCache
@property (nonatomic) NSInteger checkoutCount; // ivar: _checkoutCount
@property (nonatomic) BOOL didDrop; // ivar: _didDrop
@property (readonly, nonatomic, getter=getMaxChunkCountForSection) unsigned int maxChunkCountForSection;
@property (readonly, nonatomic) NSURL *path; // ivar: _path
@property (readonly, nonatomic) NSURL *temporaryDirectory; // ivar: _temporaryDirectory


+(NSInteger)_commonErrorCodeWithMMCSError:(id)arg0 ;
+(NSInteger)_errorCodeWithMMCSGetError:(id)arg0 ;
+(NSInteger)_errorCodeWithMMCSPutError:(id)arg0 ;
+(NSInteger)_errorCodeWithMMCSRegisterError:(id)arg0 ;
+(id)MMCSWrapperForApplicationBundleID:(id)arg0 directoryContext:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)_errorWithMMCSError:(id)arg0 description:(id)arg1 operationType:(NSInteger)arg2 ;
+(id)_errorWithMMCSError:(id)arg0 path:(id)arg1 description:(id)arg2 operationType:(NSInteger)arg3 ;
+(id)_userInfoFromMMCSRetryableError:(id)arg0 ;
+(id)protocolHeaders;
+(id)protocolVersion;
+(id)sharedWrappersByPath;
+(id)zeroSizeFileSignature;
+(void)purgeMMCSDirectoryWithPath:(id)arg0 ;
-(BOOL)_getRegisteredItemsGreaterThan:(NSUInteger)arg0 itemIds:(*NSUInteger)arg1 itemCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)isTrackingItemID:(NSUInteger)arg0 ;
-(BOOL)registeredItemCount:(*NSUInteger)arg0 error:(*id)arg1 ;
-(id)CKStatusReportArray;
// -(id)_contextToGetItemGroup:(id)arg0 operation:(id)arg1 options:(id)arg2 progress:(id)arg3 command:(unk)arg4 completionHandler:(id)arg5  ;
-(id)_contextToGetOrPutChunkKeysItemGroup:(id)arg0 operation:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
// -(id)_contextToGetSectionItem:(id)arg0 operation:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)_contextToPutItemGroup:(id)arg0 operation:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)_contextToPutSectionItem:(id)arg0 operation:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(unk)arg4  ;
-(id)_contextToRegisterItemGroup:(id)arg0 operation:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(id)_referenceIdentifierFromAssetKey:(id)arg0 ;
-(id)getChunkKeysItemGroupSet:(id)arg0 operation:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
// -(id)getItemGroupSet:(id)arg0 operation:(id)arg1 shouldFetchAssetContentInMemory:(BOOL)arg2 options:(id)arg3 progress:(id)arg4 command:(unk)arg5 completionHandler:(id)arg6  ;
// -(id)getSectionItem:(id)arg0 operation:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(unk)arg4  ;
-(id)initWithMMCSEngineContext:(id)arg0 directoryContext:(id)arg1 ;
-(id)putChunkKeysItemGroupSet:(id)arg0 operation:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
// -(id)putItemGroupSet:(id)arg0 operation:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)putSectionItem:(id)arg0 operation:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(unk)arg4  ;
-(id)registerItemGroupSet:(id)arg0 operation:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(struct _mmcs_engine *)getMMCSEngine;
-(void)_logMMCSOptions:(id)arg0 ;
-(void)_unregisterItemIDs:(id)arg0 ;
-(void)dealloc;
-(void)drop;
-(void)performOperationCleanup;
-(void)showRegisteredItems;
-(void)startTrackingItemIDsForMMCSItems:(id)arg0 ;
-(void)stopTrackingItemIDsForMMCSItems:(id)arg0 ;
-(void)unregisterItemIDs:(id)arg0 ;


@end


#endif