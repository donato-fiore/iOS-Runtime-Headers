// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSCREENONOBSERVER_H
#define WFSCREENONOBSERVER_H

@protocol WFScreenOnObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFScreenOnObserver : NSObject

@property (weak, nonatomic) NSObject<WFScreenOnObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BOOL screenOn; // ivar: _screenOn
@property (nonatomic) int token; // ivar: _token


-(id)init;
-(void)start;
-(void)stateChanged:(BOOL)arg0 ;
-(void)stop;


@end


#endif