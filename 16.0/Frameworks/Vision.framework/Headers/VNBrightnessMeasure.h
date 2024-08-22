// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNBRIGHTNESSMEASURE_H
#define VNBRIGHTNESSMEASURE_H


#import <Foundation/Foundation.h>


@interface VNBrightnessMeasure : NSObject



+(BOOL)computeBrightnessScore:(*float)arg0 onImage:(struct __CVBuffer *)arg1 error:(*id)arg2 ;


@end


#endif