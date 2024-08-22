// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKANIMATEDIMAGEMEDIAOBJECT_H
#define CKANIMATEDIMAGEMEDIAOBJECT_H

@protocol IMAnimatedImagePreviewGeneratorProtocol;


#import "CKImageMediaObject.h"

@interface CKAnimatedImageMediaObject : CKImageMediaObject <IMAnimatedImagePreviewGeneratorProtocol>





+(CGFloat)maxPixelDimensionOfThumbnailWithImagePixelSize:(struct CGSize )arg0 forWidth:(CGFloat)arg1 isSticker:(BOOL)arg2 ;
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
-(BOOL)canPerformQuickAction;
-(BOOL)needsAnimation;
-(BOOL)validPreviewExistsAtURL:(id)arg0 ;
-(BOOL)validatePreviewFormat;
-(id)animatedImageForWidth:(CGFloat)arg0 ;
-(id)bbPreviewFillToSize:(struct CGSize )arg0 ;
-(id)generateAndPersistAnimatedPreviewFromImageData:(id)arg0 forWidth:(CGFloat)arg1 withTransferGUID:(id)arg2 isSticker:(BOOL)arg3 ;
-(id)generateAndPersistAnimatedPreviewFromSourceURL:(id)arg0 forWidth:(CGFloat)arg1 withTransferGUID:(id)arg2 isSticker:(BOOL)arg3 ;
-(id)generateThumbnailsForWidth:(CGFloat)arg0 isSticker:(BOOL)arg1 orientation:(char)arg2 ;
-(id)imageEdgeEnhancementBlockIfNecessary:(SEL)arg0 ;
-(id)metricsCollectorMediaType;
-(id)notificationCenter;
-(id)previewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)savedAnimatedPreviewFromURL:(id)arg0 forOrientation:(char)arg1 ;
-(id)savedPreviewFromURL:(id)arg0 forOrientation:(char)arg1 ;
-(id)scaledThumbnailFromThumbnail:(id)arg0 forWidth:(CGFloat)arg1 isSticker:(BOOL)arg2 ;
-(id)thumbnailAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 imageData:(id)arg2 isSticker:(BOOL)arg3 orientation:(char)arg4 ;
-(void)prewarmPreviewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(void)saveAnimatedPreview:(id)arg0 toURL:(id)arg1 forOrientation:(char)arg2 ;


@end


#endif