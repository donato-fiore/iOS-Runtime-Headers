// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNIMAGER_H
#define KNIMAGER_H

@class TSDImager, NSString, TSUImage;
@protocol TSDConnectedInfoReplacing, TSDCanvasProxyDelegate;


#import "KNBodyPlaceholderInfo.h"
#import "KNTitlePlaceholderInfo.h"
#import "KNAbstractSlide.h"

@interface KNImager : TSDImager <TSDConnectedInfoReplacing>



@property (readonly, nonatomic) NSObject<TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat drawableThumbnailContentInset; // ivar: _drawableThumbnailContentInset
@property (readonly, nonatomic) TSUImage *drawableThumbnailImage;
@property (nonatomic) CGSize drawableThumbnailSize; // ivar: _drawableThumbnailSize
@property (nonatomic) BOOL forceOutputSizeToMatchThumbnailSize; // ivar: _forceOutputSizeToMatchThumbnailSize
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) KNBodyPlaceholderInfo *replacementBodyPlaceholder; // ivar: _replacementBodyPlaceholder
@property (retain, nonatomic) KNTitlePlaceholderInfo *replacementTitlePlaceholder; // ivar: _replacementTitlePlaceholder
@property (nonatomic) BOOL shouldTintWhiteImages; // ivar: _shouldTintWhiteImages
@property (weak, nonatomic) KNAbstractSlide *slide; // ivar: _slide
@property (nonatomic) NSUInteger slideNumber; // ivar: _slideNumber
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL verticalTextAllowed;


-(BOOL)isInfoAKeynoteTemplateObject:(id)arg0 ;
-(BOOL)p_requiresModifiedStrokeForDrawable:(id)arg0 atScaleFactor:(CGFloat)arg1 ;
-(CGFloat)p_sizeMultiplierForDrawable:(id)arg0 ;
-(CGFloat)p_strokeWidthForScaleFactor:(CGFloat)arg0 drawable:(id)arg1 ;
-(id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg0 ;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)p_strokeForShapeInfo:(id)arg0 ;
-(void)p_hideCaptionAndTitleFromDeepCopiedDrawable:(id)arg0 ;
-(void)p_prepareShapeInfoStroke:(id)arg0 atScaleFactor:(CGFloat)arg1 finalRect:(struct CGRect *)arg2 ;
-(void)p_prepareStyledInfoStyle:(id)arg0 ;


@end


#endif