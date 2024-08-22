// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSAGALLERYREP_H
#define TSAGALLERYREP_H

@class TSDRep, TSDImageDrawingHelper, TSWPRep, NSString;
@protocol TSWPContainerTextEditingRep, TSDImageDrawingDataSource, TSKChangeSourceObserver, TSDContainerInfo;


#import "TSAGalleryLayout.h"

@interface TSAGalleryRep : TSDRep <TSWPContainerTextEditingRep, TSDImageDrawingDataSource, TSKChangeSourceObserver>

 {
    TSDImageDrawingHelper *_drawingHelper;
}


@property (readonly, nonatomic) TSWPRep *captionRep; // ivar: _captionRep
@property (readonly, nonatomic) TSWPRep *containedRep;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSAGalleryLayout *galleryLayout;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
+(struct CGAffineTransform )p_textureLayoutTransformInRootForLayout:(id)arg0 isMagicMove:(BOOL)arg1 ;
+(struct CGAffineTransform )p_textureRenderTransformRelativeToTextureRect:(struct CGRect )arg0 forLayout:(id)arg1 viewScale:(CGFloat)arg2 isMagicMove:(BOOL)arg3 ;
+(struct CGRect )p_textureRectForLayout:(id)arg0 viewScale:(CGFloat)arg1 isMagicMove:(BOOL)arg2 ;
-(BOOL)imageDrawingHelperImageHasAlpha:(id)arg0 ;
-(BOOL)p_isEmpty;
-(BOOL)p_shouldIncludeItemCaptionTextForStage:(NSUInteger)arg0 isIncoming:(BOOL)arg1 ;
-(id)childReps;
-(id)galleryInfo;
-(id)imageDrawingHelperAdjustedImageData:(id)arg0 ;
-(id)imageDrawingHelperImageData:(id)arg0 ;
-(id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg0 ;
-(id)imageDrawingHelperThumbnailImageData:(id)arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)layoutsForChildReps;
-(id)p_emptyPlaceholderBackgroundColor;
-(id)p_emptyPlaceholderImage;
-(id)p_galleryItemForTextureStage:(NSUInteger)arg0 isIncoming:(BOOL)arg1 ;
-(id)p_newTextureForStage:(NSUInteger)arg0 isIncoming:(BOOL)arg1 includeImage:(BOOL)arg2 includeCaption:(BOOL)arg3 size:(struct CGSize )arg4 offset:(struct CGPoint )arg5 renderTransform:(struct CGAffineTransform )arg6 ;
-(id)textureForDescription:(id)arg0 ;
-(struct CGAffineTransform )imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg0 ;
-(struct CGRect )imageDrawingHelperImageRect:(id)arg0 ;
-(struct CGRect )p_imageContainerRectForContext:(struct CGContext *)arg0 ;
-(void)addChildTexturesToTextureSet:(id)arg0 forDescription:(id)arg1 passingTest:(id)arg2 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)invalidateCurrentItem;
-(void)p_announceNewItemForAccessibilityIfNeeded;
-(void)p_drawImageInContext:(struct CGContext *)arg0 forLayer:(BOOL)arg1 ;
-(void)p_renderTextureInContext:(struct CGContext *)arg0 includeImage:(BOOL)arg1 includeCaption:(BOOL)arg2 renderTransform:(struct CGAffineTransform )arg3 ;
-(void)updateChildrenFromLayout;
-(void)updateHitTestingForTextureStage:(NSUInteger)arg0 isAtEndOfBuild:(BOOL)arg1 ;
-(void)willBeRemoved;


@end


#endif