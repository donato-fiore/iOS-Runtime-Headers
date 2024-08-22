// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTINPUTUITEXTINPUTINTERFACE_H
#define PKTEXTINPUTUITEXTINPUTINTERFACE_H


#import <Foundation/Foundation.h>


@interface PKTextInputUITextInputInterface : NSObject



+(BOOL)_callShouldChangeTextInRange:(id)arg0 replacementText:(id)arg1 inTextInput:(id)arg2 ;
+(BOOL)_callShouldInsertText:(id)arg0 inTextInput:(id)arg1 isMarkedText:(BOOL)arg2 ;
+(BOOL)_selectTextRange:(id)arg0 inTextInput:(id)arg1 ;
+(BOOL)clearActivePreviewInTextInput:(id)arg0 ;
+(BOOL)configureSelectionStyleForDeletionPreviewInTextInput:(id)arg0 ;
+(BOOL)configureSelectionStyleForHighlightInTextInput:(id)arg0 ;
+(BOOL)configureSelectionStyleForNormalSelectionInTextInput:(id)arg0 ;
+(BOOL)deleteTextInRange:(struct _NSRange )arg0 inTextInput:(id)arg1 ;
+(BOOL)insertCommittedText:(id)arg0 withAlternatives:(id)arg1 activePreviewText:(id)arg2 replacingRange:(struct _NSRange )arg3 inTextInput:(id)arg4 ;
+(BOOL)isProtectedTextAttachment:(id)arg0 ;
+(BOOL)isValidRange:(struct _NSRange )arg0 inTextInput:(id)arg1 ;
+(BOOL)makeTextInputFirstResponder:(id)arg0 forPencilInput:(BOOL)arg1 ;
+(BOOL)selectTextInRange:(struct _NSRange )arg0 inTextInput:(id)arg1 ;
+(BOOL)selectWordBoundaryAtPoint:(struct CGPoint )arg0 inTextInput:(id)arg1 ;
+(BOOL)setSelectionWithReferencePoint:(struct CGPoint )arg0 inTextInput:(id)arg1 ;
+(BOOL)showSelectionCommandsForTextInput:(id)arg0 ;
+(NSInteger)characterIndexClosestToPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 inTextInput:(id)arg2 forInsertingText:(BOOL)arg3 ;
+(NSInteger)characterIndexClosestToPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 inTextInput:(id)arg2 forInsertingText:(BOOL)arg3 adjustForLastCharacter:(BOOL)arg4 ;
+(NSInteger)contentLengthForTextInput:(id)arg0 ;
+(id)_uiTextRangeForRange:(struct _NSRange )arg0 inTextInput:(id)arg1 ;
+(id)attributesAtCharacterIndex:(NSInteger)arg0 inTextInput:(id)arg1 ;
+(id)editableTextAttachmentFileTypes;
+(id)insertTextPlaceholderWithSize:(struct CGSize )arg0 inTextInput:(id)arg1 ;
+(id)protectedCharacterIndexesInRange:(struct _NSRange )arg0 inTextInput:(id)arg1 ;
+(id)rectValuesForSelectionRects:(id)arg0 inCoordinateSpace:(id)arg1 inTextInput:(id)arg2 intersectingRect:(struct CGRect )arg3 ;
+(id)selectionRectsForRange:(struct _NSRange )arg0 inCoordinateSpace:(id)arg1 inTextInput:(id)arg2 intersectingRect:(struct CGRect )arg3 ;
+(id)stringInRange:(struct _NSRange )arg0 inTextInput:(id)arg1 ;
+(struct CGRect )caretRectForCharacterIndex:(NSInteger)arg0 inCoordinateSpace:(id)arg1 inTextInput:(id)arg2 ;
+(struct CGRect )caretRectInCoordinateSpace:(id)arg0 inTextInput:(id)arg1 ;
+(struct CGRect )firstRectForRange:(struct _NSRange )arg0 inCoordinateSpace:(id)arg1 inTextInput:(id)arg2 ;
+(struct _NSRange )_rangeFromUITextPosition:(id)arg0 toUITextPosition:(id)arg1 inTextInput:(id)arg2 ;
+(struct _NSRange )activePreviewRangeInTextInput:(id)arg0 ;
+(struct _NSRange )rangeOfCharacterAtIndex:(NSUInteger)arg0 inTextInput:(id)arg1 ;
+(struct _NSRange )selectedRangeInTextInput:(id)arg0 ;
+(void)notifyTextDidChangeInTextInput:(id)arg0 ;
+(void)notifyTextWillChangeInTextInput:(id)arg0 ;
+(void)removeTextPlaceholder:(id)arg0 inTextInput:(id)arg1 ;


@end


#endif