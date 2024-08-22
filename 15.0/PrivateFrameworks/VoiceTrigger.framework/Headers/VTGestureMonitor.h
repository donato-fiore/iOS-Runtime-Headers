// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTGESTUREMONITOR_H
#define VTGESTUREMONITOR_H

@protocol VTGestureMonitorDelegate;

#import <Foundation/Foundation.h>


@interface VTGestureMonitor : NSObject

@property (weak, nonatomic) NSObject<VTGestureMonitorDelegate> *delegate; // ivar: _delegate


+(id)defaultGestureMonitor;
-(void)startObserving;


@end


#endif