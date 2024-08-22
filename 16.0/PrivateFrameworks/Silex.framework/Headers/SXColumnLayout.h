// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOLUMNLAYOUT_H
#define SXCOLUMNLAYOUT_H

@protocol NSCopying, SXDocumentLayout;

#import <Foundation/Foundation.h>


@interface SXColumnLayout : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat columnWidth; // ivar: _columnWidth
@property (readonly, nonatomic) CGSize constrainedViewportSize; // ivar: _constrainedViewportSize
@property (readonly, nonatomic) CGFloat contentScaleFactor; // ivar: _contentScaleFactor
@property (readonly, nonatomic) NSObject<SXDocumentLayout> *documentLayout; // ivar: _documentLayout
@property (readonly, nonatomic) NSInteger gutter; // ivar: _gutter
@property (readonly, nonatomic) NSUInteger layoutColumns; // ivar: _layoutColumns
@property (readonly, nonatomic) NSInteger layoutWidth; // ivar: _layoutWidth
@property (readonly, nonatomic) NSInteger leftColumnOffset; // ivar: _leftColumnOffset
@property (nonatomic) CGFloat leftInset; // ivar: _leftInset
@property (readonly, nonatomic) CGFloat leftMargin; // ivar: _leftMargin
@property (readonly, nonatomic) CGFloat leftScreenMargin; // ivar: _leftScreenMargin
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (nonatomic) CGFloat minimumViewportWidthForLooseLayout; // ivar: _minimumViewportWidthForLooseLayout
@property (readonly, nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) NSInteger rightColumnOffset; // ivar: _rightColumnOffset
@property (nonatomic) CGFloat rightInset; // ivar: _rightInset
@property (readonly, nonatomic) CGFloat rightMargin; // ivar: _rightMargin
@property (readonly, nonatomic) CGFloat rightScreenMargin; // ivar: _rightScreenMargin
@property (readonly, nonatomic) CGSize viewportSize; // ivar: _viewportSize


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)widthForColumnRange:(struct _NSRange )arg0 ignoreMargin:(NSUInteger)arg1 ignoreGutter:(NSUInteger)arg2 ignoreViewportPadding:(NSUInteger)arg3 ;
-(CGFloat)xPositionForColumnIndex:(NSInteger)arg0 ignoreMargin:(NSUInteger)arg1 ignoreGutter:(NSUInteger)arg2 ignoreViewportPadding:(NSUInteger)arg3 ;
-(id)columnLayoutForComponentBlueprint:(id)arg0 unitConverter:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithConstrainedViewportSize:(struct CGSize )arg0 viewportSize:(struct CGSize )arg1 layoutWidth:(CGFloat)arg2 documentLayout:(id)arg3 numberOfLayoutColumns:(NSUInteger)arg4 leftMargin:(CGFloat)arg5 rightMargin:(CGFloat)arg6 numberOfColumns:(NSUInteger)arg7 columnWidth:(CGFloat)arg8 leftScreenMargin:(CGFloat)arg9 rightScreenMargin:(CGFloat)arg10 contentScaleFactor:(CGFloat)arg11 ;
-(struct _NSRange )convertColumnRange:(struct _NSRange )arg0 minimumColumnLength:(NSInteger)arg1 ;


@end


#endif