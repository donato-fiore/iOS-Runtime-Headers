// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSXPCEVENTSTREAM_H
#define DNDSXPCEVENTSTREAM_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDSXPCEventStream : NSObject {
    NSMutableDictionary *_timerHandlersByToken;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)registerTimerHandlerWithServiceIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)setTimer:(id)arg0 ;
-(void)start;


@end


#endif