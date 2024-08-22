// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNOBSERVABLEEVENTBUFFERINGSTRATEGY_H
#define _CNOBSERVABLEEVENTBUFFERINGSTRATEGY_H


#import <Foundation/Foundation.h>


@interface _CNObservableEventBufferingStrategy : NSObject



+(id)strategyWithEvents:(id)arg0 ;
+(id)strategyWithQueue:(id)arg0 ;
-(BOOL)isSequenceTerminated;
-(id)allEvents;
-(void)addEvent:(id)arg0 ;


@end


#endif