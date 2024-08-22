// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGLOGGING_H
#define PGLOGGING_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGLogging : NSObject

@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection


+(id)memoriesMusicLogging;
+(id)sharedLogging;


@end


#endif