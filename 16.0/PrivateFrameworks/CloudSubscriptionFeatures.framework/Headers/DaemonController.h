// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEMONCONTROLLER_H
#define DAEMONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface DaemonController : NSObject {
    ? listener;
    ? requestHandler;
    ? taskLimiters;
    ? geoCache;
    ? configStore;
    ? accountStore;
    ? minimumActivityInterval;
    ? maximumActivityInterval;
    ? failureActivityInterval;
}




-(id)init;
-(void)start;


@end


#endif