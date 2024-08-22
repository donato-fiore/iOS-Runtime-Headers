// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LOGGER_H
#define LOGGER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface Logger : NSObject {
    NSObject<OS_os_log> *_logger;
}




+(id)loggerWithCategory:(id)arg0 ;
+(id)loggerWithCategory:(id)arg0 instance:(id)arg1 ;
-(id)getLogger;
-(id)initWithCategory:(id)arg0 instance:(id)arg1 ;


@end


#endif