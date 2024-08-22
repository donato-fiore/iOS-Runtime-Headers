// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLDOWNLOADQUEUENONUI_H
#define BLDOWNLOADQUEUENONUI_H

@class NSString, NSArray;
@protocol BUUserAccountObserving;

#import <Foundation/Foundation.h>

#import "BLDownloadQueueServerProgressObserver.h"
#import "BLServiceProxy.h"

@interface BLDownloadQueueNonUI : NSObject <BUUserAccountObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BLDownloadQueueServerProgressObserver *serverProgressObserver; // ivar: _serverProgressObserver
@property (retain, nonatomic) BLServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


+(id)innerSharedInstance;
+(id)sharedInstance;
+(void)cancelAllActiveDownloads;
+(void)overrideSharedInstance:(id)arg0 ;
+(void)prepareForRemoveApp;
-(id)_dateFromObject:(id)arg0 ;
-(id)_numberFromObject:(id)arg0 ;
-(id)_stringFromObject:(id)arg0 ;
-(id)init;
-(void)_addDownloadWithMetadata:(id)arg0 isRestore:(BOOL)arg1 completion:(id)arg2 ;
-(void)_cancelAllPausedDownloads;
-(void)_purchaseWithRequest:(id)arg0 uiHostProxy:(id)arg1 completion:(id)arg2 ;
-(void)addDownloadWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)addDownloadWithPermlink:(id)arg0 title:(id)arg1 completion:(id)arg2 ;
-(void)addDownloadWithPurchaseParameters:(id)arg0 completion:(id)arg1 ;
-(void)addDownloadWithPurchaseParameters:(id)arg0 storeID:(id)arg1 completion:(id)arg2 ;
-(void)addDownloadsWithManifestRequest:(id)arg0 completion:(id)arg1 ;
-(void)addDownloadsWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)addDownloadsWithRestoreContentRequestItems:(id)arg0 completion:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)addRestoreDownloadWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)addRestoreDownloadsWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)cancelAllActiveDownloadsWithCompletion:(id)arg0 ;
-(void)cancelDownloadWithID:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)pauseDownloadWithID:(id)arg0 withCompletion:(id)arg1 ;
-(void)processAutomaticDownloadsWithReply:(id)arg0 ;
-(void)purchaseWithBuyParameters:(id)arg0 storeID:(id)arg1 completion:(id)arg2 ;
-(void)purchaseWithBuyParameters:(id)arg0 storeID:(id)arg1 isAudiobook:(BOOL)arg2 completion:(id)arg3 ;
-(void)purchaseWithBuyParameters:(id)arg0 storeID:(id)arg1 isAudiobook:(BOOL)arg2 userInfo:(id)arg3 completion:(id)arg4 ;
-(void)purchaseWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)reloadFromServerWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)restartDownloadWithID:(id)arg0 withCompletion:(id)arg1 ;
-(void)resumeDownloadWithID:(id)arg0 withCompletion:(id)arg1 ;
-(void)userAccount:(NSUInteger)arg0 didChangeWithReason:(NSUInteger)arg1 ;


@end


#endif