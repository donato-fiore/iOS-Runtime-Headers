// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSDISPATCHQUEUEATTRIBUTES_H
#define BSDISPATCHQUEUEATTRIBUTES_H

@protocol NSCopying, OS_dispatch_queue, OS_dispatch_queue_attr;

#import <Foundation/Foundation.h>


@interface BSDispatchQueueAttributes : NSObject <NSCopying>

 {
    NSObject<OS_dispatch_queue> *_targetQueue;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue_attr> *attributes; // ivar: _attrs


+(id)concurrent;
+(id)serial;
-(id)autoreleaseFrequency:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)inactive;
-(id)serviceClass:(unsigned int)arg0 ;
-(id)serviceClass:(unsigned int)arg0 relativePriority:(int)arg1 ;
-(id)targetQueue:(id)arg0 ;


@end


#endif