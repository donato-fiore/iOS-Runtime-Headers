// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILCOMPOSERECIPIENTTEXTVIEW_H
#define MFMAILCOMPOSERECIPIENTTEXTVIEW_H

@class CNComposeRecipientTextView, NSString, NSArray;
@protocol PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIPointerInteractionDelegate, MFMailComposeRecipientTextViewDelegate;


#import "MFComposeDisplayMetrics.h"

@interface MFMailComposeRecipientTextView : CNComposeRecipientTextView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFMailComposeRecipientTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics; // ivar: _displayMetrics
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *people;
@property (readonly) Class superclass;


-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(CGFloat)beamHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)nextResponder;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(struct CGRect )pointerRectForLineContainingGlyphIndex:(NSUInteger)arg0 ;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)_textInputDidChange:(id)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)appendText:(id)arg0 ;
-(void)dealloc;
-(void)layoutMarginsDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif