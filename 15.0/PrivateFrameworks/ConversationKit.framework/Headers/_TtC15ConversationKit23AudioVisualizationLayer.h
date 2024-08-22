// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT23AUDIOVISUALIZATIONLAYER_H
#define _TTC15CONVERSATIONKIT23AUDIOVISUALIZATIONLAYER_H

@class CALayer;



@interface _TtC15ConversationKit23AudioVisualizationLayer : CALayer {
    ? isAnimating;
    ? scale;
    ? scaleBuffer;
    ? rings;
    ? color;
}


@property (nonatomic) CGRect bounds;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;


@end


#endif