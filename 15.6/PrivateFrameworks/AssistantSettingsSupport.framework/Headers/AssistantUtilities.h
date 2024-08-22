// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSISTANTUTILITIES_H
#define ASSISTANTUTILITIES_H


#import <Foundation/Foundation.h>


@interface AssistantUtilities : NSObject



+(BOOL)assistantEnabled;
+(BOOL)deviceIsClass:(struct __CFString *)arg0 ;
+(BOOL)deviceIsiPhone;
+(BOOL)deviceIsiPod;
+(BOOL)deviceUsingRingerSwitch;
+(id)assistantLanguage;
+(id)numberFormatter;


@end


#endif