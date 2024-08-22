// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAPPMONITOR_H
#define TSAPPMONITOR_H

@protocol TSAppMonitorType;

#import <Foundation/Foundation.h>


@interface TSAppMonitor : NSObject <TSAppMonitorType>

 {
    ? onWindowDidBecomeBackgroundBlock;
    ? onWindowWillBecomeForegroundBlock;
}


@property (nonatomic) BOOL isActive; // ivar: isActive
@property (nonatomic) BOOL isTracking; // ivar: isTracking


-(id)init;
-(id)onWindowDidBecomeBackgroundWithBlock:(id)arg0 ;
-(id)onWindowWillBecomeForegroundWithBlock:(id)arg0 ;
-(void)triggerWithEvent:(NSInteger)arg0 ;


@end


#endif