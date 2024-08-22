// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSEILOGGING_H
#define CLSEILOGGING_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CLSEILogging : NSObject

@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection


+(id)sharedLogging;


@end


#endif