// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMOVIEMEDIAOBJECT_H
#define CKMOVIEMEDIAOBJECT_H

@class AVURLAsset, UIImage;
@protocol IMMoviePreviewGeneratorProtocol;


#import "CKAVMediaObject.h"

@interface CKMovieMediaObject : CKAVMediaObject <IMMoviePreviewGeneratorProtocol>



@property (retain, nonatomic) AVURLAsset *asset; // ivar: _asset
@property (nonatomic) BOOL checkedVideoInfo; // ivar: _checkedVideoInfo
@property (nonatomic) BOOL hasVideoTrack; // ivar: _hasVideoTrack
@property (nonatomic) BOOL isAutoloopVideo; // ivar: _isAutoloopVideo
@property (nonatomic) BOOL isAutoloopVideoInitialized; // ivar: _isAutoloopVideoInitialized
@property (nonatomic) BOOL isJellyfishInitialized; // ivar: _isJellyfishInitialized
@property (nonatomic) BOOL isJellyfishVideo; // ivar: _isJellyfishVideo
@property (nonatomic) CGSize pxSize; // ivar: _pxSize
@property (retain, nonatomic) UIImage *thumbnail; // ivar: _thumbnail


+(BOOL)isPreviewable;
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)playButtonPreviewForUIImage:(id)arg0 scale:(CGFloat)arg1 contentAlignmentInsets:(struct UIEdgeInsets )arg2 ;
+(struct CGImage *)playButtonPreviewForCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 isFromMe:(BOOL)arg2 ;
-(BOOL)_assetContainsMetadataKey:(id)arg0 ;
-(BOOL)allowAutoplay;
-(BOOL)canExport;
-(BOOL)hasNoVideoTrack;
-(BOOL)isPhotosCompatible;
-(BOOL)supportsUnknownSenderPreview;
-(BOOL)validatePreviewFormat;
-(Class)balloonViewClass;
-(Class)previewBalloonViewClass;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)bbPreviewFillToSize:(struct CGSize )arg0 ;
-(id)generatePreviewFromThumbnail:(id)arg0 width:(CGFloat)arg1 orientation:(char)arg2 ;
-(id)generateThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 ;
-(id)generateThumbnailForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)metricsCollectorMediaType;
-(id)previewCacheKeyWithOrientation:(char)arg0 ;
-(id)previewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)previewItemTitle;
-(int)mediaType;
-(struct CGSize )bbSize;
-(void)prewarmPreviewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(void)updateVideoInfo;


@end


#endif