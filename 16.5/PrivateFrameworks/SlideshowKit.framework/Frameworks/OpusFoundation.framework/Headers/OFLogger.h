// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFLOGGER_H
#define OFLOGGER_H


#import <Foundation/Foundation.h>


@interface OFLogger : NSObject



+(id)alloc;
+(void)finalize;
+(void)initialize;
+(void)logMessageWithLevel:(NSInteger)arg0 file:(char *)arg1 line:(unsigned int)arg2 andFormat:(id)arg3 ;


@end


#endif