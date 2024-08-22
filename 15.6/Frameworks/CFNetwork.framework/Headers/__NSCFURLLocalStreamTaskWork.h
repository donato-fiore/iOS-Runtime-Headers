// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFURLLOCALSTREAMTASKWORK_H
#define __NSCFURLLOCALSTREAMTASKWORK_H

@class NSError;

#import <Foundation/Foundation.h>


@interface __NSCFURLLocalStreamTaskWork : NSObject {
    char * _static_description;
    CGFloat _timeout;
    CGFloat _timeoutTime;
    NSError *_recvdError;
    BOOL _hasBeenCalledBack;
    BOOL _timerStarted;
}




-(id)description;


@end


#endif