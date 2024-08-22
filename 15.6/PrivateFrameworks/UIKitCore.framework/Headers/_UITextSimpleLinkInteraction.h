// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTSIMPLELINKINTERACTION_H
#define _UITEXTSIMPLELINKINTERACTION_H



#import "UITextItemInteractionInteraction.h"
#import "UITapGestureRecognizer.h"
#import "UILongPressGestureRecognizer.h"
#import "_UITextInteractableItem.h"

@interface _UITextSimpleLinkInteraction : UITextItemInteractionInteraction {
    UITapGestureRecognizer *_linkTap;
    UILongPressGestureRecognizer *_highlighter;
    _UITextInteractableItem *_highlightedItem;
    BOOL _presentingFromSimpleTap;
}




-(BOOL)_allowItemInteractions;
-(BOOL)_beginInteractionSessionForLinkAtPoint:(struct CGPoint )arg0 asTap:(BOOL)arg1 precision:(NSUInteger)arg2 ;
-(BOOL)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint )arg0 asTap:(BOOL)arg1 precision:(NSUInteger)arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)interaction_gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg0 ;
-(id)gesturesForFailureRequirements;
-(id)init;
-(id)itemInteractableView;
-(id)textLinkInteractableView;
-(void)highlight:(id)arg0 ;
-(void)linkTapped:(id)arg0 ;


@end


#endif