// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSEGMENTDESCRIPTOR_H
#define CHSEGMENTDESCRIPTOR_H

@class NSMutableArray, NSArray, NSNumber;

#import <Foundation/Foundation.h>

#import "CHCutPoint.h"

@interface CHSegmentDescriptor : NSObject {
    NSMutableArray *_relatedSegmentIDs;
}


@property (nonatomic) CGRect contextBounds; // ivar: _contextBounds
@property (readonly, nonatomic) CHCutPoint *endCutPoint; // ivar: _endCutPoint
@property (readonly, nonatomic) NSArray *relatedSegmentIDs;
@property (readonly, nonatomic) CGRect segmentBounds; // ivar: _segmentBounds
@property (readonly, nonatomic) NSNumber *segmentID; // ivar: _segmentID
@property (readonly, nonatomic) CHCutPoint *startCutPoint; // ivar: _startCutPoint
@property (nonatomic) CGFloat trailingCharBoundaryProbability; // ivar: _trailingCharBoundaryProbability
@property (nonatomic) CGFloat trailingSpaceProbability; // ivar: _trailingSpaceProbability
@property (nonatomic) CGFloat trailingSpaceRatio; // ivar: _trailingSpaceRatio


+(NSInteger)indexForSegmentID:(id)arg0 fromSegments:(id)arg1 ;
+(id)generateSegmentsFromDrawing:(id)arg0 ;
+(id)generateSegmentsFromDrawing:(id)arg0 withSegmentationPoints:(id)arg1 buildingContextBoundsWithRadius:(NSInteger)arg2 spaceProbabilities:(*void)arg3 charBoundaryProbabilities:(*void)arg4 extractDelayedStrokeIDs:(*void)arg5 extractedDelayedSegments:(*id)arg6 ;
+(id)resolvedCutPoint:(id)arg0 withReferenceDrawing:(id)arg1 ;
+(struct CGRect )boundingBoxFromSegmentID:(NSInteger)arg0 toSegmentID:(NSInteger)arg1 withSegments:(id)arg2 withSourceDrawing:(id)arg3 ;
+(void)_computeLocalContextForSegments:(id)arg0 withContextSizeRadius:(NSInteger)arg1 ;
+(void)_resassignSpaceProbabilitiesFromDelayedSegments:(id)arg0 toSegments:(id)arg1 ;
+(void)computeRelatedSegments:(id)arg0 withDelayedSegments:(id)arg1 ;
-(BOOL)isSinglePointSegment;
-(NSInteger)strokeCount;
-(id)initWithSegmentID:(id)arg0 startCutPoint:(id)arg1 endCutPoint:(id)arg2 trailingSpaceProbability:(CGFloat)arg3 trailingCharBoundaryProbability:(CGFloat)arg4 referenceDrawing:(id)arg5 ;
-(id)strokeIndexSet;
-(void)_addRelatedSegmentID:(id)arg0 ;
-(void)dealloc;


@end


#endif