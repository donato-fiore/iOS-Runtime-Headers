// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPENCILKITATTACHMENTACCESSIBILITYELEMENT_H
#define ICPENCILKITATTACHMENTACCESSIBILITYELEMENT_H

@class UIAccessibilityElement, UIView, NSArray, NSString, ICInlineCanvasTextAttachment;
@protocol ICAccessibilityRotorSearchElement;


#import "ICBaseTextView.h"

@interface ICPencilKitAttachmentAccessibilityElement : UIAccessibilityElement <ICAccessibilityRotorSearchElement>



@property (readonly, nonatomic) UIView *attachmentDrawingView;
@property (retain, nonatomic) NSArray *cachedResizeHandleElements; // ivar: _cachedResizeHandleElements
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *resizeHandleElements;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedRotorTypes;
@property (weak, nonatomic) ICInlineCanvasTextAttachment *textAttachment; // ivar: _textAttachment
@property (readonly, nonatomic) _NSRange textRangeInNote;
@property (weak, nonatomic) ICBaseTextView *textView; // ivar: _textView


-(BOOL)accessibilityActivate;
-(BOOL)isAccessibilityElement;
-(BOOL)isSelected;
-(BOOL)selectTextRangeAction;
-(BOOL)showingResizeHandles;
-(id)_accessibilityParentForFindingScrollParent;
-(id)accessibilityContainer;
-(id)accessibilityCustomActions;
-(id)accessibilityCustomRotors;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)initWithTextAttachment:(id)arg0 textView:(id)arg1 ;
-(struct CGPoint )accessibilityActivationPoint;
-(struct CGRect )accessibilityFrame;
-(struct _NSRange )rangeInTextStorage;


@end


#endif