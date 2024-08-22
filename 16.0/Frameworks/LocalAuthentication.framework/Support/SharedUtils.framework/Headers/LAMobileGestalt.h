// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAMOBILEGESTALT_H
#define LAMOBILEGESTALT_H


#import <Foundation/Foundation.h>


@interface LAMobileGestalt : NSObject



+(BOOL)isIdiomPad;
+(BOOL)isIdiomPhone;
+(NSUInteger)currentDeviceScreenSize;
+(int)_deviceClass;


@end


#endif