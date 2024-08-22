// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTTHUMBNAILOPERATION_H
#define ICATTACHMENTTHUMBNAILOPERATION_H

@class NSOperation, ICAppearanceInfo, NSManagedObjectID, ICThumbnailDataCache, NSString, NSMutableArray, NSURL;
@protocol ICAttachmentThumbnailOperation;


#import "ICAttachmentPreviewImageLoader.h"
#import "ICAttachmentThumbnailOperationQueue.h"

@interface ICAttachmentThumbnailOperation : NSOperation <ICAttachmentThumbnailOperation>



@property (retain, nonatomic) ICAppearanceInfo *appearanceInfo; // ivar: _appearanceInfo
@property (retain, nonatomic) NSManagedObjectID *attachmentID; // ivar: _attachmentID
@property (retain, nonatomic) ICAttachmentPreviewImageLoader *attachmentPreviewImageLoader; // ivar: _attachmentPreviewImageLoader
@property (nonatomic) BOOL attachmentPropertiesCaptured; // ivar: _attachmentPropertiesCaptured
@property (retain, nonatomic) ICThumbnailDataCache *cache; // ivar: _cache
@property (retain, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property (retain, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (copy, nonatomic) id *fallbackBlock; // ivar: _fallbackBlock
@property (nonatomic) NSUInteger imageScaling; // ivar: _imageScaling
@property (nonatomic) BOOL isMovie; // ivar: _isMovie
@property (retain, nonatomic) NSURL *mediaURL; // ivar: _mediaURL
@property (nonatomic) CGSize minSize; // ivar: _minSize
@property (copy, nonatomic) id *processingBlock; // ivar: _processingBlock
@property (weak, nonatomic) ICAttachmentThumbnailOperationQueue *queue; // ivar: _queue
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL showAsFileIcon; // ivar: _showAsFileIcon


-(BOOL)isMatchingOperationForCacheKey:(id)arg0 cache:(id)arg1 ;
// -(id)initWithAttachment:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(id)arg6 completionBlock:(unk)arg7 fallbackBlock:(id)arg8 queue:(unk)arg9  ;
-(void)addCompletionBlock:(id)arg0 ;
-(void)capturePropertiesFromAttachment:(id)arg0 ;
-(void)main;
-(void)requestThumbnail;


@end


#endif