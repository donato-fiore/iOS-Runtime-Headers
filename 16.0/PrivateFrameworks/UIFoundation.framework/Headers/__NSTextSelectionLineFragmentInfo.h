// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSTEXTSELECTIONLINEFRAGMENTINFO_H
#define __NSTEXTSELECTIONLINEFRAGMENTINFO_H

@class NSMapTable, NSSet, NSArray;

#import <Foundation/Foundation.h>

#import "NSTextRange.h"
#import "NSTextSelectionNavigation.h"

@interface __NSTextSelectionLineFragmentInfo : NSObject {
    NSInteger _offset;
    NSInteger _baseDirection;
    int _visualDirection;
    *? _carets;
    NSUInteger _numberOfCarets;
    NSMapTable *_primaryLocationTable;
    NSSet *_secondaryLocationTable;
    NSArray *_sortedLocations;
    NSArray *_otherLocations;
}


@property (readonly, getter=isMonotonicDirection) BOOL monotonicDirection;
@property NSInteger numberOfCaretPositions;
@property (readonly) NSTextRange *textRange; // ivar: _textRange
@property (readonly) NSTextSelectionNavigation *textSelectionNavigation; // ivar: _navigation


-(CGFloat)offsetForLocation:(id)arg0 ;
-(NSInteger)_baseWritingDirection;
-(NSInteger)_sortedLocationIndexForLocation:(id)arg0 ;
-(NSInteger)indexForEdgeLocationInTextRanges:(id)arg0 leading:(BOOL)arg1 ;
-(NSInteger)indexForPrimaryLocation:(id)arg0 ;
-(id)_findNextCaretLocationForLocation:(id)arg0 ;
-(id)_sortedLocations;
-(id)description;
-(id)initWithTextSelectionNavigation:(id)arg0 range:(id)arg1 ;
-(id)rangesBetweenStartingOffset:(CGFloat)arg0 endOffset:(CGFloat)arg1 continuous:(BOOL)arg2 ;
-(id)textRangeOfCharacterAtOffset:(CGFloat)arg0 fractionOfDistanceThroughGlyph:(*CGFloat)arg1 ;
-(struct ? *)caretPositionAtIndex:(NSInteger)arg0 ;
-(struct ? *)caretPositionClosestToLocation:(id)arg0 visualDirection:(NSInteger)arg1 matchLocation:(*BOOL)arg2 ;
-(struct ? *)caretPositionClosestToOffset:(CGFloat)arg0 ;
-(struct ? *)logicalFirstCaret;
-(struct ? *)logicalLastCaret;
-(void)_cache;
-(void)_computeVisualDirection;
-(void)_fetchCaretOffsets;
-(void)_invalidateSortedLocations;
-(void)_resolveTrailingEdges;
-(void)dealloc;


@end


#endif