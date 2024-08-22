// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMKEYVALUECOALESCER_H
#define CAMKEYVALUECOALESCER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CAMKeyValueCoalescer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_coalescingQueue; // ivar: __coalescingQueue
@property (readonly, copy, nonatomic) id *_handler; // ivar: __handler
@property (readonly, nonatomic) CGFloat _interval; // ivar: __interval
@property (readonly, nonatomic) NSMutableDictionary *_previousValues; // ivar: __previousValues
@property (readonly, nonatomic) NSMutableDictionary *_values; // ivar: __values
@property (retain, nonatomic) NSObject<OS_dispatch_source> *coalescingTimer; // ivar: _coalescingTimer


-(id)initWithInterval:(CGFloat)arg0 handler:(id)arg1 ;
-(void)_pushCoalescedValues;
-(void)coalesceValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)flush;


@end


#endif