// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGROUNDEDCORNERMASKLAYOUT_H
#define PXGROUNDEDCORNERMASKLAYOUT_H

@class NSString, UIColor;
@protocol PXGPathSource, PXGSolidColorSource;


#import "PXGLayout.h"
#import "PXGPath.h"

@interface PXGRoundedCornerMaskLayout : PXGLayout <PXGPathSource, PXGSolidColorSource>

 {
    ? _updateFlags;
    _PXGSpriteIndexRange _sideMaskSpriteIndexRange;
    NSInteger _mediaVersion;
}


@property (nonatomic) BOOL continuousCorners; // ivar: _continuousCorners
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets insets; // ivar: _insets
@property (nonatomic) CGFloat leftMaskWidth; // ivar: _leftMaskWidth
@property (retain, nonatomic) UIColor *maskColor; // ivar: _maskColor
@property (nonatomic) CGFloat maskScale; // ivar: _maskScale
@property (nonatomic) CGFloat rightMaskWidth; // ivar: _rightMaskWidth
@property (readonly) Class superclass;
@property (copy, nonatomic) PXGPath *topLeftPath; // ivar: _topLeftPath


-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)initWithCornerRadius:(CGFloat)arg0 continuousCorners:(BOOL)arg1 maskColor:(id)arg2 ;
-(id)pathForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_invalidateContent;
-(void)_invalidatePath;
-(void)_updateContent;
-(void)_updatePath;
-(void)contentSizeDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;


@end


#endif