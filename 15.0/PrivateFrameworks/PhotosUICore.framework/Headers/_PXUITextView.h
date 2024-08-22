// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXUITEXTVIEW_H
#define _PXUITEXTVIEW_H

@class UITextView, NSString, UIKeyCommand, UITapGestureRecognizer;
@protocol PKScribbleInteractionDelegate, UIGestureRecognizerDelegate;



@interface _PXUITextView : UITextView <PKScribbleInteractionDelegate, UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIKeyCommand *escapeKeyCommand; // ivar: _escapeKeyCommand
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_distanceFromContentToGivenPoint:(struct CGPoint )arg0 charIndexAtPoint:(*NSUInteger)arg1 ;
-(id)_linkTappedByGesture:(id)arg0 charIndexAtPoint:(*NSUInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyCommands;
-(void)_handleEscape:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)setEditable:(BOOL)arg0 ;


@end


#endif