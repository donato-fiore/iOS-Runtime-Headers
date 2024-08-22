// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHCHATBUBBLERECOGNITIONRESULT_H
#define CHCHATBUBBLERECOGNITIONRESULT_H



#import "CHEllipseRecognitionResult.h"

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult

@property (readonly) CGPoint stemLocation; // ivar: _stemLocation
@property (readonly) CGFloat stemWidth; // ivar: _stemWidth


-(id)initWithString:(id)arg0 score:(CGFloat)arg1 rotation:(CGFloat)arg2 center:(struct CGPoint )arg3 size:(struct CGSize )arg4 stemLocation:(struct CGPoint )arg5 stemWidth:(CGFloat)arg6 ;


@end


#endif