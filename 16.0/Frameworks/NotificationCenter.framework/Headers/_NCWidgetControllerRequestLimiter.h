// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NCWIDGETCONTROLLERREQUESTLIMITER_H
#define _NCWIDGETCONTROLLERREQUESTLIMITER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _NCWidgetControllerRequestLimiter : NSObject {
    NSDate *_lastRequestDate;
    BOOL _isThrottled;
    NSInteger _requestCount;
}




+(id)sharedInstance;
-(BOOL)isRequestPermitted;


@end


#endif