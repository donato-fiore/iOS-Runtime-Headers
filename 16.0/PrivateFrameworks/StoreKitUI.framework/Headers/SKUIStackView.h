// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTACKVIEW_H
#define SKUISTACKVIEW_H

@class UIView, NSMutableArray, UIWindow, UIImage;



@interface SKUIStackView : UIView {
    NSMutableArray *_stackViews;
    UIWindow *_window;
}


@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSInteger stackViewStyle; // ivar: _stackViewStyle


-(NSInteger)_stackDepth;
-(id)_initSKUIStackView;
-(id)initWithStackViewStyle:(NSInteger)arg0 ;
-(struct CGPoint )_centerInPerspectiveTargetViewCoordinates;
-(struct CGSize )_levelInsetSize;
-(struct CGSize )_normalizedDistanceFromVanishingPointForCenter:(struct CGPoint )arg0 perspectiveTargetView:(id)arg1 ;
-(struct CGSize )_sizeOfItemAtIndex:(CGFloat)arg0 ;
-(struct UIOffset )_relativeOffsetForMinimumRelativeOffset:(struct UIOffset )arg0 maximumRelativeOffset:(struct UIOffset )arg1 normalizedDistanceFromVanishingPoint:(struct CGSize )arg2 ;
-(struct UIOffset )_relativeOffsetOfItemAtIndex:(NSInteger)arg0 withCenter:(struct CGPoint )arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)performCompressionAnimationWithCompletionHandler:(id)arg0 ;


@end


#endif