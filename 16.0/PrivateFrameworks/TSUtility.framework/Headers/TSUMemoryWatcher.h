// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUMEMORYWATCHER_H
#define TSUMEMORYWATCHER_H


#import <Foundation/Foundation.h>

#import "TSUFlushingManager.h"

@interface TSUMemoryWatcher : NSObject {
    TSUFlushingManager *_flushingManager;
    BOOL _going;
    BOOL _stop;
}




-(id)initWithFlushingManager:(id)arg0 ;
-(void)_periodicallySimulateMemoryWarning:(id)arg0 ;
-(void)_simulateMemoryWarning:(id)arg0 ;
-(void)beginObserving;
-(void)dealloc;
-(void)stopObserving;


@end


#endif