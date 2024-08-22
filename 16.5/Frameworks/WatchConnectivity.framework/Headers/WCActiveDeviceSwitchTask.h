// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCACTIVEDEVICESWITCHTASK_H
#define WCACTIVEDEVICESWITCHTASK_H


#import <Foundation/Foundation.h>


@interface WCActiveDeviceSwitchTask : NSObject

@property BOOL clientReadyForSessionState; // ivar: _clientReadyForSessionState
@property NSUInteger taskState; // ivar: _taskState


+(id)taskStateToString:(NSUInteger)arg0 ;
-(id)description;


@end


#endif