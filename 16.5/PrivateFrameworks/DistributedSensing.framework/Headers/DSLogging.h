// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSLOGGING_H
#define DSLOGGING_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface DSLogging : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *dsLogger; // ivar: _dsLogger


+(id)sharedInstance;
-(id)init;


@end


#endif