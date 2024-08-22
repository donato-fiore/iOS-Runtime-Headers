// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSLOGGING_H
#define CLSLOGGING_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CLSLogging : NSObject

@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection


+(id)sharedLogging;


@end


#endif