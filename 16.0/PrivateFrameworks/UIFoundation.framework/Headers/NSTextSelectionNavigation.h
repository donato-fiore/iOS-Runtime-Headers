// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEXTSELECTIONNAVIGATION_H
#define NSTEXTSELECTIONNAVIGATION_H

@protocol NSTextSelectionDataSource;

#import <Foundation/Foundation.h>


@interface NSTextSelectionNavigation : NSObject {
    __NSTextSelectionLineFragmentInfo" _lineFragmentInfoCache;
    NSInteger _multipleSelectionAnchor;
    BOOL _supportsLayoutOrientation;
    BOOL _supportsContainer;
}


@property BOOL allowsNonContiguousRanges; // ivar: _allowsNonContiguousRanges
@property BOOL rotatesCoordinateSystemForLayoutOrientation; // ivar: _rotatesCoordinateSystemForLayoutOrientation
@property (weak) NSObject<NSTextSelectionDataSource> *textSelectionDataSource; // ivar: _textSelectionDataSource


+(id)_substringRangeForEnumerationType:(NSUInteger)arg0 location:(id)arg1 dataSource:(id)arg2 string:(*id)arg3 enclosingRange:(*id)arg4 ;
+(void)_setupCharacterSets;
+(void)initialize;
-(BOOL)_location:(id)arg0 withAffinity:(NSInteger)arg1 isAtBoundaryOfDestination:(NSInteger)arg2 onSide:(NSInteger)arg3 ;
-(BOOL)_usesVisualBidiSelection;
-(CGFloat)_anchorPositionOffsetForLocation:(id)arg0 textSelection:(id)arg1 ;
-(CGFloat)_caretOffsetForTextLocation:(id)arg0 affinity:(NSInteger)arg1 ;
-(NSInteger)_horizontalDirectionForDirection:(NSInteger)arg0 location:(id)arg1 ;
-(NSInteger)_logicalDirectionForDirection:(NSInteger)arg0 textSelection:(id)arg1 ;
-(id)_adjustLocationForNearestCaretPosition:(id)arg0 direction:(NSInteger)arg1 ;
-(id)_copyRangeForTextLineFragmentAtLocation:(id)arg0 affinity:(NSInteger)arg1 ;
-(id)_copyRangeForTextLineFragmentAtLocation:(id)arg0 affinity:(NSInteger)arg1 copyEnclosingRange:(*id)arg2 ;
-(id)_findAnchorInfoForTextSelection:(id)arg0 anchorPositionOffset:(*CGFloat)arg1 anchorLocation:(*id)arg2 ;
-(id)_lineFragmentInfoForLocation:(id)arg0 affinity:(NSInteger)arg1 ;
-(id)_lineFragmentInfoForPoint:(struct CGPoint )arg0 inContainerAtLocation:(id)arg1 bounds:(struct CGRect )arg2 layoutOrientation:(NSInteger)arg3 beforeDocument:(*BOOL)arg4 afterDocument:(*BOOL)arg5 lineFragmentRange:(*id)arg6 ;
-(id)_lineFragmentInfoForRange:(id)arg0 ;
-(id)_logicalDestinationLocationForTextSelection:(id)arg0 originLocation:(id)arg1 direction:(NSInteger)arg2 destination:(NSInteger)arg3 extending:(BOOL)arg4 confined:(BOOL)arg5 affinity:(*NSInteger)arg6 ;
-(id)_rangeOfCombinedLineFragmentsInRanges:(id)arg0 ;
-(id)_rangesForSelectionStartingOffset:(CGFloat)arg0 inLineFragmentInfo:(id)arg1 endingOffset:(CGFloat)arg2 inLineFragmentInfo:(id)arg3 contiguous:(BOOL)arg4 ;
-(id)_rangesWithDirectionalFormatAdjustmentsForRanges:(id)arg0 ;
-(id)_visualDestinationLocationForTextSelection:(id)arg0 originLocation:(*id)arg1 direction:(NSInteger)arg2 destination:(NSInteger)arg3 extending:(BOOL)arg4 confined:(BOOL)arg5 affinity:(*NSInteger)arg6 crossedLine:(*BOOL)arg7 ;
-(id)deletionRangesForTextSelection:(id)arg0 direction:(NSInteger)arg1 destination:(NSInteger)arg2 allowsDecomposition:(BOOL)arg3 ;
-(id)destinationForTextSelection:(id)arg0 direction:(NSInteger)arg1 destination:(NSInteger)arg2 extending:(BOOL)arg3 ;
-(id)destinationForTextSelection:(id)arg0 direction:(NSInteger)arg1 destination:(NSInteger)arg2 extending:(BOOL)arg3 confined:(BOOL)arg4 ;
-(id)destinationSelectionForTextSelection:(id)arg0 direction:(NSInteger)arg1 destination:(NSInteger)arg2 extending:(BOOL)arg3 confined:(BOOL)arg4 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)resolvedInsertionLocationForTextSelection:(id)arg0 writingDirection:(NSInteger)arg1 ;
-(id)textSelectionForSelectionGranularity:(NSInteger)arg0 enclosingPoint:(struct CGPoint )arg1 inContainerAtLocation:(id)arg2 ;
-(id)textSelectionForSelectionGranularity:(NSInteger)arg0 enclosingPoint:(struct CGPoint )arg1 inContainerAtLocation:(id)arg2 bounds:(struct CGRect )arg3 ;
-(id)textSelectionForSelectionGranularity:(NSInteger)arg0 enclosingTextSelection:(id)arg1 ;
-(id)textSelectionsForPoint:(struct CGPoint )arg0 inContainerAtLocation:(id)arg1 anchors:(id)arg2 modifiers:(NSUInteger)arg3 selecting:(BOOL)arg4 ;
-(id)textSelectionsInteractingAtPoint:(struct CGPoint )arg0 inContainerAtLocation:(id)arg1 anchors:(id)arg2 modifiers:(NSUInteger)arg3 selecting:(BOOL)arg4 ;
-(id)textSelectionsInteractingAtPoint:(struct CGPoint )arg0 inContainerAtLocation:(id)arg1 anchors:(id)arg2 modifiers:(NSUInteger)arg3 selecting:(BOOL)arg4 bounds:(struct CGRect )arg5 ;
-(unsigned char)_bidiLevelAtLocation:(id)arg0 affinity:(NSInteger)arg1 ;
-(void)dealloc;
-(void)flushLayoutCache;


@end


#endif