// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIANIMATINGSPRITEIMAGEVIEW_H
#define FIUIANIMATINGSPRITEIMAGEVIEW_H

@class UIView, CALayer, UIImage;



@interface FIUIAnimatingSpriteImageView : UIView {
    CALayer *_imageLayer;
}


@property (nonatomic) NSUInteger framesPerSecond; // ivar: _framesPerSecond
@property (nonatomic) NSInteger spriteColumnCount; // ivar: _spriteColumnCount
@property (nonatomic) NSInteger spriteFrameCount; // ivar: _spriteFrameCount
@property (retain, nonatomic) UIImage *spriteImage; // ivar: _spriteImage


+(NSUInteger)_findSpriteIndex:(struct CGPoint )arg0 centerPoints:(id)arg1 ;
+(id)_createNewSpriteArray:(id)arg0 currentFrame:(NSUInteger)arg1 arraySize:(NSUInteger)arg2 interrupted:(BOOL)arg3 ;
+(void)_pauseLayer:(id)arg0 ;
+(void)_resetLayer:(id)arg0 ;
+(void)_resumeLayer:(id)arg0 ;
-(BOOL)isAnimating;
-(id)_centerPointValues;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_spriteFrameSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)animateOnce;
-(void)layoutSubviews;
-(void)pauseAnimating;
-(void)resumeAnimating;
-(void)startAnimating;
-(void)stopAnimatingFinishingCycle:(BOOL)arg0 ;


@end


#endif