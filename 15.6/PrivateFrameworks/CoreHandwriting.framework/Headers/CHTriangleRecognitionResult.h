// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHTRIANGLERECOGNITIONRESULT_H
#define CHTRIANGLERECOGNITIONRESULT_H



#import "CHSketchRecognitionResult.h"

@interface CHTriangleRecognitionResult : CHSketchRecognitionResult

@property (readonly) CGPoint vertex1; // ivar: _vertex1
@property (readonly) CGPoint vertex2; // ivar: _vertex2
@property (readonly) CGPoint vertex3; // ivar: _vertex3


-(id)initWithString:(id)arg0 score:(CGFloat)arg1 rotation:(CGFloat)arg2 vertex1:(struct CGPoint )arg3 vertex2:(struct CGPoint )arg4 vertex3:(struct CGPoint )arg5 ;


@end


#endif