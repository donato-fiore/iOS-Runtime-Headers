// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMERINTENTHANDLERPROVIDER_H
#define MTTIMERINTENTHANDLERPROVIDER_H


#import <Foundation/Foundation.h>


@interface MTTimerIntentHandlerProvider : NSObject



+(id)createTimerIntentHandler;
+(id)deleteTimerIntentHandler;
+(id)pauseResumeTimerIntentHandler;
+(id)resetTimerIntentHandler;
+(id)searchTimerIntentHandler;
+(id)setTimerAttributeIntentHandler;


@end


#endif