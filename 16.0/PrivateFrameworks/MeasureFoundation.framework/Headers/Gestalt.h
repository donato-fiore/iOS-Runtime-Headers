// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GESTALT_H
#define GESTALT_H


#import <Foundation/Foundation.h>


@interface Gestalt : NSObject



+(BOOL)hasAppleNeuralEngine;
+(BOOL)internalInstall;
+(BOOL)jasperAvailable;
+(id)stringAnswerToQuestion:(struct __CFString *)arg0 ;


@end


#endif