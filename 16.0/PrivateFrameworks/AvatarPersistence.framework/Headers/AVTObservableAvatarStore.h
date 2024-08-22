// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTOBSERVABLEAVATARSTORE_H
#define AVTOBSERVABLEAVATARSTORE_H

@class NSString;
@protocol AVTAvatarStoreInternal, OS_dispatch_queue, AVTAvatarStoreDelegate, AVTStickerBackendDelegate;

#import <Foundation/Foundation.h>


@interface AVTObservableAvatarStore : NSObject <AVTAvatarStoreInternal>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<AVTStickerBackendDelegate> *stickerBackendDelegate;
@property (readonly, nonatomic) NSObject<AVTAvatarStoreInternal> *store; // ivar: _store
@property (readonly) Class superclass;


+(NSUInteger)maximumNumberOfFetchableAvatars;
+(NSUInteger)maximumNumberOfSavableAvatars;
-(BOOL)canCreateAvatar;
-(BOOL)canCreateAvatarWithError:(*id)arg0 ;
-(id)avatarsForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithStore:(id)arg0 callbackQueue:(id)arg1 ;
-(id)recentStickersForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(void)deleteAvatar:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteAvatarWithIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)deleteRecentStickersForChangeTracker:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteRecentStickersWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)didUseStickerWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)duplicateAvatar:(id)arg0 completionBlock:(id)arg1 ;
-(void)fetchAvatarsForFetchRequest:(id)arg0 completionHandler:(id)arg1 ;
// -(void)saveAvatarRecord:(id)arg0 thumbnailAvatar:(id)arg1 completionBlock:(id)arg2 thumbnailGenerationCompletionBlock:(unk)arg3  ;


@end


#endif