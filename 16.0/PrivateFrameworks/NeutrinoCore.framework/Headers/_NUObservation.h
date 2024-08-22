// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUOBSERVATION_H
#define _NUOBSERVATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _NUObservation : NSObject

@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSInteger key; // ivar: _key
@property (readonly, weak, nonatomic) id *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)initWithObserver:(id)arg0 key:(NSInteger)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)notifyWithBlock:(id)arg0 ;


@end


#endif