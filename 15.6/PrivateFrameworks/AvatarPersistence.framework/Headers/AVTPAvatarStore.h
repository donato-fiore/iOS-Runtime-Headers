// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTPAVATARSTORE_H
#define AVTPAVATARSTORE_H

@class NSString;
@protocol AVTStoreBackendDelegate, AVTAvatarStoreInternal, AVTAvatarStore, AVTStoreBackend, OS_dispatch_queue, AVTPBackendImageHandlingDelegate, AVTUILogger, AVTStickerBackend, AVTStickerBackendDelegate;

#import <Foundation/Foundation.h>

#import "AVTCoreEnvironment.h"
#import "AVTPuppetStore.h"

@interface AVTPAvatarStore : NSObject <AVTStoreBackendDelegate, AVTAvatarStoreInternal, AVTAvatarStore>



@property (readonly, nonatomic) NSObject<AVTStoreBackend> *backend; // ivar: _backend
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *backendAccessQueue; // ivar: _backendAccessQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<AVTPBackendImageHandlingDelegate> *imageHandlingDelegate; // ivar: _imageHandlingDelegate
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) AVTPuppetStore *puppetStore; // ivar: _puppetStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *puppetStoreAccessQueue; // ivar: _puppetStoreAccessQueue
@property (readonly, nonatomic) NSObject<AVTStickerBackend> *stickerBackend; // ivar: _stickerBackend
@property (weak, nonatomic) NSObject<AVTStickerBackendDelegate> *stickerBackendDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(NSUInteger)maximumNumberOfFetchableAvatars;
+(NSUInteger)maximumNumberOfSavableAvatars;
+(id)defaultBackendWithWorkQueue:(id)arg0 environment:(id)arg1 ;
-(BOOL)canCreateAvatar;
-(BOOL)canCreateAvatarWithError:(*id)arg0 ;
-(id)avatarsForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithBackend:(id)arg0 backendAccessQueue:(id)arg1 puppetStore:(id)arg2 stickerBackend:(id)arg3 environment:(id)arg4 ;
-(id)initWithDomainIdentifier:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)recentStickersForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(void)backend:(id)arg0 didChangeRecordsWithIdentifiers:(id)arg1 ;
-(void)deleteAvatar:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteAvatarWithIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)deleteRecentStickersForChangeTracker:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteRecentStickersWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)didUseStickerWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)duplicateAvatar:(id)arg0 completionBlock:(id)arg1 ;
-(void)fetchAvatarsForFetchRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performAsynchronousWork:(id)arg0 ;
-(void)performBackendWork:(id)arg0 ;
-(void)performPuppetStoreWork:(id)arg0 ;
-(void)postChangeNotificationForRecordWithIdentifiers:(id)arg0 remote:(BOOL)arg1 ;
// -(void)saveAvatarRecord:(id)arg0 thumbnailAvatar:(id)arg1 completionBlock:(id)arg2 thumbnailGenerationCompletionBlock:(unk)arg3  ;


@end


#endif