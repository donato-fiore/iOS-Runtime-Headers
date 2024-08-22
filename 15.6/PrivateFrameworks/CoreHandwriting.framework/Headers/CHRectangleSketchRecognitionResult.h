// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHRECTANGLESKETCHRECOGNITIONRESULT_H
#define CHRECTANGLESKETCHRECOGNITIONRESULT_H



#import "CHSketchRecognitionResult.h"

@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult

@property (readonly) CGPoint lowerLeftPoint; // ivar: _lowerLeftPoint
@property (readonly) CGPoint lowerRightPoint; // ivar: _lowerRightPoint
@property (readonly) CGSize size; // ivar: _size
@property (readonly) CGPoint upperLeftPoint; // ivar: _upperLeftPoint
@property (readonly) CGPoint upperRightPoint; // ivar: _upperRightPoint


-(id)initWithString:(id)arg0 score:(CGFloat)arg1 rotation:(CGFloat)arg2 upperLeftPoint:(struct CGPoint )arg3 upperRightPoint:(struct CGPoint )arg4 lowerLeftPoint:(struct CGPoint )arg5 lowerRightPoint:(struct CGPoint )arg6 size:(struct CGSize )arg7 ;


@end


#endif