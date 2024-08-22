// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT29EFFECTSCONTROLSVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT29EFFECTSCONTROLSVIEWCONTROLLER_H

@class UIViewController;


#import "_TtC15ConversationKit19InCallControlButton.h"

@interface _TtC15ConversationKit29EffectsControlsViewController : UIViewController {
    ? effectsBrowserViewController;
    ? effectsEnabled;
    ? effectsBrowserHeight;
    ? constraintsToUpdate;
    ? delegate;
    ? backgroundBlurView;
}


@property (nonatomic, readonly) _TtC15ConversationKit19InCallControlButton *effectsButton; // ivar: effectsButton
@property (nonatomic) BOOL effectsButtonIsVisible; // ivar: effectsButtonIsVisible


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif