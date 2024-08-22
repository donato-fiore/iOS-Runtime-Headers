// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHLOGGER_H
#define CHLOGGER_H


#import <Foundation/Foundation.h>


@interface CHLogger : NSObject {
    *os_log_s _logHandle;
}




-(id)initWithDomain:(char *)arg0 ;
-(struct os_log_s *)logHandle;


@end


#endif