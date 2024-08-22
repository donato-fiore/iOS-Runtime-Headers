// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)highlightColorForUserID:(id)arg0 ;
-(id)initWithNote:(id)arg0 ;
-(void)dealloc;
-(void)extendHighlightsForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(void)extendHighlightsForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 reverse:(BOOL)arg2 ;
-(void)flashHighlightsForRange:(struct _NSRange )arg0 withDuration:(id)arg1 inTextStorage:(id)arg2 ;
-(void)performHighlightUpdatesForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 updates:(id)arg2 ;
-(void)removeHighlightAnimationsForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(void)removeHighlightValuesForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(void)setAttachmentHighlightValue:(CGFloat)arg0 highlightColor:(id)arg1 forRange:(struct _NSRange )arg2 inTextStorage:(id)arg3 ;
-(void)setCheckmarkHighlightValue:(CGFloat)arg0 highlightColor:(id)arg1 forRange:(struct _NSRange )arg2 inTextStorage:(id)arg3 ;
-(void)setHighlightAnimation:(id)arg0 forRange:(struct _NSRange )arg1 inTextStorage:(id)arg2 ;
-(void)setHighlightAttributesForHighlightValue:(CGFloat)arg0 highlightColor:(id)arg1 forRange:(struct _NSRange )arg2 inTextStorage:(id)arg3 editGroups:(id)arg4 ;
-(void)setHighlightValue:(id)arg0 forRange:(struct _NSRange )arg1 inTextStorage:(id)arg2 ;
-(void)setTextHighlightValue:(CGFloat)arg0 highlightColor:(id)arg1 blendsTextColor:(BOOL)arg2 forRange:(struct _NSRange )arg3 inTextStorage:(id)arg4 ;
-(void)textStorageDidProcessEndEditing:(id)arg0 ;
-(void)updateHighlightAnimationsIfNeeded;
-(void)updateHighlightAttributesForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;


@end


#endif