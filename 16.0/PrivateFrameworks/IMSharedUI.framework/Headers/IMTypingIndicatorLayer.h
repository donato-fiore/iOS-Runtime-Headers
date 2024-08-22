// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMTYPINGINDICATORLAYER_H
#define IMTYPINGINDICATORLAYER_H

@class CALayer, UIColor, NSString, CAReplicatorLayer, UITraitCollection;
@protocol IMTypingIndicatorLayerProtocol;



@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol>



@property (copy, nonatomic) UIColor *bubbleColor; // ivar: _bubbleColor
@property (retain, nonatomic) CALayer *bubbleContainer; // ivar: _bubbleContainer
@property (nonatomic) CGFloat bubbleOpacity; // ivar: _bubbleOpacity
@property (copy, nonatomic) UIColor *customBubbleColor; // ivar: _customBubbleColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIColor *defaultBubbleColor;
@property (readonly, nonatomic) CGFloat defaultBubbleOpacity;
@property (readonly, nonatomic) UIColor *defaultThinkingDotColor;
@property (readonly, nonatomic) CGFloat defaultThinkingDotOpacity;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDarkBackground; // ivar: _hasDarkBackground
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) id *iconImage; // ivar: _iconImage
@property (retain, nonatomic) CALayer *iconImageLayer; // ivar: _iconImageLayer
@property (retain, nonatomic) CALayer *largeBubble; // ivar: _largeBubble
@property (retain, nonatomic) CALayer *mediumBubble; // ivar: _mediumBubble
@property (retain, nonatomic) CALayer *smallBubble; // ivar: _smallBubble
@property (readonly) Class superclass;
@property (retain, nonatomic) CALayer *thinkingDot; // ivar: _thinkingDot
@property (copy, nonatomic) UIColor *thinkingDotColor; // ivar: _thinkingDotColor
@property (retain, nonatomic) CALayer *thinkingDotContainer; // ivar: _thinkingDotContainer
@property (nonatomic) CGFloat thinkingDotOpacity; // ivar: _thinkingDotOpacity
@property (retain, nonatomic) CAReplicatorLayer *thinkingDots; // ivar: _thinkingDots
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(BOOL)supportsTypingIndicatorAnimation;
+(struct CGSize )defaultSize;
-(CGFloat)convertedCurrentMediaTime;
-(id)_largeBubbleGrowAnimationsWithSpeed:(CGFloat)arg0 offset:(struct CGPoint )arg1 ;
-(id)_largeBubblePulseAnimationWithSpeed:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(id)_mediumBubbleGrowAnimationsWithSpeed:(CGFloat)arg0 offset:(struct CGPoint )arg1 ;
-(id)_mediumBubblePulseAnimationWithSpeed:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(id)_smallBubbleGrowAnimationsWithSpeed:(CGFloat)arg0 offset:(struct CGPoint )arg1 ;
-(id)_smallBubblePulseAnimationWithSpeed:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(id)init;
-(id)initHighlighted:(BOOL)arg0 ;
-(id)resolvedColor:(id)arg0 forTraitCollection:(id)arg1 ;
-(void)_buildIconImage;
-(void)_buildThinkingDots;
-(void)_setup;
-(void)_updateBubbleColors;
-(void)_updateBubbleOpacity;
-(void)_updateForImage;
-(void)startGrowAnimation;
-(void)startGrowAnimationWithCompletionBlock:(id)arg0 ;
-(void)startPulseAnimation;
-(void)startShrinkAnimationWithCompletionBlock:(id)arg0 ;
-(void)stopAnimation;
-(void)stopPulseAnimation;


@end


#endif