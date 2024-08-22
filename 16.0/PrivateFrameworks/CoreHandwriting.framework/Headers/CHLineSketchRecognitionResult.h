// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHLINESKETCHRECOGNITIONRESULT_H
#define CHLINESKETCHRECOGNITIONRESULT_H

@class NSArray;


#import "CHSketchRecognitionResult.h"

@interface CHLineSketchRecognitionResult : CHSketchRecognitionResult

@property (readonly) CGPoint controlPoint; // ivar: _controlPoint
@property (readonly) BOOL cornerLine; // ivar: _cornerLine
@property (readonly) int endEndpointType; // ivar: _endEndpointType
@property (readonly) CGPoint endLocation; // ivar: _endLocation
@property (readonly) CGPoint midpointLocation; // ivar: _midpointLocation
@property (readonly) NSArray *pathPoints; // ivar: _pathPoints
@property (readonly) int startEndpointType; // ivar: _startEndpointType
@property (readonly) CGPoint startLocation; // ivar: _startLocation


-(id)initWithString:(id)arg0 score:(CGFloat)arg1 rotation:(CGFloat)arg2 startLocation:(struct CGPoint )arg3 startEndpointType:(int)arg4 endLocation:(struct CGPoint )arg5 endEndpointType:(int)arg6 midPointLocation:(struct CGPoint )arg7 controlPointLocation:(struct CGPoint )arg8 ;
-(id)initWithString:(id)arg0 score:(CGFloat)arg1 rotation:(CGFloat)arg2 startLocation:(struct CGPoint )arg3 startEndpointType:(int)arg4 endLocation:(struct CGPoint )arg5 endEndpointType:(int)arg6 midPointLocation:(struct CGPoint )arg7 controlPointLocation:(struct CGPoint )arg8 pathPoints:(id)arg9 ;


@end


#endif