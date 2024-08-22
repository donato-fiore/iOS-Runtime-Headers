// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIRENDITIONMETRICS_H
#define CUIRENDITIONMETRICS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CUIRenditionMetrics : NSObject <NSCopying>

 {
    CGSize _imageSize;
    CGSize _defaultImageSize;
    CGSize _edgeBottomLeftMargin;
    CGSize _edgeTopRightMargin;
    CGSize _contentBottomLeftMargin;
    CGSize _contentTopRightMargin;
    CGFloat _baseline;
    CGSize _auxiliary1BottomLeftMargin;
    CGSize _auxiliary1TopRightMargin;
    CGSize _auxiliary2BottomLeftMargin;
    CGSize _auxiliary2TopRightMargin;
    CGFloat _scale;
    crmFlags _crmFlags;
}




-(BOOL)hasAlignmentEdgeMargins;
-(BOOL)hasOpaqueContentBounds;
-(BOOL)scalesHorizontally;
-(BOOL)scalesVertically;
-(CGFloat)baseline;
-(CGFloat)scale;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)metricsByMirroringHorizontally;
-(struct CGRect )contentRect;
-(struct CGRect )edgeRect;
-(struct CGRect )insetContentRectWithMetrics:(struct CGRect )arg0 ;
-(struct CGRect )insetRectWithMetrics:(struct CGRect )arg0 ;
-(struct CGSize )auxiliary1BottomLeftMargin;
-(struct CGSize )auxiliary1TopRightMargin;
-(struct CGSize )auxiliary2BottomLeftMargin;
-(struct CGSize )auxiliary2TopRightMargin;
-(struct CGSize )contentBottomLeftMargin;
-(struct CGSize )contentTopRightMargin;
-(struct CGSize )defaultImageSize;
-(struct CGSize )edgeBottomLeftMargin;
-(struct CGSize )edgeTopRightMargin;
-(struct CGSize )imageSize;


@end


#endif