// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFCAPABILITIES_H
#define TFCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface TFCapabilities : NSObject



+(BOOL)hasExtendedColorDisplay;
+(BOOL)isHardwareKeyboardAttached;
+(BOOL)isInternalBuild;


@end


#endif