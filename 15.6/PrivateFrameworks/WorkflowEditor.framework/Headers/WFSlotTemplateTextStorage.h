// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSLOTTEMPLATETEXTSTORAGE_H
#define WFSLOTTEMPLATETEXTSTORAGE_H

@class NSTextStorage, NSArray, UIColor, NSTextAttachment, UIFont, NSSet, NSMutableSet, NSParagraphStyle;
@protocol WFSlotTemplateTextStorageDelegate;



@interface WFSlotTemplateTextStorage : NSTextStorage

@property (copy, nonatomic) NSArray *contents; // ivar: _contents
@property (readonly, nonatomic) NSInteger contentsTextAlignment; // ivar: _contentsTextAlignment
@property (weak, nonatomic) NSObject<WFSlotTemplateTextStorageDelegate> *delegate;
@property (readonly, nonatomic) UIColor *disabledSlotBackgroundColor; // ivar: _disabledSlotBackgroundColor
@property (readonly, nonatomic) UIColor *disabledSlotTitleColor; // ivar: _disabledSlotTitleColor
@property (retain, nonatomic) NSTextAttachment *disclosureAttachment; // ivar: _disclosureAttachment
@property (nonatomic) NSUInteger editingLevel; // ivar: _editingLevel
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) NSSet *highlightedSlots;
@property (readonly, nonatomic) NSMutableSet *mutableHighlightedSlots; // ivar: _mutableHighlightedSlots
@property (readonly, nonatomic) NSMutableSet *mutableSelectedSlots; // ivar: _mutableSelectedSlots
@property (readonly, nonatomic) NSMutableSet *mutableTypingSlots; // ivar: _mutableTypingSlots
@property (copy, nonatomic) NSParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly, nonatomic) NSSet *selectedSlots;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic) NSTextStorage *textStorage; // ivar: _textStorage
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) NSSet *typingSlots;
@property (retain, nonatomic) UIFont *unpopulatedFont; // ivar: _unpopulatedFont


-(BOOL)slotContainsStrongRTL:(id)arg0 ;
-(NSUInteger)slotSpacingOpportunityAtCharacterIndex:(NSUInteger)arg0 ;
-(id)attributedStringForSlot:(id)arg0 isRTL:(BOOL)arg1 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)init;
-(id)slotAtCharacterIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 effectiveContentRange:(struct _NSRange *)arg2 ;
-(id)string;
-(id)stringForSlotSpacingOpportunity:(NSUInteger)arg0 ;
-(struct _NSRange )characterRangeForSlot:(id)arg0 includingInsideSpacingOpportunities:(BOOL)arg1 ;
-(void)_updateColorsForSlot:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)beginEditing;
-(void)didBeginTypingInSlot:(id)arg0 ;
-(void)didDeselectSlot:(id)arg0 ;
-(void)didEndTypingInSlot:(id)arg0 ;
-(void)didHighlightSlot:(id)arg0 ;
-(void)didSelectSlot:(id)arg0 ;
-(void)didUnhighlightSlot:(id)arg0 ;
-(void)endEditing;
-(void)enumerateContentInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)getColorsForSlot:(id)arg0 titleColor:(*id)arg1 backgroundColor:(*id)arg2 ;
-(void)regenerateEntireAttributedString;
-(void)replaceAttribute:(id)arg0 value:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)replaceAttributeInInanimateText:(id)arg0 value:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)updateColorsForAllSlots;
-(void)updateColorsForSlot:(id)arg0 ;


@end


#endif