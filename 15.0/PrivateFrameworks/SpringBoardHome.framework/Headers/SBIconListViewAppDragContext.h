// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONLISTVIEWAPPDRAGCONTEXT_H
#define SBICONLISTVIEWAPPDRAGCONTEXT_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface SBIconListViewAppDragContext : NSObject

@property (nonatomic) BOOL hasPaused; // ivar: _hasPaused
@property (nonatomic) CGPoint pausePoint; // ivar: _pausePoint
@property (retain, nonatomic) NSTimer *pauseTimer; // ivar: _pauseTimer




@end


#endif