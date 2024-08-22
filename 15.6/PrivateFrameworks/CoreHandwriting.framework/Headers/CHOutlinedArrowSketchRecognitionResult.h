// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHOUTLINEDARROWSKETCHRECOGNITIONRESULT_H
#define CHOUTLINEDARROWSKETCHRECOGNITIONRESULT_H



#import "CHSketchRecognitionResult.h"

@interface CHOutlinedArrowSketchRecognitionResult : CHSketchRecognitionResult

@property (readonly) CGPoint center; // ivar: _center
@property (readonly) CGPoint controlPoint; // ivar: _controlPoint
@property (readonly) CGSize size; // ivar: _size


-(id)initWithString:(id)arg0 score:(CGFloat)arg1 rotation:(CGFloat)arg2 center:(struct CGPoint )arg3 size:(struct CGSize )arg4 controlPointLocation:(struct CGPoint )arg5 ;


@end


#endif