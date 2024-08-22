// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMULTIQUEUE_H
#define IMMULTIQUEUE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMMultiQueue : NSObject {
    NSMutableDictionary *_queueMap;
    NSObject<OS_dispatch_queue> *_queue;
}




// -(BOOL)_addBlock:(id)arg0 withGUID:(unk)arg1 forKey:(id)arg2 description:(id)arg3  ;
// -(BOOL)addBlock:(id)arg0 forKey:(unk)arg1 description:(id)arg2  ;
// -(BOOL)addBlock:(id)arg0 withTimeout:(unk)arg1 forKey:(CGFloat)arg2 description:(id)arg3  ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)loggableOverview;
-(id)loggableOverviewForKey:(id)arg0 ;
-(void)_popEnqueuedBlockWithGUID:(id)arg0 key:(id)arg1 ;


@end


#endif