// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLESELECTIONKNOB_H
#define ICTABLESELECTIONKNOB_H

@class UIView, NSString, UIPointerInteraction;
@protocol UIPointerInteractionDelegate;


#import "ICTableAttachmentViewController.h"

@interface ICTableSelectionKnob : UIView <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHovering) BOOL hovering; // ivar: _hovering
@property (readonly, nonatomic) BOOL isEnd;
@property (readonly, nonatomic) BOOL isStart;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly) Class superclass;
@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController; // ivar: _tableAttachmentViewController


-(BOOL)_accessibilityHasTextOperations;
-(BOOL)isAccessibilityElement;
-(BOOL)speakCurrentSelectionAXAction;
-(NSUInteger)accessibilityTraits;
-(id)_accessibilityTextOperations;
-(id)accessibilityContainer;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)aggregatedAttributedTextForCellRangeSelection;
-(id)axCopyString;
-(id)axCutString;
-(id)axLeftToRightString;
-(id)axMakeBoldString;
-(id)axMakeItalicString;
-(id)axMakeNotBoldString;
-(id)axMakeNotItalicString;
-(id)axMakeNotStrikethroughString;
-(id)axMakeNotUnderlinedString;
-(id)axMakeStrikethroughString;
-(id)axMakeUnderlinedString;
-(id)axPasteString;
-(id)axRightToLeftString;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTableAttachmentViewController:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )circleRect;
-(void)_accessibilityTextOperationAction:(id)arg0 ;
-(void)accessibilityDarkerSystemColorsStatusDidChange:(id)arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)getBoldForSelection:(*BOOL)arg0 italic:(*BOOL)arg1 underline:(*BOOL)arg2 strikethrough:(*BOOL)arg3 rightToLeft:(*BOOL)arg4 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif