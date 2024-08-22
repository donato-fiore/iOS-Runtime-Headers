// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MALOGGING_H
#define MALOGGING_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface MALogging : NSObject

@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection


+(id)sharedLogging;


@end


#endif