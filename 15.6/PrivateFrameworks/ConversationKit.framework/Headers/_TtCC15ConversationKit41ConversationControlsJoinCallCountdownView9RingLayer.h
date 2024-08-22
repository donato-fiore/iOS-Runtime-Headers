// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC15CONVERSATIONKIT41CONVERSATIONCONTROLSJOINCALLCOUNTDOWNVIEW9RINGLAYER_H
#define _TTCC15CONVERSATIONKIT41CONVERSATIONCONTROLSJOINCALLCOUNTDOWNVIEW9RINGLAYER_H

@class CALayer;



@interface _TtCC15ConversationKit41ConversationControlsJoinCallCountdownView9RingLayer : CALayer {
    ? lineWidth;
    ? fillColor;
    ? strokeColor;
}


@property (nonatomic) CGFloat percentage; // ivar: percentage


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif