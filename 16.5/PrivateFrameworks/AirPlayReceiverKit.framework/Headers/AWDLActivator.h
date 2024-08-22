// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDLACTIVATOR_H
#define AWDLACTIVATOR_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AWDLActivator : NSObject {
    *BonjourBrowser _browser;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}




-(id)init;
-(void)_stopInternal;
-(void)startWithMaxDuration:(NSInteger)arg0 ;
-(void)stop;


@end


#endif