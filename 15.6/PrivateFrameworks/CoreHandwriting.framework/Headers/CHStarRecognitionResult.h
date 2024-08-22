// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSTARRECOGNITIONRESULT_H
#define CHSTARRECOGNITIONRESULT_H



#import "CHSketchRecognitionResult.h"

@interface CHStarRecognitionResult : CHSketchRecognitionResult

@property (readonly) CGPoint center; // ivar: _center
@property (readonly) CGSize size; // ivar: _size


-(id)initWithString:(id)arg0 score:(CGFloat)arg1 rotation:(CGFloat)arg2 center:(struct CGPoint )arg3 size:(struct CGSize )arg4 ;


@end


#endif