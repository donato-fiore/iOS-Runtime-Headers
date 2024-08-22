// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDRAGINDICATORVIEW_H
#define PKDRAGINDICATORVIEW_H

@class UIView, NSString;
@protocol PKPaletteEdgeLocating, PKPaletteViewSizeScaling;



@interface PKDragIndicatorView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif