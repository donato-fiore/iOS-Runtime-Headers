// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVTPWRAPPER_H
#define VCVTPWRAPPER_H


#import <Foundation/Foundation.h>


@interface VCVTPWrapper : NSObject



+(id)connectionContext;
+(id)targetQueue;
+(void)startVTP;
+(void)stopVTP;


@end


#endif