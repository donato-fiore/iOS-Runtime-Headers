// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICAUTHORHIGHLIGHTSCONTROLLER_H
#define ICAUTHORHIGHLIGHTSCONTROLLER_H

@class TTTextEditGrouper, NSCache, ICNote, NSDate, NSMutableSet;

#import <Foundation/Foundation.h>

#import "ICDisplayLink.h"

@interface ICAuthorHighlightsController : NSObject

@property (nonatomic) BOOL allowsAnimations; // ivar: _allowsAnimations
@property (readonly, nonatomic) TTTextEditGrouper *editGrouper; // ivar: _editGrouper
@property (readonly, nonatomic) NSCache *editGroupsForTextStorageDocument; // ivar: _editGroupsForTextStorageDocument
@property (readonly, nonatomic) CGFloat fadedMultiplier;
@property (readonly, nonatomic) ICDisplayLink *highlightAnimationsDisplayLink; // ivar: _highlightAnimationsDisplayLink
@property (readonly, nonatomic) CGFloat highlightedMultiplier;
@property (readonly, nonatomic) CGFloat implicitHighlightValue;
@property (readonly, nonatomic) ICNote *note; // ivar: _note
@property (copy, nonatomic) NSDate *now; // ivar: _now
@property (readonly, nonatomic) NSMutableSet *textStorageDocumentsBeingUpdated; // ivar: _textStorageDocumentsBeingUpdated
@property (readonly, nonatomic) NSMutableSet *textStorageDocumentsNeedingHighlightUpdates; // ivar: _textStorageDocumentsNeedingHighlightUpdates


-(BOOL)isAnimating;
-(BOOL)isPerformingHighlightUpdatesForTextStorage:(id)arg0 ;
-(BOOL)rangeHasOrNeedsHighlights:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(BOOL)shouldAnimateInTextStorage:(id)arg0 ;
-(id)editGroupsForTextStorage:(id)arg0 ;
-(id)initWithNote:(id)arg0 ;
-(void)dealloc;
-(void)extendHighlightsForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(void)extendHighlightsForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 reverse:(BOOL)arg2 ;
-(void)flashHighlightsForRange:(struct _NSRange )arg0 withDuration:(id)arg1 inTextStorage:(id)arg2 ;
-(void)performHighlightUpdatesForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 updates:(id)arg2 ;
-(void)removeHighlightAnimationsForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(void)removeHighlightValueForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(void)setAttachmentHighlightValue:(CGFloat)arg0 highlightColor:(id)arg1 forRange:(struct _NSRange )arg2 inTextStorage:(id)arg3 ;
-(void)setCheckmarkHighlightValue:(CGFloat)arg0 highlightColor:(id)arg1 forRange:(struct _NSRange )arg2 inTextStorage:(id)arg3 ;
-(void)setHighlightAnimation:(id)arg0 forRange:(struct _NSRange )arg1 inTextStorage:(id)arg2 ;
-(void)setHighlightAttributesForHighlightValue:(CGFloat)arg0 forRange:(struct _NSRange )arg1 inTextStorage:(id)arg2 editGroups:(id)arg3 ;
-(void)setHighlightValue:(CGFloat)arg0 aboveImplicitHighlights:(BOOL)arg1 forRange:(struct _NSRange )arg2 inTextStorage:(id)arg3 ;
-(void)setTextHighlightValue:(CGFloat)arg0 highlightColor:(id)arg1 forRange:(struct _NSRange )arg2 inTextStorage:(id)arg3 ;
-(void)textStorageDidProcessEndEditing:(id)arg0 ;
-(void)updateHighlightAnimationsIfNeeded;
-(void)updateHighlightAttributesForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;


@end


#endif