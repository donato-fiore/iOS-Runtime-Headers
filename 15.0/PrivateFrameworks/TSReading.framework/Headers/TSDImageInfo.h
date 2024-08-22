// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDIMAGEINFO_H
#define TSDIMAGEINFO_H

@class NSString, TSDImageAdjustments, TSPObject<TSDOwningAttachment>;
@protocol TSDContainerInfo, TSDMixing, TSSPresetSource, TSSThemedObject, TSKTransformableObject, TSDReducableInfo;


#import "TSDMediaInfo.h"
#import "TSPData.h"
#import "TSDMediaStyle.h"
#import "TSDBezierPath.h"
#import "TSDInfoGeometry.h"
#import "TSDMaskInfo.h"

@interface TSDImageInfo : TSDMediaInfo <TSDContainerInfo, TSDMixing, TSSPresetSource, TSSThemedObject, TSKTransformableObject, TSDReducableInfo>

 {
    BOOL mInterpretsUntaggedImageDataAsGeneric;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSDBezierPath *mTracedPath;
    CGSize mNaturalSize;
}


@property (retain, nonatomic) TSPData *adjustedImageData; // ivar: mAdjustedImageData
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSPData *enhancedImageData;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) TSDImageAdjustments *imageAdjustments; // ivar: mImageAdjustments
@property (retain, nonatomic) TSPData *imageData; // ivar: mImageData
@property (readonly, nonatomic) TSDMediaStyle *imageStyle;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (retain, nonatomic) TSDBezierPath *instantAlphaPath; // ivar: mInstantAlphaPath
@property (nonatomic) BOOL interpretsUntaggedImageDataAsGeneric;
@property (retain, nonatomic) TSDMaskInfo *maskInfo; // ivar: mMaskInfo
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) CGSize naturalSize;
@property (retain, nonatomic) TSPData *originalImageData; // ivar: mOriginalImageData
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;
@property (retain, nonatomic) TSPData *thumbnailAdjustedImageData; // ivar: mThumbnailAdjustedImageData
@property (retain, nonatomic) TSPData *thumbnailImageData; // ivar: mThumbnailImageData
@property (readonly, nonatomic) TSDBezierPath *tracedPath;


+(id)bootstrapPropertyMapForPresetIndex:(NSUInteger)arg0 inTheme:(id)arg1 alternate:(int)arg2 ;
+(id)presetKinds;
+(void)adjustIncomingImageGeometry:(id)arg0 maskGeometry:(id)arg1 forImageData:(id)arg2 maskedWithInstantAlphaPath:(id)arg3 withNaturalSize:(struct CGSize )arg4 forTargetImageGeometry:(id)arg5 withTargetMaskGeometry:(id)arg6 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(int)arg2 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(int)arg2 reservedCount:(NSUInteger)arg3 ;
-(BOOL)isMasked;
-(BOOL)isOpaque;
-(BOOL)isPDF;
-(BOOL)isValid;
-(BOOL)maskCanBeReset;
-(Class)layoutClass;
-(Class)repClass;
-(Class)styleClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(id)childInfos;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithContext:(id)arg0 style:(id)arg1 ;
-(id)defaultMaskInfo;
-(id)defaultMaskInfoWithContext:(id)arg0 ;
-(id)i_thumbnailForImageData:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 imageData:(id)arg3 originalImageData:(id)arg4 ;
-(id)mediaDisplayName;
-(id)mediaFileType;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(id)presetKind;
-(id)style;
-(id)updatedMaskInfoGeometryForImageDraggedBy:(struct CGPoint )arg0 ;
-(struct CGAffineTransform )computeFullTransform;
-(struct CGPoint )centerForReplacingWithNewMedia;
-(struct CGSize )defaultOriginalSize;
-(struct CGSize )originalSize;
-(struct CGSize )rawDataSize;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(void)acceptVisitor:(id)arg0 ;
-(void)dealloc;
-(void)setExteriorTextWrap:(id)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)updateGeometryToReplaceMediaInfo:(id)arg0 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif