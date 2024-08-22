// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXTEXTCOMPONENTVIEW_H
#define SXTEXTCOMPONENTVIEW_H

@class NSString;
@protocol SXTextViewDelegate;


#import "SXComponentView.h"
#import "SXTangierController.h"
#import "SXTextView.h"

@interface SXTextComponentView : SXComponentView <SXTextViewDelegate>



@property (nonatomic) CGSize calculatedSize; // ivar: _calculatedSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) SXTangierController *tangierController; // ivar: _tangierController
@property (retain, nonatomic) SXTextView *textView; // ivar: _textView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)userInteractable;
-(id)accessibilityContextualLabelForTextView:(id)arg0 ;
-(id)accessibilityCustomRotorMembershipForTextView:(id)arg0 ;
-(id)componentIdentifierForTextView:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 tangierController:(id)arg4 ;
-(id)textRulesForTextView:(id)arg0 ;
-(id)textSource;
-(struct CGRect )absoluteTextViewFrame;
-(void)animationDidFinish:(id)arg0 ;
-(void)animationDidStart:(id)arg0 ;
-(void)didApplyBehavior:(id)arg0 ;
-(void)didMoveToWindow;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)provideInfosLayoutTo:(id)arg0 ;
-(void)receivedInfo:(id)arg0 fromLayoutingPhaseWithIdentifier:(id)arg1 ;
-(void)setAbsoluteFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPresentationFrame:(struct CGRect )arg0 ;
-(void)setupTextView;


@end


#endif