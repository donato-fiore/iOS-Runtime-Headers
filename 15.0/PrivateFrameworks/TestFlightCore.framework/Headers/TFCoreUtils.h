// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFCOREUTILS_H
#define TFCOREUTILS_H


#import <Foundation/Foundation.h>


@interface TFCoreUtils : NSObject



+(BOOL)tf_deviceHasFaceID;
+(BOOL)tf_deviceHasTopPowerButton;
+(id)tf_screenshotInstructionImageDict;


@end


#endif