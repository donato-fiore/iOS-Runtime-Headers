// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPASSTHROUGHPRODUCER_H
#define PXSTORYPASSTHROUGHPRODUCER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryPassthroughProducer : NSObject

@property (readonly, nonatomic) BOOL allowsProgress; // ivar: _allowsProgress
@property (readonly, nonatomic) BOOL prefersAsynchronousDelivery; // ivar: _prefersAsynchronousDelivery
@property (readonly, nonatomic) id *result; // ivar: _result
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(id)initWithResult:(id)arg0 ;
-(id)initWithResult:(id)arg0 options:(NSUInteger)arg1 ;
-(id)requestResultWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif