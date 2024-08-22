// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXQUEUEPERFORMER_H
#define SVXQUEUEPERFORMER_H

@class NSString;
@protocol SVXPerforming, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SVXQueuePerformer : NSObject <SVXPerforming>

 {
    NSString *_identifier;
    NSUInteger _options;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedMainQueuePerformer;
-(BOOL)_isExecutingInContext;
-(id)_initWithIdentifier:(id)arg0 queue:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithIdentifier:(id)arg0 qosClass:(unsigned int)arg1 relativePriority:(int)arg2 options:(NSUInteger)arg3 ;
// -(void)_performBlock:(id)arg0 withOptions:(unk)arg1  ;
// -(void)_performBlockSync:(id)arg0 withOptions:(unk)arg1  ;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 afterDelay:(unk)arg1  ;
// -(void)performBlock:(id)arg0 afterGroup:(unk)arg1  ;
// -(void)performBlock:(id)arg0 withOptions:(unk)arg1  ;
-(void)performBlockSync:(id)arg0 ;


@end


#endif