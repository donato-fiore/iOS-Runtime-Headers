// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCONTROLINTERACTIONSTATE_H
#define HUCONTROLINTERACTIONSTATE_H

@class NAValueThrottler;

#import <Foundation/Foundation.h>


@interface HUControlInteractionState : NSObject

@property (nonatomic) NSUInteger inFlightWriteCount; // ivar: _inFlightWriteCount
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) NAValueThrottler *writeThrottler; // ivar: _writeThrottler
@property (nonatomic, getter=areWritesInProgressOrPossible) BOOL writesInProgressOrPossible; // ivar: _writesInProgressOrPossible




@end


#endif