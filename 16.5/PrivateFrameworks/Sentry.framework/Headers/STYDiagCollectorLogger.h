// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STYDIAGCOLLECTORLOGGER_H
#define STYDIAGCOLLECTORLOGGER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface STYDiagCollectorLogger : NSObject

@property (retain) NSObject<OS_os_log> *logHandle; // ivar: _logHandle


+(id)sharedLogger;


@end


#endif