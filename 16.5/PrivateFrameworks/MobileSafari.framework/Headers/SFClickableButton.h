// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCLICKABLEBUTTON_H
#define SFCLICKABLEBUTTON_H

@class UIButton, _UIClickInteraction, NSString;
@protocol _UIClickInteractionDelegate;



@interface SFClickableButton : UIButton <_UIClickInteractionDelegate>

 {
    _UIClickInteraction *_clickInteraction;
}


@property (nonatomic, getter=isClickEnabled) BOOL clickEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)clickInteractionShouldBegin:(id)arg0 ;
-(void)clickInteractionDidClickDown:(id)arg0 ;
-(void)clickInteractionDidClickUp:(id)arg0 ;


@end


#endif