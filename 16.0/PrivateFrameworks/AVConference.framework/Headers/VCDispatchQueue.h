// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCDISPATCHQUEUE_H
#define VCDISPATCHQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCDispatchQueue : NSObject {
    _opaque_pthread_mutex_t _lock;
    NSMutableArray *_rootQueues;
}




+(id)defaultManager;
-(id)getCustomRootQueueWithPriority:(int)arg0 isFixedPriority:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif