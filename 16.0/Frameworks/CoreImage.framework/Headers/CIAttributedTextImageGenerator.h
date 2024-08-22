// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIATTRIBUTEDTEXTIMAGEGENERATOR_H
#define CIATTRIBUTEDTEXTIMAGEGENERATOR_H

@class NSNumber, NSAttributedString;


#import "CIFilter.h"

@interface CIAttributedTextImageGenerator : CIFilter

@property (retain, nonatomic) NSNumber *inputPadding; // ivar: inputPadding
@property (retain, nonatomic) NSNumber *inputScaleFactor; // ivar: inputScaleFactor
@property (retain, nonatomic) NSAttributedString *inputText; // ivar: inputText


+(id)customAttributes;
-(id)outputImage;


@end


#endif