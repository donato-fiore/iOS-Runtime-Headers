// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXBUTTONCOMPONENTVIEW_H
#define SXBUTTONCOMPONENTVIEW_H

@class NSString;
@protocol SXTextViewDelegate;


#import "SXComponentView.h"
#import "SXTextView.h"

@interface SXButtonComponentView : SXComponentView <SXTextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXTextView *textView; // ivar: _textView
@property (nonatomic) CGRect typographicBounds; // ivar: _typographicBounds


-(id)accessibilityContextualLabelForTextView:(id)arg0 ;
-(id)accessibilityCustomRotorMembershipForTextView:(id)arg0 ;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)accessibilityValue;
-(id)componentIdentifierForTextView:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 ;
-(id)textRulesForTextView:(id)arg0 ;
-(struct CGRect )absoluteTextViewFrame;
-(void)didMoveToSuperview;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)provideInfosLayoutTo:(id)arg0 ;
-(void)receivedInfo:(id)arg0 fromLayoutingPhaseWithIdentifier:(id)arg1 ;
-(void)setAbsoluteFrame:(struct CGRect )arg0 ;
-(void)setPresentationFrame:(struct CGRect )arg0 ;


@end


#endif