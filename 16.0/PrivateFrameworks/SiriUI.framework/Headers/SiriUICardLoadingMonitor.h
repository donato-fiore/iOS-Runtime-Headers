// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUICARDLOADINGMONITOR_H
#define SIRIUICARDLOADINGMONITOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SiriUICardLoadingMonitor : NSObject {
    NSMutableArray *_observers;
}




+(id)sharedInstance;
-(BOOL)isTrackingObserver:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)broadcastCardSnippet:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif