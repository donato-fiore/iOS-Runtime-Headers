// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTTHUMBNAILPOSTPROCESSINGOPERATION_H
#define ICATTACHMENTTHUMBNAILPOSTPROCESSINGOPERATION_H

@class NSOperation, ICAppearanceInfo, ICThumbnailDataCache, NSString, NSMutableArray, UIImage, NSURL;
@protocol ICAttachmentThumbnailOperation;



@interface ICAttachmentThumbnailPostProcessingOperation : NSOperation <ICAttachmentThumbnailOperation>



@property (retain, nonatomic) ICAppearanceInfo *appearanceInfo; // ivar: _appearanceInfo
@property (retain, nonatomic) ICThumbnailDataCache *cache; // ivar: _cache
@property (retain, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property (retain, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (copy, nonatomic) id *fallbackBlock; // ivar: _fallbackBlock
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSUInteger imageScaling; // ivar: _imageScaling
@property (nonatomic) BOOL isMovie; // ivar: _isMovie
@property (retain, nonatomic) NSURL *mediaURL; // ivar: _mediaURL
@property (nonatomic) CGSize minSize; // ivar: _minSize
@property (copy, nonatomic) id *processingBlock; // ivar: _processingBlock
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL showAsFileIcon; // ivar: _showAsFileIcon


-(BOOL)isMatchingOperationForCacheKey:(id)arg0 cache:(id)arg1 ;
// -(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 appearanceInfo:(id)arg2 cache:(id)arg3 cacheKey:(id)arg4 processingBlock:(id)arg5 completionBlocks:(unk)arg6 fallbackBlock:(id)arg7  ;
-(void)addCompletionBlock:(id)arg0 ;
-(void)main;


@end


#endif