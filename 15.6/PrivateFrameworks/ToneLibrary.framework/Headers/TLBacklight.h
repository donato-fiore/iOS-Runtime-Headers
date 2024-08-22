// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLBACKLIGHT_H
#define TLBACKLIGHT_H

@class NSString, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TLBacklight : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    BOOL _isObservingBacklight;
    NSInteger _backlightStatus;
}


@property (readonly) NSInteger backlightStatus;


+(id)sharedBacklight;
-(id)init;
-(void)_assertNotRunningOnAccessQueue;
-(void)_assertRunningOnAccessQueue;
-(void)_notifyObservers:(id)arg0 ofUpdatedBacklightStatus:(NSInteger)arg1 ;
-(void)_performBlockOnAccessQueue:(id)arg0 ;
-(void)_setObservingBacklight:(BOOL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif