// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALACCUMULATINGQUEUE_H
#define CALACCUMULATINGQUEUE_H

@class NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CalAccumulatingQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    id *_block;
    float _delay;
    BOOL _executionPending;
}




-(id)initWithQueue:(id)arg0 andBlock:(id)arg1 ;
// -(id)initWithQueue:(id)arg0 andBlock:(id)arg1 delay:(unk)arg2  ;
-(void)executeBlock;
-(void)updateTags:(id)arg0 ;
-(void)updateTags:(id)arg0 withContext:(id)arg1 ;
-(void)updateTagsAndExecuteBlock:(id)arg0 ;
-(void)updateTagsAndExecuteBlock:(id)arg0 withContext:(id)arg1 ;


@end


#endif