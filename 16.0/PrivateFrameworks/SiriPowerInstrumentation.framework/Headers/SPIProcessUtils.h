// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPIPROCESSUTILS_H
#define SPIPROCESSUTILS_H


#import <Foundation/Foundation.h>


@interface SPIProcessUtils : NSObject



+(id)getProcessNameForPid:(int)arg0 ;
+(int)getUsageForPid:(int)arg0 withOutput:(struct SPIResourceUsage *)arg1 ;
+(unsigned char)getProcessForPid:(int)arg0 ;


@end


#endif