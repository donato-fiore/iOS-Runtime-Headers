// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILCOMPOSERECIPIENTTEXTVIEW_H
#define MFMAILCOMPOSERECIPIENTTEXTVIEW_H

@class CNComposeRecipientTextView, NSString;
@protocol PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, _UICursorInteractionDelegate, MFMailComposeRecipientTextViewDelegate;


#import "MFComposeDisplayMetrics.h"

@interface MFMailComposeRecipientTextView : CNComposeRecipientTextView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, _UICursorInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFMailComposeRecipientTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics; // ivar: _displayMetrics
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(CGFloat)beamHeight;
-(id)cursorInteraction:(id)arg0 regionForLocation:(struct CGPoint )arg1 defaultRegion:(id)arg2 ;
-(id)cursorInteraction:(id)arg0 styleForRegion:(id)arg1 modifiers:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)nextResponder;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(struct CGRect )cursorRectForLineContainingGlyphIndex:(NSUInteger)arg0 ;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)_textInputDidChange:(id)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)dealloc;
-(void)layoutMarginsDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif