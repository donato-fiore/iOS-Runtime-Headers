// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CICONSTANTCOLORGENERATOR_H
#define CICONSTANTCOLORGENERATOR_H



#import "CIFilter.h"
#import "CIColor.h"

@interface CIConstantColorGenerator : CIFilter

@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor


+(id)customAttributes;
-(id)outputImage;


@end


#endif