// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKTRACETAPLOCALSHADERTIMELINEEVENTPRODUCER_H
#define DTKTRACETAPLOCALSHADERTIMELINEEVENTPRODUCER_H

@protocol DTKTraceTapLocalEventProducer, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DTKTraceTapLocalShaderTimelineEventProducer : NSObject <DTKTraceTapLocalEventProducer>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_timer;
    int _token;
}




+(BOOL)supportsConfig:(id)arg0 ;
-(id)init;
-(void)_notifyShaderBinaryInfo;
-(void)dealloc;
-(void)pause;
-(void)start;
-(void)stop;
-(void)unpause;


@end


#endif