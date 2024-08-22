// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSEGMENTDESCRIPTOR_H
#define CHSEGMENTDESCRIPTOR_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "CHCutPoint.h"

@interface CHSegmentDescriptor : NSObject

@property (nonatomic) CGRect contextBounds; // ivar: _contextBounds
@property (readonly, nonatomic) CHCutPoint *endCutPoint; // ivar: _endCutPoint
@property (readonly, nonatomic) CGRect segmentBounds; // ivar: _segmentBounds
@property (readonly, nonatomic) NSNumber *segmentID; // ivar: _segmentID
@property (readonly, nonatomic) CHCutPoint *startCutPoint; // ivar: _startCutPoint


+(NSInteger)indexForSegmentID:(id)arg0 fromSegments:(id)arg1 ;
+(id)generateSegmentsFromDrawing:(id)arg0 ;
+(struct CGRect )boundingBoxFromSegmentID:(NSInteger)arg0 toSegmentID:(NSInteger)arg1 withSegments:(id)arg2 withSourceDrawing:(id)arg3 ;
-(BOOL)isSinglePointSegment;
-(NSInteger)strokeCount;
-(id)initWithSegmentID:(id)arg0 startCutPoint:(id)arg1 endCutPoint:(id)arg2 referenceDrawing:(id)arg3 ;
-(id)strokeIndexSet;


@end


#endif