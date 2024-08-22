// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMAGECONTENT_H
#define _UIIMAGECONTENT_H

@class CIImage, CUINamedVectorGlyph;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"

@interface _UIImageContent : NSObject

@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly, nonatomic) *CGPDFPage CGPDFPage;
@property (readonly, nonatomic) *CGSVGDocument CGSVGDocument;
@property (readonly, nonatomic) CIImage *CIImage;
@property (readonly, nonatomic) *__IOSurface IOSurface;
@property (nonatomic) BOOL isDecompressing; // ivar: _isDecompressing
@property (readonly, nonatomic) UIBezierPath *outlinePath;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) CGSize sizeInPixels; // ivar: _sizeInPixels
@property (readonly, nonatomic) CUINamedVectorGlyph *vectorGlyph;
@property (readonly, nonatomic) CGFloat vectorScale;


+(id)empty;
-(BOOL)_drawInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 effect:(id)arg2 ;
-(BOOL)canDrawImage;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)containsNamedColorStyle:(id)arg0 ;
-(BOOL)containsNamedColorStyles;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isVectorGlyph;
-(BOOL)optimizeContentForImageSize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(BOOL)prepareContentForDisplayWithCompletionHandler:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfHierarchyLayers;
-(id)contentOptimizedForImageSize:(struct CGSize )arg0 ;
-(id)contentPreparedForDisplay;
-(id)contentWithCGImage:(struct CGImage *)arg0 ;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)init;
-(id)initWithScale:(CGFloat)arg0 ;
-(id)renditionApplyingEffect:(id)arg0 ;
-(id)renditionWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 applyingEffect:(id)arg2 ;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 hierarchicalColorResolver:(id)arg2 ;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 namedColorResolver:(id)arg2 ;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 paletteColors:(id)arg2 ;
-(void)_drawWithoutEffectInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)_prepareforDrawingInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;


@end


#endif