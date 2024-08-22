// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REACHABILITYCALLBACKER_H
#define REACHABILITYCALLBACKER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ReachabilityCallbacker : NSObject {
    function<void ()> _listener;
    NSObject<OS_dispatch_queue> *_queue;
    mutex _lock;
}




-(id)initWithListener:(struct function<void ()> )arg0 queue:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)clearListener;
-(void)dealloc;


@end


#endif