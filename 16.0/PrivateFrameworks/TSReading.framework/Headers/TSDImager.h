// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDIMAGER_H
#define TSDIMAGER_H

@class NSString, NSArray;
@protocol TSDCanvasDelegate;

#import <Foundation/Foundation.h>

#import "TSKDocumentRoot.h"
#import "TSDCanvas.h"

@interface TSDImager : NSObject <TSDCanvasDelegate>

 {
    CGFloat mViewScale;
    CGSize mScaledImageSize;
    CGSize mMaximumScaledImageSize;
    BOOL mUseScaledImageSize;
    TSKDocumentRoot *mDocumentRoot;
    BOOL mDrawingIntoPDF;
    *CGContext mReusableBitmapContext;
    CGRect mReusableBounds;
    CGRect mReusableIntegralBounds;
    CGRect mReusableActualScaledClipRect;
    CGSize mReusableScaledImageSize;
    id *mPostRenderAction;
}


@property (readonly, nonatomic) CGRect actualScaledClipRect; // ivar: mActualScaledClipRect
@property (nonatomic) *CGColor backgroundColor; // ivar: mBackgroundColor
@property (readonly, nonatomic) TSDCanvas *canvas; // ivar: mCanvas
@property (nonatomic) UIEdgeInsets contentInset; // ivar: mContentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL distortedToMatch; // ivar: mDistortedToMatch
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL imageMustHaveEvenDimensions; // ivar: mImageMustHaveEvenDimensions
@property (retain, nonatomic) NSArray *infos; // ivar: mInfos
@property (nonatomic) BOOL isPrinting; // ivar: mIsPrinting
@property (nonatomic) CGSize maximumScaledImageSize;
@property (nonatomic) CGSize scaledImageSize;
@property (nonatomic) BOOL shouldReuseBitmapContext; // ivar: mShouldReuseBitmapContext
@property (readonly) Class superclass;
@property (nonatomic) CGRect unscaledClipRect; // ivar: mUnscaledClipRect
@property (nonatomic) CGFloat viewScale;


-(BOOL)drawPageInContext:(struct CGContext *)arg0 createPage:(BOOL)arg1 ;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg0 ;
-(BOOL)p_configureCanvas;
-(id)documentRoot;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)pdfData;
-(struct CGImage *)newImage;
-(struct CGImage *)p_newImageInReusableContext;
-(struct CGRect )visibleScaledBoundsForClippingRepsOnCanvas:(id)arg0 ;
-(void)dealloc;
-(void)p_drawPageInContext:(struct CGContext *)arg0 createPage:(BOOL)arg1 ;
-(void)setPostRenderAction:(id)arg0 ;


@end


#endif