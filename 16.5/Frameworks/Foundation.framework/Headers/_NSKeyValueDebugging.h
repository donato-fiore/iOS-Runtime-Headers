// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSKEYVALUEDEBUGGING_H
#define _NSKEYVALUEDEBUGGING_H

@class NSMutableDictionary, NSTimer;

#import <Foundation/Foundation.h>


@interface _NSKeyValueDebugging : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_willDidCountTable;
    BOOL _hasScheduledWillDidClear;
    NSMutableDictionary *_consistencyTable;
    NSTimer *_consistencyCheckTimer;
    NSMutableDictionary *_observedKeyPathsByObserver;
}




-(id)init;
-(void)_checkConsistency;
-(void)_checkConsistencyForStatsWhileOutOfLock:(id)arg0 forPair:(id)arg1 timingDescription:(id)arg2 ;
-(void)_clearWillDidTable;
-(void)_object:(id)arg0 trackChangeForKeyOrKeys:(id)arg1 operation:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif