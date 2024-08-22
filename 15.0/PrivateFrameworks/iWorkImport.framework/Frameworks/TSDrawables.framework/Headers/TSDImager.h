// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDIMAGER_H
#define TSDIMAGER_H

@class TSKDocumentRoot, NSMapTable, TSUColor, NSString, NSArray, NSSet;
@protocol TSDDynamicOverridingCanvasDelegate, TSDCanvasDelegate, TSDInfo, TSDCanvasProxyDelegate;

#import <Foundation/Foundation.h>

#import "TSDCanvas.h"

@interface TSDImager : NSObject <TSDDynamicOverridingCanvasDelegate, TSDCanvasDelegate>

 {
    CGFloat mViewScale;
    CGFloat mContentsScale;
    CGSize mScaledImageSize;
    CGSize mMaximumImagePixelSize;
    BOOL mUseScaledImageSize;
    TSKDocumentRoot *mDocumentRoot;
    BOOL mHasBeenUsed;
    BOOL mDrawingIntoPDF;
    *CGContext mReusableBitmapContext;
    CGRect mReusableBounds;
    CGRect mReusableIntegralBounds;
    CGRect mReusableActualScaledClipRect;
    CGSize mReusableScaledImageSize;
    id *mPostRenderAction;
    NSMapTable *mDynamicOverrides;
    NSObject<TSDInfo> *mInfoToDrawBeneath;
    id *mInfoToDrawBeneathFilter;
}


@property (readonly, nonatomic) CGRect actualScaledClipRect; // ivar: mActualScaledClipRect
@property (copy, nonatomic) TSUColor *backgroundColor; // ivar: mBackgroundColor
@property (readonly, nonatomic) TSDCanvas *canvas; // ivar: mCanvas
@property (readonly, nonatomic) NSObject<TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (nonatomic) CGFloat contentsScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL distortedToMatch; // ivar: mDistortedToMatch
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL imageMustHaveEvenDimensions; // ivar: mImageMustHaveEvenDimensions
@property (retain, nonatomic) NSArray *infos; // ivar: mInfos
@property (nonatomic) BOOL isPrinting; // ivar: mIsPrinting
@property (nonatomic) CGSize maximumImagePixelSize;
@property (nonatomic) BOOL mayBeReused; // ivar: mMayBeReused
@property (copy, nonatomic) NSSet *previousRenderDatasNeedingDownload; // ivar: mPreviousRenderDatasNeedingDownload
@property (nonatomic) CGSize scaledImageSize;
@property (nonatomic) BOOL shouldReuseBitmapContext; // ivar: mShouldReuseBitmapContext
@property (nonatomic) BOOL shouldShowCaptionInstructionalText; // ivar: mShouldShowCaptionInstructionalText
@property (nonatomic) BOOL shouldShowComments; // ivar: mShouldShowComments
@property (nonatomic) BOOL shouldShowInstructionalText; // ivar: mShouldShowInstructionalText
@property (nonatomic) BOOL shouldShowTextCommentHighlights; // ivar: mShouldShowTextCommentHighlights
@property (nonatomic) BOOL shouldSuppressBackgrounds; // ivar: mShouldSuppressBackgrounds
@property (readonly) Class superclass;
@property (nonatomic) CGRect unscaledClipRect; // ivar: mUnscaledClipRect
@property (nonatomic) CGFloat viewScale;


-(BOOL)drawPageInContext:(struct CGContext *)arg0 createPage:(BOOL)arg1 ;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg0 ;
-(BOOL)p_configureCanvas;
-(BOOL)shouldShowCommentsForCanvas:(id)arg0 ;
-(BOOL)shouldShowInstructionalTextForLayout:(id)arg0 ;
-(BOOL)shouldShowTextCommentHighlightsForCanvas:(id)arg0 ;
-(id)documentRoot;
-(id)dynamicOverrideForLayout:(id)arg0 ;
-(id)dynamicOverrideForRep:(id)arg0 ;
-(id)generateImage;
-(id)init;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)initWithDocumentRoot:(id)arg0 renderForWideGamut:(BOOL)arg1 ;
-(id)pdfData;
-(id)pngData;
-(struct CGImage *)newImage;
-(struct CGImage *)p_newImageInReusableContext;
-(struct CGRect )visibleScaledBoundsForClippingRepsOnCanvas:(id)arg0 ;
-(struct CGSize )p_evenDimensionsWithSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)i_setDrawsOnlyBelowInfo:(id)arg0 ;
-(void)p_assertHasReadLock;
-(void)p_drawPageInContext:(struct CGContext *)arg0 createPage:(BOOL)arg1 ;
-(void)setDynamicOverride:(id)arg0 forInfo:(id)arg1 ;
-(void)setPostRenderAction:(id)arg0 ;


@end


#endif