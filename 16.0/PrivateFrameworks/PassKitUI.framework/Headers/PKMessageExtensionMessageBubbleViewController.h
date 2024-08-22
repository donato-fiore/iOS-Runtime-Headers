// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMESSAGEEXTENSIONMESSAGEBUBBLEVIEWCONTROLLER_H
#define PKMESSAGEEXTENSIONMESSAGEBUBBLEVIEWCONTROLLER_H

@class UIViewController;
@protocol PKMessageExtensionMessageBubbleViewControllerDelegate;


#import "PKMessageExtensionMessageBubbleView.h"

@interface PKMessageExtensionMessageBubbleViewController : UIViewController {
    id<PKMessageExtensionMessageBubbleViewControllerDelegate> *_delegate;
}


@property (retain, nonatomic) PKMessageExtensionMessageBubbleView *bubbleView; // ivar: _bubbleView


-(CGFloat)heightThatFitsWidth:(CGFloat)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)didDoubleTapMessage;
-(void)didLongPressMessage;
-(void)didTapMessage;
-(void)viewDidLoad;


@end


#endif