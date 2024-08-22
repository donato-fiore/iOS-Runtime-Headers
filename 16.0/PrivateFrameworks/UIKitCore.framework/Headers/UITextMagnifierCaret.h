// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTMAGNIFIERCARET_H
#define UITEXTMAGNIFIERCARET_H



#import "UITextMagnifier.h"

@interface UITextMagnifierCaret : UITextMagnifier {
    CGFloat _yOffset;
}


@property (nonatomic) CGPoint offset; // ivar: _offset


+(Class)renderClass;
+(id)activeCaretMagnifier;
+(id)sharedCaretMagnifier;
-(BOOL)isHorizontal;
-(BOOL)terminalPointPlacedCarefully;
-(id)initWithFrame;
-(struct CGPoint )animationPoint;
-(void)beginMagnifyingTarget:(id)arg0 text:(id)arg1 magnificationPoint:(struct CGPoint )arg2 offset:(struct CGPoint )arg3 animated:(BOOL)arg4 ;
-(void)remove;
-(void)setAnimationPoint:(struct CGPoint )arg0 ;
-(void)updateFrameAndOffset;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;


@end


#endif