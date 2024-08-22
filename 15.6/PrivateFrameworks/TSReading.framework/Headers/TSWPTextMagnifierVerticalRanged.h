// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTEXTMAGNIFIERVERTICALRANGED_H
#define TSWPTEXTMAGNIFIERVERTICALRANGED_H



#import "TSWPTextMagnifierRanged.h"

@interface TSWPTextMagnifierVerticalRanged : TSWPTextMagnifierRanged



+(id)sharedRangedMagnifier;
-(BOOL)shouldHideCanvasLayer;
-(CGFloat)currentOffset;
-(id)initWithDefaultFrame;
-(id)maskImageName;
-(id)overlayImageName;
-(id)underlayImageName;
-(void)beginMagnifyingTarget:(id)arg0 magnificationPoint:(struct CGPoint )arg1 offset:(struct CGPoint )arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
-(void)drawMagnifierClippedCanvasLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)remove;
-(void)stopMagnifying:(BOOL)arg0 ;
-(void)updateFrame;
-(void)zoomLeftAnimation;
-(void)zoomRightAnimation;


@end


#endif