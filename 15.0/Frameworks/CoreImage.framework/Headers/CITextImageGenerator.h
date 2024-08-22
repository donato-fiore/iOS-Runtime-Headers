// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CITEXTIMAGEGENERATOR_H
#define CITEXTIMAGEGENERATOR_H

@class NSString, NSNumber;


#import "CIFilter.h"

@interface CITextImageGenerator : CIFilter

@property (retain, nonatomic) NSString *inputFontName; // ivar: inputFontName
@property (retain, nonatomic) NSNumber *inputFontSize; // ivar: inputFontSize
@property (retain, nonatomic) NSNumber *inputScaleFactor; // ivar: inputScaleFactor
@property (retain, nonatomic) NSString *inputText; // ivar: inputText


+(id)customAttributes;
-(id)outputImage;


@end


#endif