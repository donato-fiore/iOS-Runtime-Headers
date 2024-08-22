// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARSTORE_H
#define AVTAVATARSTORE_H

@class NSString;
@protocol AVTPBackendImageHandlingDelegate, AVTAvatarStoreInternal, AVTAvatarStore, AVTUILogger, AVTStickerBackendDelegate;

#import <Foundation/Foundation.h>

#import "AVTAvatarRecordImageGenerator.h"
#import "AVTImageStore.h"

@interface AVTAvatarStore : NSObject <AVTPBackendImageHandlingDelegate, AVTAvatarStoreInternal, AVTAvatarStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVTAvatarRecordImageGenerator *imageGenerator; // ivar: _imageGenerator
@property (readonly, nonatomic) AVTImageStore *imageStore; // ivar: _imageStore
@property (weak, nonatomic) NSObject<AVTAvatarStoreInternal> *internalStore; // ivar: _internalStore
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<AVTAvatarStore> *persistenceAvatarStore; // ivar: _persistenceAvatarStore
@property (weak, nonatomic) NSObject<AVTStickerBackendDelegate> *stickerBackendDelegate;
@property (readonly) Class superclass;


+(NSUInteger)maximumNumberOfFetchableAvatars;
+(NSUInteger)maximumNumberOfSavableAvatars;
+(id)defaultImageGeneratorForEnvironment:(id)arg0 ;
-(BOOL)canCreateAvatar;
-(BOOL)canCreateAvatarWithError:(*id)arg0 ;
-(BOOL)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)generateThumbnailsForAvatarRecord:(id)arg0 avatar:(id)arg1 error:(*id)arg2 ;
-(BOOL)generateThumbnailsForAvatarRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)generateThumbnailsForDuplicateAvatarRecord:(id)arg0 originalRecord:(id)arg1 error:(*id)arg2 ;
-(id)avatarsForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithImageGenerator:(id)arg0 environment:(id)arg1 ;
-(id)initWithPersistenceAvatarStore:(id)arg0 ;
-(id)initWithPersistenceAvatarStore:(id)arg0 imageGenerator:(id)arg1 environment:(id)arg2 ;
-(id)initWithPersistenceAvatarStore:(id)arg0 imageGenerator:(id)arg1 imageStore:(id)arg2 environment:(id)arg3 ;
-(id)recentStickersForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(void)clearContentAtLocation:(id)arg0 ;
-(void)clearStickersForAvatarRecordIdentifier:(id)arg0 withEnvironment:(id)arg1 ;
-(void)deleteAvatar:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteAvatarWithIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)deleteImagesForAvatarRecordIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)deleteRecentStickersForChangeTracker:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteRecentStickersWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)didUseStickerWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)duplicateAvatar:(id)arg0 completionBlock:(id)arg1 ;
-(void)fetchAvatarsForFetchRequest:(id)arg0 completionHandler:(id)arg1 ;
// -(void)saveAvatarRecord:(id)arg0 thumbnailAvatar:(id)arg1 completionBlock:(id)arg2 thumbnailGenerationCompletionBlock:(unk)arg3  ;
-(void)updateThumbnailsForChangesWithTracker:(id)arg0 recordProvider:(id)arg1 ;


@end


#endif