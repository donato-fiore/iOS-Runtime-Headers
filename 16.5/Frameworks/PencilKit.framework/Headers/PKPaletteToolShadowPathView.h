// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTETOOLSHADOWPATHVIEW_H
#define PKPALETTETOOLSHADOWPATHVIEW_H

@class UIView, NSString;
@protocol PKPaletteEdgeLocating, PKPaletteViewSizeScaling;



@interface PKPaletteToolShadowPathView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling>

 {
    UIView *_largeShadow;
    UIView *_smallShadow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;


-(id)initWithToolConfiguration:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateUI;
-(void)layoutSubviews;


@end


#endif