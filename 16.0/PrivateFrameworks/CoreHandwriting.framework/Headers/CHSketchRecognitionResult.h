// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSKETCHRECOGNITIONRESULT_H
#define CHSKETCHRECOGNITIONRESULT_H

@class NSString;


#import "CHRecognitionResult.h"

@interface CHSketchRecognitionResult : CHRecognitionResult

@property (readonly) CGFloat rotation; // ivar: _rotation
@property (readonly) NSString *string; // ivar: _string


-(id)initWithString:(id)arg0 score:(CGFloat)arg1 rotation:(CGFloat)arg2 ;


@end


#endif