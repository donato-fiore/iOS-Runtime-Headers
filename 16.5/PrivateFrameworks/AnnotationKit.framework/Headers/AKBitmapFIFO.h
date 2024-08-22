// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKBITMAPFIFO_H
#define AKBITMAPFIFO_H

@class CHPointFIFO, UIView;



@interface AKBitmapFIFO : CHPointFIFO {
    char * _bitmapDataPtr;
    *CGContext _bitmapContext;
    *CGImage _bitmapImage;
    *CGPath _cachedPath;
    ? _lastPoint;
}


@property CGSize bitmapSize; // ivar: _bitmapSize
@property BOOL bitmapSizeHasBeenUpdatedOnceForLiveDraw; // ivar: _bitmapSizeHasBeenUpdatedOnceForLiveDraw
@property CGFloat bitmapSizeMultiplier; // ivar: _bitmapSizeMultiplier
@property (nonatomic) BOOL isInLiveDraw; // ivar: _isInLiveDraw
@property ? lastPoint;
@property CGFloat shadowRadiusInView; // ivar: _shadowRadiusInView
@property CGRect unionDirtyRect; // ivar: _unionDirtyRect
@property (retain, nonatomic) UIView *view; // ivar: _view
@property CGAffineTransform viewToBitmapTransform; // ivar: _viewToBitmapTransform


-(id)initWithFIFO:(id)arg0 ;
-(struct CGPoint )_convertPointToScreenBacking:(struct CGPoint )arg0 ;
-(void)_addPointToBitmap;
-(void)_addSinglePointToBitmap;
-(void)_addToDirtyRect:(struct CGRect )arg0 ;
-(void)addPoint;


@end


#endif