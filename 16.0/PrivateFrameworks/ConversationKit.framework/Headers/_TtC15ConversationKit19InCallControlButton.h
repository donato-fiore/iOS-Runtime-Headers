// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT19INCALLCONTROLBUTTON_H
#define _TTC15CONVERSATIONKIT19INCALLCONTROLBUTTON_H

@class UIControl;



@interface _TtC15ConversationKit19InCallControlButton : UIControl {
    ? callbackCancellable;
    ? discBackgroundEffectView;
    ? discBackgroundVibrancyView;
    ? discBackgroundFlatView;
    ? imageView;
    ? paragraphStyle;
    ? isUsingVisualEffects;
    ? style;
    ? label;
    ? discView;
    ? image;
    ? colorConfiguration;
    ? contentAlpha;
    ? menuDataSource;
}


@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;


-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif