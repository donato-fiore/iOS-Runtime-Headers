// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFDEVICERINGERSWITCHOBSERVER_H
#define AFDEVICERINGERSWITCHOBSERVER_H

@class NSHashTable, NSString;
@protocol AFNotifyObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFNotifyObserver.h"

@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFNotifyObserver *_notifyObserver;
    NSHashTable *_listeners;
    BOOL _isActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


+(id)sharedObserver;
-(id)init;
-(void)_updateStateWithNotifyState:(NSUInteger)arg0 ;
-(void)addListener:(id)arg0 ;
-(void)notifyObserver:(id)arg0 didChangeStateFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)removeListener:(id)arg0 ;


@end


#endif