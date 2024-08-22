// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNPRINTPROPERTIES_H
#define TNPRINTPROPERTIES_H


#import <Foundation/Foundation.h>


@interface TNPrintProperties : NSObject

@property (nonatomic) CGFloat footerInset; // ivar: _footerInset
@property (nonatomic) CGFloat headerInset; // ivar: _headerInset
@property (readonly) CGFloat pageHeight;
@property (readonly) CGFloat pageWidth;
@property UIEdgeInsets printMargins; // ivar: _printMargins
@property CGSize unscaledPageSize; // ivar: _unscaledPageSize


+(id)a4SizePrintProperties;
+(id)legacyExportPrintProperties;
+(id)letterSizeLandscapeFormPrintProperties;
+(id)letterSizePortraitFormPrintProperties;
+(id)letterSizePrintProperties;
-(CGFloat)contentScaleForIntegralWidthWithContentScale:(CGFloat)arg0 portraitOrientation:(BOOL)arg1 ;
-(id)initWithPageSize:(struct CGSize )arg0 contentRect:(struct CGRect )arg1 ;
-(id)initWithPageSize:(struct CGSize )arg0 printMargins:(struct UIEdgeInsets )arg1 ;
-(id)initWithPageSize:(struct CGSize )arg0 printMargins:(struct UIEdgeInsets )arg1 headerInset:(CGFloat)arg2 footerInset:(CGFloat)arg3 ;
-(struct CGAffineTransform )p_transformForContentScale:(CGFloat)arg0 portraitOrientation:(BOOL)arg1 ;
-(struct CGRect )contentRectForContentScale:(CGFloat)arg0 portraitOrientation:(BOOL)arg1 headerHeight:(CGFloat)arg2 footerHeight:(CGFloat)arg3 ;
-(struct CGRect )p_unscaledContentRectForOrientation:(BOOL)arg0 headerHeight:(CGFloat)arg1 footerHeight:(CGFloat)arg2 ;
-(struct CGRect )pageHeaderFooterRectForContentScale:(CGFloat)arg0 portraitOrientation:(BOOL)arg1 footer:(BOOL)arg2 textHeight:(CGFloat)arg3 ;
-(struct CGRect )unscaledPageRectForDisplayForPortraitOrientation:(BOOL)arg0 userViewScale:(CGFloat)arg1 atPageCoordinate:(struct TSUCellCoord )arg2 layoutLeftToRight:(BOOL)arg3 ;
-(struct CGSize )pageSizeForContentScale:(CGFloat)arg0 portraitOrientation:(BOOL)arg1 ;
-(struct CGSize )pageSizeWithGutterForContentScale:(CGFloat)arg0 userViewScale:(CGFloat)arg1 portraitOrientation:(BOOL)arg2 ;


@end


#endif