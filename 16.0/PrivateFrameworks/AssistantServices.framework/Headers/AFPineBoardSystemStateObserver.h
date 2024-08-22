// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFPINEBOARDSYSTEMSTATEOBSERVER_H
#define AFPINEBOARDSYSTEMSTATEOBSERVER_H

@class NSHashTable;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface AFPineBoardSystemStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_pineBoardStateGroup;
    NSInteger _pineBoardStateGroupDepth;
    NSHashTable *_listeners;
}


@property (readonly, nonatomic) NSInteger pineBoardSystemState; // ivar: _pineBoardSystemState


+(id)defaultObserver;
-(id)initWithQueue:(id)arg0 ;
-(void)_beginGroup;
-(void)_endGroup;
-(void)_handlePineBoardStateChange:(NSInteger)arg0 ;
-(void)_startObservingPineBoardSystemState;
-(void)addListener:(id)arg0 ;
-(void)removeListener:(id)arg0 ;


@end


#endif