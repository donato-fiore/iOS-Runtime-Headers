// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHTEXTLINESTROKEGROUP_H
#define CHTEXTLINESTROKEGROUP_H

@class NSArray;


#import "CHStrokeGroup.h"

@interface CHTextLineStrokeGroup : CHStrokeGroup {
    NSArray *_writingDirectionSortedSubstrokes;
    CGVector _averageWritingOrientation;
    CGVector _averageStrokeDeviation;
    vector<CGVector, std::allocator<CGVector>> _localStrokeWritingOrientations;
    NSInteger _lastSubstrokeIndexBeforeMerge;
    NSArray *_coalescedLastSubstrokes;
}


@property (readonly, nonatomic) NSArray *writingDirectionSortedStrokeIdentifiers; // ivar: _writingDirectionSortedStrokeIdentifiers


+(BOOL)supportsSecureCoding;
-(*void)localStrokeWritingOrientations;
-(NSInteger)lastSubstrokeIndexBeforeMerge;
-(id)coalescedLastSubstrokes;
-(id)groupByAddingStrokeIdentifiers:(id)arg0 removingStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect )arg4 writingDirectionSortedSubstrokes:(id)arg5 averageWritingOrientation:(struct CGVector )arg6 averageStrokeDeviation:(struct CGVector )arg7 writingDirectionSortedStrokeIdentifiers:(id)arg8 localStrokeWritingOrientations:(*void)arg9 coalescedLastSubstrokes:(id)arg10 groupingConfidence:(CGFloat)arg11 lastSubstrokeIndexBeforeMerge:(NSInteger)arg12 firstStrokeOrigin:(struct CGPoint )arg13 ;
-(id)initWithAncestorIdentifier:(NSInteger)arg0 strokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect )arg4 strategyIdentifier:(id)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(struct CGVector )arg7 averageStrokeDeviation:(struct CGVector )arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(*void)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(CGFloat)arg12 firstStrokeOrigin:(struct CGPoint )arg13 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStrokeIdentifiers:(id)arg0 firstStrokeIdentifier:(id)arg1 lastStrokeIdentifier:(id)arg2 bounds:(struct CGRect )arg3 strategyIdentifier:(id)arg4 writingDirectionSortedSubstrokes:(id)arg5 averageWritingOrientation:(struct CGVector )arg6 averageStrokeDeviation:(struct CGVector )arg7 writingDirectionSortedStrokeIdentifiers:(id)arg8 localStrokeWritingOrientations:(*void)arg9 coalescedLastSubstrokes:(id)arg10 groupingConfidence:(CGFloat)arg11 firstStrokeOrigin:(struct CGPoint )arg12 ;
-(id)initWithUniqueIdentifier:(NSInteger)arg0 ancestorIdentifier:(NSInteger)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect )arg5 strategyIdentifier:(id)arg6 writingDirectionSortedSubstrokes:(id)arg7 averageWritingOrientation:(struct CGVector )arg8 averageStrokeDeviation:(struct CGVector )arg9 writingDirectionSortedStrokeIdentifiers:(id)arg10 localStrokeWritingOrientations:(*void)arg11 coalescedLastSubstrokes:(id)arg12 groupingConfidence:(CGFloat)arg13 firstStrokeOrigin:(struct CGPoint )arg14 ;
-(id)writingDirectionSortedSubstrokes;
-(struct CGPath *)newEstimatedBaselineForStrokesWithTokens:(id)arg0 tokenStrokeIdentifiers:(id)arg1 ;
-(struct CGPath *)newEstimatedBaselineForSubStrokes:(id)arg0 tokens:(id)arg1 tokenSubStrokeIndexes:(id)arg2 estimatedDescenderLocations:(id)arg3 ;
-(struct CGVector )averageStrokeDeviation;
-(struct CGVector )averageWritingOrientation;
-(struct CGVector )localWritingOrientationAtStrokeIndex:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif