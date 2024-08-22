// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUICOREDEVICE_H
#define STUICOREDEVICE_H


#import <Foundation/Foundation.h>


@interface STUICoreDevice : NSObject



+(BOOL)isMac;
+(BOOL)isiPad;
+(BOOL)isiPhone;
+(BOOL)isiPodTouch;
+(id)localizedModel;


@end


#endif