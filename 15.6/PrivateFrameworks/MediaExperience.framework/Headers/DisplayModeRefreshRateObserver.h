// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DISPLAYMODEREFRESHRATEOBSERVER_H
#define DISPLAYMODEREFRESHRATEOBSERVER_H

@class CADisplay;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DisplayModeRefreshRateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    CGFloat _refreshRate;
    CADisplay *_tvOutDisplay;
}




-(CGFloat)readHDMILatencyFromCoreAnimation;
-(id)init;
-(int)updateHDMILatencyOnCoreAnimation:(CGFloat)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif