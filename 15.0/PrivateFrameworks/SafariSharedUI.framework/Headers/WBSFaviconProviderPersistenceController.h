// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSFAVICONPROVIDERPERSISTENCECONTROLLER_H
#define WBSFAVICONPROVIDERPERSISTENCECONTROLLER_H

@class NSURL, NSMapTable, NSString;
@protocol WBSDataCacheDelegate, WBSSQLiteStoreDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSOnDiskDataCache.h"
#import "WBSFaviconProviderDatabaseController.h"
#import "WBSFaviconProviderRecordCache.h"
#import "WBSFaviconProviderPrivateCache.h"

@interface WBSFaviconProviderPersistenceController : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate>

 {
    NSURL *_baseURL;
    WBSOnDiskDataCache *_faviconDiskCache;
    WBSFaviconProviderDatabaseController *_faviconDatabase;
    WBSFaviconProviderRecordCache *_recordsCache;
    WBSFaviconProviderPrivateCache *_privateCache;
    NSMapTable *_inMemoryImageCache;
    id *_setUpCompletionHandler;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSInteger _controllerState;
    CGSize _preferredIconSize;
    BOOL _isReadOnly;
}


@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *diskCacheURL; // ivar: _diskCacheURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_faviconStatusFromWBSSQLStoreStatus:(NSInteger)arg0 ;
-(id)_imageFromURL:(id)arg0 ;
-(id)init;
-(id)initWithPersistenceBaseURL:(id)arg0 databaseName:(id)arg1 preferredIconSize:(struct CGSize )arg2 isReadOnly:(BOOL)arg3 ;
-(void)_finishSetUpWithStatus:(NSInteger)arg0 ;
-(void)_iconForIconUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)closeWithCompletionHandler:(id)arg0 ;
-(void)dataCacheDidSetUp:(id)arg0 ;
-(void)firstIconForVariantsOfDomainString:(id)arg0 includingPrivateData:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)firstIconForVariantsOfPageURLString:(id)arg0 includingPrivateData:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)flushPrivateDataFromMemoryWithCompletionHandler:(id)arg0 ;
-(void)iconForIconURLString:(id)arg0 includingPrivateData:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)iconForPageURLString:(id)arg0 includingPrivateData:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)iconInfoForIconURLString:(id)arg0 includingPrivateData:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)iconInfoForPageURLString:(id)arg0 includingPrivateData:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)linkPageURLString:(id)arg0 toIconURLString:(id)arg1 isPrivate:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)openAndCheckIntegrity:(BOOL)arg0 createIfNeeded:(BOOL)arg1 fallBackToMemoryStoreIfError:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)pageURLStringsPrefixedWithVariantsOfDomainString:(id)arg0 includingPrivateData:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)rejectedResourceInfosForPageURLString:(id)arg0 iconURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)removeAllIconsWithCompletionHandler:(id)arg0 ;
-(void)removeIconFilesNotReferencedInDatabaseWithCompletionHandler:(id)arg0 ;
-(void)removeIconWithPageURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeIconsWithURLStringsNotFoundIn:(id)arg0 completionHandler:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(void)setIconData:(id)arg0 forPageURLString:(id)arg1 iconURLString:(id)arg2 iconSize:(struct CGSize )arg3 hasGeneratedResolutions:(BOOL)arg4 isPrivate:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)setIconIsRejectedResource:(BOOL)arg0 forPageURLString:(id)arg1 iconURLString:(id)arg2 isPrivate:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)arg0 completionHandler:(id)arg1 ;
-(void)sqliteStoreDidFallBackToInMemoryStore:(id)arg0 ;


@end


#endif