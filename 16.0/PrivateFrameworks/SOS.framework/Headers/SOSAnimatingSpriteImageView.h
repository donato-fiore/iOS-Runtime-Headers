// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOSANIMATINGSPRITEIMAGEVIEW_H
#define SOSANIMATINGSPRITEIMAGEVIEW_H

@class UIView, CALayer, UIImage;



@interface SOSAnimatingSpriteImageView : UIView {
    CALayer *_imageLayer;
}


@property (nonatomic) NSUInteger framesPerSecond; // ivar: _framesPerSecond
@property (nonatomic) NSInteger spriteColumnCount; // ivar: _spriteColumnCount
@property (nonatomic) NSInteger spriteFrameCount; // ivar: _spriteFrameCount
@property (retain, nonatomic) UIImage *spriteImage; // ivar: _spriteImage


+(id)_createNewSpriteArray:(id)arg0 currentFrame:(NSUInteger)arg1 arraySize:(NSUInteger)arg2 interrupted:(BOOL)arg3 ;
-(BOOL)isAnimating;
-(NSUInteger)_findSpriteIndex:(struct CGPoint )arg0 centerPoints:(id)arg1 ;
-(id)_centerPointValues;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_spriteFrameSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)animateOnce;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg0 ;
-(void)startAnimating;
-(void)stopAnimatingFinishingCycle:(BOOL)arg0 ;
-(void)updateLayerWithTintColor;


@end


#endif